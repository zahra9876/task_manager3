#ifndef TODOLIST_H
#define TODOLIST_H
#include<QString>
#include <QObject>
#include<QVector>
struct ToDoItem{
    bool done;
    QString description;

};

class ToDoList : public QObject
{
    Q_OBJECT
public:
    explicit ToDoList(QObject *parent = nullptr);
    QVector<ToDoItem> item() const;
    bool setItemIndexAt(int index,const ToDoItem &item);
signals:
    void preItemAPpended();
    void postItemAppended();
    void preItemRemoved(int index);
    void postItemRemoved();
public slots:
    void appendItem();
    void removeCompletedItem();
private:
    QVector<ToDoItem>mItems;
};

#endif // TODOLIST_H
