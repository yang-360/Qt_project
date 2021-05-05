#include "interfacedialog.h"
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<QTextEdit>
#include<QGridLayout>
#include<QPushButton>
interfacedialog::interfacedialog(QWidget *parent) : QWidget(parent)
{
    //左侧
    QLabel *UserNameLabel;
    QLabel *NameLabel;
    QLabel *SexLabel;
    QLabel *DepartmentLabel;
    QLabel *AgeLabel;
    QLabel *OtherLabel;
    QLineEdit *UserNameLineEdit;
    QLineEdit *NameLineEdit;
    QComboBox *SexComboBox;
    QTextEdit *DepartmentTextEdit;
    QLineEdit *AgeLineEdit;
    QGridLayout *LeftLayout;
    //右侧
    QLabel *HeadLabel;          	//右上角部分
    QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QLabel *IntroductionLabel;
    QTextEdit *IntroductionTextEdit;
    QVBoxLayout *RightLayout;
    //底部
    QPushButton *OkBtn;
    QPushButton *CancelBtn;
    QHBoxLayout *ButtomLayout;

    setWindowTitle(tr("Userinfo"));

    UserNameLabel = new QLabel(tr("user:"));
    UserNameLineEdit = new QLineEdit;

    NameLabel = new QLabel(tr("name:"));
    NameLineEdit = new QLineEdit;

    SexLabel = new QLabel(tr("sex:"));
    SexComboBox = new QComboBox;
    SexComboBox->addItem(tr("nam"));
    SexComboBox->addItem(tr("girl"));

    DepartmentLabel = new QLabel(tr("部门："));
    DepartmentTextEdit =new QTextEdit;

    AgeLabel =new QLabel(tr("年龄："));
    AgeLineEdit =new QLineEdit;

    OtherLabel =new QLabel(tr("备注："));
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    LeftLayout =new QGridLayout();
    LeftLayout->addWidget(UserNameLabel,0,0);     		//用户名
    LeftLayout->addWidget(UserNameLineEdit,0,1);
    LeftLayout->addWidget(NameLabel,1,0);               //姓名
    LeftLayout->addWidget(NameLineEdit,1,1);
    LeftLayout->addWidget(SexLabel,2,0);                //性别
    LeftLayout->addWidget(SexComboBox,2,1);
    LeftLayout->addWidget(DepartmentLabel,3,0);        	//部门
    LeftLayout->addWidget(DepartmentTextEdit,3,1);
    LeftLayout->addWidget(AgeLabel,4,0);             	//年龄
    LeftLayout->addWidget(AgeLineEdit,4,1);
    LeftLayout->addWidget(OtherLabel,5,0,1,2);       	//其他
    LeftLayout->setColumnStretch(0,1);
    LeftLayout->setColumnStretch(1,3);

    HeadLabel =new QLabel(tr("头像： "));
    HeadIconLabel =new QLabel;
    QPixmap icon("312.png");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(),icon.height());
    UpdateHeadBtn =new QPushButton(tr("更新"));

    TopRightLayout =new QHBoxLayout();
    TopRightLayout->setSpacing(20);		//设定各个控件之间的间距为20
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);
    IntroductionLabel =new QLabel(tr("个人说明："));		//右下角部分
    IntroductionTextEdit =new QTextEdit;
    RightLayout =new QVBoxLayout();
    RightLayout->setMargin(10);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);

    OkBtn =new QPushButton(tr("确定"));
    CancelBtn =new QPushButton(tr("取消"));
    ButtomLayout =new QHBoxLayout();
    ButtomLayout->addStretch();							//(d)
    ButtomLayout->addWidget(OkBtn);
    ButtomLayout->addWidget(CancelBtn);
    QGridLayout *mainLayout =new QGridLayout(this);     //(e)
    mainLayout->setMargin(15);					//设定对话框的边距为15
    mainLayout->setSpacing(10);
    mainLayout->addLayout(LeftLayout,0,0);
    mainLayout->addLayout(RightLayout,0,1);
    mainLayout->addLayout(ButtomLayout,1,0,1,2);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
