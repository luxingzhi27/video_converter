#include "video_converter_ui.cpp"
#include <QFileDialog>
#include <QObject>
#include <iostream>
#include <filesystem>
#include <stdlib.h>

using namespace std::filesystem;

namespace Ui{
    class VideoConverter: public QMainWindow{
    private:
        path source;
        path target;
        path targetDir;
        Ui_MainWindow* ui;
    public:
        VideoConverter(QWidget *parent= nullptr): QMainWindow(parent){
            ui=new Ui_MainWindow();
            ui->setupUi(this);
            ui->saveFileButton->setDisabled(true);
            ui->startButton->setDisabled(true);
            QObject::connect(ui->openFileButton,&QPushButton::clicked,this,&VideoConverter::openFile);
            QObject::connect(ui->saveFileButton,&QPushButton::clicked,this,&VideoConverter::openDir);
            QObject::connect(ui->targetTypeComboBox,&QComboBox::currentTextChanged,this,&VideoConverter::changeTargetType);
            QObject::connect(ui->startButton,&QPushButton::clicked,this,&VideoConverter::convert);
        }

    private:
        ~VideoConverter(){
            delete ui;
        }

    private slots:
        void openFile(){
            auto sourceStr=QFileDialog::getOpenFileName(this,"choose file",".","video files(*.avi *.mp4 *.mkv *.wmv)");
            if (sourceStr!=""){
                source=sourceStr.toStdString();
                ui->saveFileButton->setDisabled(false);
                ui->sourceLabel->setText(sourceStr);
            }
        }

        void openDir(){
            auto targetStr=QFileDialog::getExistingDirectory(this,"choose save path",".");
            if(targetStr!=""){
                targetDir=targetStr.toStdString();
                target=targetDir;
                target/=source.stem();
                target+='.';
                target+=ui->targetTypeComboBox->currentText().toStdString();
                targetStr=QString::fromStdString(target.string());
                ui->targetLabel->setText(targetStr);
                ui->startButton->setDisabled(false);
            }
        }

        void changeTargetType(){
            if(!target.empty()){
                target=targetDir;
                target/=source.stem();
                target+='.';
                target+=ui->targetTypeComboBox->currentText().toStdString();
                ui->targetLabel->setText(QString::fromStdString(target.string()));
            }
        }

        void convert(){
            ui->startButton->setDisabled(true);
#if defined(WIN32)
            auto command=".\\ffmpeg.exe -i "+source.string()+" "+target.string();
#else
            auto command="./ffmpeg -i "+source.string()+" "+target.string();
#endif
            system(command.c_str());
            ui->startButton->setEnabled(true);
        }
    };
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    auto videoConverter =new Ui::VideoConverter();
    videoConverter->show();
    return QApplication::exec();
}
