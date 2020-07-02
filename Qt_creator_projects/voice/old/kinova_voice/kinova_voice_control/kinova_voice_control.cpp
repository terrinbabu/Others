#include "kinova_voice_control.h"
#include "ui_kinova_voice_control.h"
#include <QProcess>

kinova_voice_control::kinova_voice_control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kinova_voice_control)
{
    ui->setupUi(this);
}

kinova_voice_control::~kinova_voice_control()
{
    delete ui;
}

void kinova_voice_control::on_pushButton_clicked()
{
    QProcess *proc = new QProcess();
    proc->start("gnome-terminal -e cd /home/terrin/itia_kinova_ws/src/pocketsphinx/launch; ./launch.sh");
}

void kinova_voice_control::on_pushButton_2_clicked()
{
    QProcess *proc = new QProcess();
    proc->start("killall gnome-terminal-server");
}
