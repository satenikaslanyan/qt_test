#include <QApplication>
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

Notepad::Notepad()
{
    textEdit = new QTextEdit;
    quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.setWindowTitle("&Notepad");
    window.show();
}

void Notepad::quit()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle("&Notepad");
    messageBox.setText("&Do you really want to quit?");
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();
}


int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Notepad n;

    return app.exec();
}


