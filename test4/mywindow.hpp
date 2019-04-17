#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QDialog>

class MyWindow : public QDialog
{
    Q_OBJECT
    public:
        MyWindow();

    private slots:
            void checkCredentials();

    private:
        QLabel *labelUsername;
        QPushButton *button;
        QLabel *labelPassword;
        QLineEdit *editUsername;
        QLineEdit *editPassword;
        QLabel *label;
        QVBoxLayout *mainLayout;
};

#endif // MYWINDOW_H

