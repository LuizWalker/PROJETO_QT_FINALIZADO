/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QAction *actionExcluir;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_6;
    QLabel *logotipo;
    QLabel *plano_de_fundo;
    QWidget *layoutWidget;
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
    QRadioButton *RB4;
    QRadioButton *RB5;
    QRadioButton *RB6;
    QRadioButton *RB7;
    QRadioButton *RB8;
    QPushButton *BT1_cadastro;
    QWidget *tab_2;
    QLabel *plano_de_fundo_2;
    QTableWidget *tabela_dados;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *BT_ordenarPorNome;
    QPushButton *OrganizarPelaDificuldade;
    QPushButton *BT_organizarPelasEstrelas;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ResetarDados;
    QPushButton *AtualizarDados;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *numero_receitas;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *media_estrelas_geral;
    QLabel *Aviso;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(748, 558);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        actionExcluir = new QAction(MainWindow);
        actionExcluir->setObjectName(QString::fromUtf8("actionExcluir"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 751, 511));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 30, 251, 51));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Bebas Neue Bold"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        logotipo = new QLabel(tab);
        logotipo->setObjectName(QString::fromUtf8("logotipo"));
        logotipo->setGeometry(QRect(230, 30, 51, 51));
        logotipo->setPixmap(QPixmap(QString::fromUtf8("../logotipo classificador.png")));
        logotipo->setScaledContents(true);
        plano_de_fundo = new QLabel(tab);
        plano_de_fundo->setObjectName(QString::fromUtf8("plano_de_fundo"));
        plano_de_fundo->setEnabled(true);
        plano_de_fundo->setGeometry(QRect(-40, 0, 791, 491));
        plano_de_fundo->setAutoFillBackground(false);
        plano_de_fundo->setInputMethodHints(Qt::ImhNone);
        plano_de_fundo->setPixmap(QPixmap(QString::fromUtf8("../plano de fundo_1.png")));
        plano_de_fundo->setScaledContents(true);
        plano_de_fundo->setWordWrap(false);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 112, 721, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bebas Neue Regular"));
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        input_nome_receita = new QLineEdit(layoutWidget);
        input_nome_receita->setObjectName(QString::fromUtf8("input_nome_receita"));

        horizontalLayout->addWidget(input_nome_receita);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_10->addWidget(label_8);

        input_link = new QLineEdit(layoutWidget);
        input_link->setObjectName(QString::fromUtf8("input_link"));

        horizontalLayout_10->addWidget(input_link);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        input_dificuldade = new QComboBox(layoutWidget);
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
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        input_categoria = new QComboBox(layoutWidget);
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
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        RB4 = new QRadioButton(layoutWidget);
        RB4->setObjectName(QString::fromUtf8("RB4"));

        horizontalLayout_4->addWidget(RB4);

        RB5 = new QRadioButton(layoutWidget);
        RB5->setObjectName(QString::fromUtf8("RB5"));

        horizontalLayout_4->addWidget(RB5);

        RB6 = new QRadioButton(layoutWidget);
        RB6->setObjectName(QString::fromUtf8("RB6"));

        horizontalLayout_4->addWidget(RB6);

        RB7 = new QRadioButton(layoutWidget);
        RB7->setObjectName(QString::fromUtf8("RB7"));

        horizontalLayout_4->addWidget(RB7);

        RB8 = new QRadioButton(layoutWidget);
        RB8->setObjectName(QString::fromUtf8("RB8"));

        horizontalLayout_4->addWidget(RB8);


        verticalLayout->addLayout(horizontalLayout_4);

        BT1_cadastro = new QPushButton(layoutWidget);
        BT1_cadastro->setObjectName(QString::fromUtf8("BT1_cadastro"));
        BT1_cadastro->setFont(font1);

        verticalLayout->addWidget(BT1_cadastro);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        plano_de_fundo_2 = new QLabel(tab_2);
        plano_de_fundo_2->setObjectName(QString::fromUtf8("plano_de_fundo_2"));
        plano_de_fundo_2->setGeometry(QRect(-10, 0, 761, 491));
        plano_de_fundo_2->setPixmap(QPixmap(QString::fromUtf8("../plano de fundo_1.png")));
        plano_de_fundo_2->setScaledContents(true);
        tabela_dados = new QTableWidget(tab_2);
        if (tabela_dados->columnCount() < 6)
            tabela_dados->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabela_dados->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tabela_dados->setObjectName(QString::fromUtf8("tabela_dados"));
        tabela_dados->setGeometry(QRect(10, 60, 731, 341));
        tabela_dados->setFont(font1);
        tabela_dados->horizontalHeader()->setCascadingSectionResizes(false);
        tabela_dados->horizontalHeader()->setDefaultSectionSize(133);
        tabela_dados->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabela_dados->horizontalHeader()->setStretchLastSection(true);
        tabela_dados->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 410, 721, 66));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        BT_ordenarPorNome = new QPushButton(layoutWidget1);
        BT_ordenarPorNome->setObjectName(QString::fromUtf8("BT_ordenarPorNome"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bebas Neue Regular"));
        font2.setPointSize(12);
        BT_ordenarPorNome->setFont(font2);

        horizontalLayout_7->addWidget(BT_ordenarPorNome);

        OrganizarPelaDificuldade = new QPushButton(layoutWidget1);
        OrganizarPelaDificuldade->setObjectName(QString::fromUtf8("OrganizarPelaDificuldade"));
        OrganizarPelaDificuldade->setFont(font2);

        horizontalLayout_7->addWidget(OrganizarPelaDificuldade);

        BT_organizarPelasEstrelas = new QPushButton(layoutWidget1);
        BT_organizarPelasEstrelas->setObjectName(QString::fromUtf8("BT_organizarPelasEstrelas"));
        BT_organizarPelasEstrelas->setFont(font2);

        horizontalLayout_7->addWidget(BT_organizarPelasEstrelas);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ResetarDados = new QPushButton(layoutWidget1);
        ResetarDados->setObjectName(QString::fromUtf8("ResetarDados"));
        ResetarDados->setFont(font2);

        horizontalLayout_8->addWidget(ResetarDados);

        AtualizarDados = new QPushButton(layoutWidget1);
        AtualizarDados->setObjectName(QString::fromUtf8("AtualizarDados"));
        AtualizarDados->setFont(font2);

        horizontalLayout_8->addWidget(AtualizarDados);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 721, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        numero_receitas = new QLineEdit(layoutWidget2);
        numero_receitas->setObjectName(QString::fromUtf8("numero_receitas"));

        horizontalLayout_5->addWidget(numero_receitas);


        horizontalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_6->addWidget(label_7);

        media_estrelas_geral = new QLineEdit(layoutWidget2);
        media_estrelas_geral->setObjectName(QString::fromUtf8("media_estrelas_geral"));

        horizontalLayout_6->addWidget(media_estrelas_geral);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        Aviso = new QLabel(tab_2);
        Aviso->setObjectName(QString::fromUtf8("Aviso"));
        Aviso->setGeometry(QRect(100, 40, 771, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Black"));
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        Aviso->setFont(font3);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 748, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionSalvar);
        menuMenu->addAction(actionCarregar);
        menuMenu->addAction(actionExcluir);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCarregar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionExcluir->setText(QApplication::translate("MainWindow", "Excluir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExcluir->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("MainWindow", "CLASSIFICADOR    DE   RECEITAS", nullptr));
        logotipo->setText(QString());
        plano_de_fundo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Nome da receita", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "LINK DA RECEITA", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Grau de dificuldade", nullptr));
        input_dificuldade->setItemText(0, QString());
        input_dificuldade->setItemText(1, QApplication::translate("MainWindow", "F\303\241cil", nullptr));
        input_dificuldade->setItemText(2, QApplication::translate("MainWindow", "M\303\251dio", nullptr));
        input_dificuldade->setItemText(3, QApplication::translate("MainWindow", "D\303\255ficil", nullptr));
        input_dificuldade->setItemText(4, QApplication::translate("MainWindow", "Profissional", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Categoria", nullptr));
        input_categoria->setItemText(0, QString());
        input_categoria->setItemText(1, QApplication::translate("MainWindow", "Entrada", nullptr));
        input_categoria->setItemText(2, QApplication::translate("MainWindow", "Prato Principal", nullptr));
        input_categoria->setItemText(3, QApplication::translate("MainWindow", "Sobremesa", nullptr));
        input_categoria->setItemText(4, QApplication::translate("MainWindow", "Aperitivo", nullptr));
        input_categoria->setItemText(5, QApplication::translate("MainWindow", "Acompanhamento", nullptr));
        input_categoria->setItemText(6, QApplication::translate("MainWindow", "Lanche", nullptr));
        input_categoria->setItemText(7, QApplication::translate("MainWindow", "Salada", nullptr));
        input_categoria->setItemText(8, QApplication::translate("MainWindow", "Molho", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Estrelas", nullptr));
        RB4->setText(QApplication::translate("MainWindow", "1", nullptr));
        RB5->setText(QApplication::translate("MainWindow", "2", nullptr));
        RB6->setText(QApplication::translate("MainWindow", "3", nullptr));
        RB7->setText(QApplication::translate("MainWindow", "4", nullptr));
        RB8->setText(QApplication::translate("MainWindow", "5", nullptr));
        BT1_cadastro->setText(QApplication::translate("MainWindow", "Cadastro", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Cadastro", nullptr));
        plano_de_fundo_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabela_dados->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_dados->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Categoria", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_dados->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Grau de dificuldade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela_dados->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Estrelas", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela_dados->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Link", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabela_dados->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Classifica\303\247\303\243o", nullptr));
        BT_ordenarPorNome->setText(QApplication::translate("MainWindow", "Organizar por nome", nullptr));
        OrganizarPelaDificuldade->setText(QApplication::translate("MainWindow", "Organizar pela dificuldade", nullptr));
        BT_organizarPelasEstrelas->setText(QApplication::translate("MainWindow", "Organizar pelas estrelas", nullptr));
        ResetarDados->setText(QApplication::translate("MainWindow", "Resetar Tabela", nullptr));
        AtualizarDados->setText(QApplication::translate("MainWindow", "Atualizar Dados", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "N\303\272mero de receitas cadastradas", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "M\303\251dia de estrelas por receita", nullptr));
        Aviso->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#040404;\">PARA QUAISQUER ALTERA\303\207\303\225ES NA TABELA, SALVE OS DADOS E CARREGUE ANTES DE APERTAR QUALQUER BOT\303\203O</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Banco de Dados(Cadastros)", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
