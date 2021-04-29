#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QWidget>
#include<QTreeWidgetItem>
namespace Ui {
class treeWidget;
}

class treeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit treeWidget(QWidget *parent = nullptr);
    ~treeWidget();
    void init();
    void updateParentItem(QTreeWidgetItem* item);
public slots:
    void treeItemChanged(QTreeWidgetItem* item, int column);
private:
    Ui::treeWidget *ui;
};

#endif // TREEWIDGET_H
