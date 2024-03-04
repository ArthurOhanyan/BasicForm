#ifndef FORMLAYOUT_H
#define FORMLAYOUT_H

#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QMessageBox>


class formLayout : public QWidget
{

    Q_OBJECT

public:

    formLayout(QWidget*);

private slots:
    void showMessage();

private:
    QPushButton* applyButton;
    QLineEdit* inputName;
    QLineEdit* inputLastName;
    QLineEdit* inputAge;
    QComboBox* genderCombo;
    QMessageBox* msgBox;
};

#endif // FORMLAYOUT_H
