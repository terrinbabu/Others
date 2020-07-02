#ifndef KINOVA_VOICE_CONTROL_H
#define KINOVA_VOICE_CONTROL_H

#include <QMainWindow>

namespace Ui {
class kinova_voice_control;
}

class kinova_voice_control : public QMainWindow
{
    Q_OBJECT

public:
    explicit kinova_voice_control(QWidget *parent = 0);
    ~kinova_voice_control();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::kinova_voice_control *ui;
};

#endif // KINOVA_VOICE_CONTROL_H
