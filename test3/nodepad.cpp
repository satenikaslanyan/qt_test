#include "nodepad.hpp"
#include <QObject>
#include <QApplication>

Notepad::Notepad()
{
    textEdit = new QTextEdit;
    quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    setLayout(layout);

    setWindowTitle("Notepad");
}

void Notepad::quit()
{
    textEdit->setText("Barev");
    QMessageBox messageBox;
    messageBox.setWindowTitle("Notepad");
    messageBox.setText("Do you really want to quit?");
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();
}


