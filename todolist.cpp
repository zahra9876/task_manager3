#include "todolist.h"

ToDoList::ToDoList(QObject *parent)
    : QObject{parent}
{

}

QVector<ToDoItem> ToDoList::item() const
{
    return mItems;
}

bool ToDoList::setItemIndexAt(int index, const ToDoItem &item)
{
    if(index<0||index >=mItems.size())
            return false;
    const ToDoItem &oldiItem=mItems.at(index);
    if(item.done==oldiItem.done&&item.description==oldiItem.description)
        return false;
    mItems[index]=item;
    return true;
}

void ToDoList::appendItem()
{
    emit preItemAPpended();
    ToDoItem item;
    item.done=false;
    mItems.append(item);
    emit postItemAppended();
}

void ToDoList::removeCompletedItem()
{
    for(int i=0 ;i<mItems.size();){
        if(mItems.at(i).done){
            emit preItemRemoved(i);
            mItems.removeAt(i);
            emit postItemRemoved();
        }
        else{
            i++;
        }
    }
}
