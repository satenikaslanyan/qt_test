#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QTextEdit>


int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QTextEdit* textEdit = new QTextEdit;
    QPushButton* quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();

    return app.exec();
}

