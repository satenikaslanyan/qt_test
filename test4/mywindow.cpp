#include "mywindow.hpp"

MyWindow::MyWindow()
{
    setWindowTitle("Signals and Slots Example");

    //add some widgets
    labelUsername = new QLabel("Username");
    button = new QPushButton("Submit");
    labelPassword = new QLabel("Password");
    editUsername = new QLineEdit();
    editPassword = new QLineEdit();
    editPassword->setEchoMode(QLineEdit::Password);
    label = new QLabel();

    connect(button, SIGNAL(clicked()), this, SLOT(checkCredentials()));

    mainLayout = new QVBoxLayout; //vertically
    mainLayout->addWidget(labelUsername);
    mainLayout->addWidget(editUsername);
    mainLayout->addWidget(labelPassword);
    mainLayout->addWidget(editPassword);
    mainLayout->addWidget(button);
    mainLayout->addWidget(label);
    setLayout(mainLayout);

}

void MyWindow::checkCredentials()
{
    if(editUsername->text() == "chrys")
    {
        if(editPassword->text() == "password")
        {
            label->setText("Correct");
        }
    }
    else
        label->setText("Wrong");
}
