/********************************************************************************
** Form generated from reading UI file 'editedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEDIALOG_H
#define UI_EDITEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditeDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *input_nome_receita;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *input_link;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *input_dificuldade;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *input_categoria;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *inputEstrelas;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cadastrar;
    QPushButton *cancelar;

    void setupUi(QDialog *EditeDialog)
    {
        if (EditeDialog->objectName().isEmpty())
            EditeDialog->setObjectName(QString::fromUtf8("EditeDialog"));
        EditeDialog->resize(750, 364);
        widget = new QWidget(EditeDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 21, 731, 331));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bebas Neue Regular"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        input_nome_receita = new QLineEdit(widget);
        input_nome_receita->setObjectName(QString::fromUtf8("input_nome_receita"));

        horizontalLayout->addWidget(input_nome_receita);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_10->addWidget(label_8);

        input_link = new QLineEdit(widget);
        input_link->setObjectName(QString::fromUtf8("input_link"));

        horizontalLayout_10->addWidget(input_link);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        input_dificuldade = new QComboBox(widget);
        input_dificuldade->addItem(QString());
        input_dificuldade->addItem(QString());
        input_dificuldade->addItem(QString());
        input_dificuldade->addItem(QString());
        input_dificuldade->addItem(QString());
        input_dificuldade->setObjectName(QString::fromUtf8("input_dificuldade"));

        horizontalLayout_3->addWidget(input_dificuldade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        input_categoria = new QComboBox(widget);
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->addItem(QString());
        input_categoria->setObjectName(QString::fromUtf8("input_categoria"));

        horizontalLayout_2->addWidget(input_categoria);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        inputEstrelas = new QLineEdit(widget);
        inputEstrelas->setObjectName(QString::fromUtf8("inputEstrelas"));

        horizontalLayout_4->addWidget(inputEstrelas);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cadastrar = new QPushButton(widget);
        cadastrar->setObjectName(QString::fromUtf8("cadastrar"));

        horizontalLayout_5->addWidget(cadastrar);

        cancelar = new QPushButton(widget);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));

        horizontalLayout_5->addWidget(cancelar);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(EditeDialog);

        QMetaObject::connectSlotsByName(EditeDialog);
    } // setupUi

    void retranslateUi(QDialog *EditeDialog)
    {
        EditeDialog->setWindowTitle(QApplication::translate("EditeDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("EditeDialog", "Nome da receita", nullptr));
        label_8->setText(QApplication::translate("EditeDialog", "LINK DA RECEITA", nullptr));
        label_4->setText(QApplication::translate("EditeDialog", "Grau de dificuldade", nullptr));
        input_dificuldade->setItemText(0, QString());
        input_dificuldade->setItemText(1, QApplication::translate("EditeDialog", "F\303\241cil", nullptr));
        input_dificuldade->setItemText(2, QApplication::translate("EditeDialog", "M\303\251dio", nullptr));
        input_dificuldade->setItemText(3, QApplication::translate("EditeDialog", "D\303\255ficil", nullptr));
        input_dificuldade->setItemText(4, QApplication::translate("EditeDialog", "Profissional", nullptr));

        label_3->setText(QApplication::translate("EditeDialog", "Categoria", nullptr));
        input_categoria->setItemText(0, QString());
        input_categoria->setItemText(1, QApplication::translate("EditeDialog", "Entrada", nullptr));
        input_categoria->setItemText(2, QApplication::translate("EditeDialog", "Prato Principal", nullptr));
        input_categoria->setItemText(3, QApplication::translate("EditeDialog", "Sobremesa", nullptr));
        input_categoria->setItemText(4, QApplication::translate("EditeDialog", "Aperitivo", nullptr));
        input_categoria->setItemText(5, QApplication::translate("EditeDialog", "Acompanhamento", nullptr));
        input_categoria->setItemText(6, QApplication::translate("EditeDialog", "Lanche", nullptr));
        input_categoria->setItemText(7, QApplication::translate("EditeDialog", "Salada", nullptr));
        input_categoria->setItemText(8, QApplication::translate("EditeDialog", "Molho", nullptr));

        label_2->setText(QApplication::translate("EditeDialog", "Estrelas", nullptr));
        cadastrar->setText(QApplication::translate("EditeDialog", "cadastrar", nullptr));
        cancelar->setText(QApplication::translate("EditeDialog", "cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditeDialog: public Ui_EditeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEDIALOG_H
