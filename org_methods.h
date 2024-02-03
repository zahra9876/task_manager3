#ifndef ORG_METHODS_H
#define ORG_METHODS_H
#include<QString>
#include <QTextStream>

class Org_Methods
{
public:
       Org_Methods();


       // اضافه کردن سازمان جدید
       void addOrganization(const QString& orgName, const QString& orgDescription);

       // حذف سازمان
       void deleteOrganization(const QString& orgName);

       // ویرایش توضیحات سازمان
       void editOrganizationDescription(const QString& orgName, const QString& newDescription);

};

#endif // ORG_METHODS_H
