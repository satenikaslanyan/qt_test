#ifndef NODEPAD_HPP
#define NODEPAD_HPP

#include <QObject>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QTextEdit>
#include <QMessageBox>

class Notepad : public QWidget
{
    Q_OBJECT

    public:
        Notepad();

    private slots:
        void quit();

    private:
        QTextEdit* textEdit;
        QPushButton* quitButton;
};

#endif // NODEPAD_HPP
