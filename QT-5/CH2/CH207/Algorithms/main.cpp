#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a0(argc, argv);
    double a=-19.3,b=9.7;
    
	double c=qAbs(a);        				//qAbs 取绝对值
    
	double max=qMax(b,c);    				//qMax取最大值
    
	int bn=qRound(b);        				//qRound 四舍五入取绝对值
    
	int cn=qRound(c);	
	
    qDebug()<<"a="<<a;
    qDebug()<<"b="<<b;
    qDebug()<<"c=qAbs(a)= "<<c;
    qDebug()<<"qMax(b,c)= "<<max;
    qDebug()<<"bn=qRound(b)= "<<bn;
    qDebug()<<"cn=qRound(c)= "<<cn;
    qSwap(bn,cn);							//qSwap数据交换
    //调用qDebug()函数输出所有的计算结果
    qDebug()<<"qSwap(bn,cn):"<<"bn="<<bn<<" cn="<<cn;

    return a0.exec();
}
