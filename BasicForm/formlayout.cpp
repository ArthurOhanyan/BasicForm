#include "formlayout.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFormLayout>

formLayout::formLayout(QWidget* parent)
{
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    QFormLayout* formLayout = new QFormLayout();
    mainLayout -> addLayout(formLayout);

    inputName = new QLineEdit();
    inputLastName = new QLineEdit();
    inputAge = new QLineEdit();
    genderCombo = new QComboBox();
    genderCombo -> addItems({"Select", "Male", "Female"});

    //formLayout -> addWidget(inputName);
    formLayout -> addRow("Name :",inputName);
    //formLayout -> addWidget(inputLastName);
    formLayout -> addRow("LastName :", inputLastName);
    //ormLayout -> addWidget(inputAge);
    formLayout -> addRow("Age :",inputAge);
    //formLayout -> addWidget(genderCombo);
    formLayout -> addRow("Gender :", genderCombo);

    applyButton = new QPushButton("Apply");
    connect(applyButton, &QPushButton::clicked, this, &formLayout::showMessage);
    mainLayout -> addWidget(applyButton);

    msgBox = new QMessageBox();
}

void formLayout::showMessage()
{
    if (inputName -> text().isEmpty() || inputLastName -> text().isEmpty() || inputAge -> text().isEmpty() || genderCombo -> currentText() == "Select"){

        msgBox -> setText("There are not declared fild(s), please declear !!!");

    } else {

        msgBox -> setText("The form succesfully decleard ");
    }

    msgBox -> exec();
    inputName -> clear();
    inputLastName -> clear();
    inputAge -> clear();
    genderCombo -> setCurrentIndex(0);

}

