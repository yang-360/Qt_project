#include "content.h"

content::content(QWidget *parent) : QFrame(parent)
{


    baseinfo  *m_baseInfo;
    contact *m_contact;
    detail *m_detail;

    stack =new QStackedWidget(this);	//创建一个QStackedWiget对象
    //对堆栈窗口的显示风格进行设置
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);

    /* 插入三个页面 */					//(a)
    m_baseInfo =new baseinfo();
    m_contact =new contact();
    m_detail =new detail();
    stack->addWidget(m_baseInfo);
    stack->addWidget(m_contact);
    stack->addWidget(m_detail);

    /* 创建两个按钮 */					//(b)
    AmendBtn =new QPushButton(tr("修改"));
    CloseBtn =new QPushButton(tr("关闭"));

    QHBoxLayout *BtnLayout =new QHBoxLayout;
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(AmendBtn);
    BtnLayout->addWidget(CloseBtn);

    /* 进行整体布局 */
    QVBoxLayout *RightLayout =new QVBoxLayout(this);
    RightLayout->setMargin(10);
    RightLayout->setSpacing(6);
    RightLayout->addWidget(stack);
    RightLayout->addLayout(BtnLayout);

}
