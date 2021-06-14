#include <iostream>

using namespace std;
struct Staff
{
    string name;
    int id;
    int age;
    int mainsalary;
    int extrasalary;
    int othersalary;
    int mediumsalary;
};
int addnew=0;
Staff st[50];
void addStaff()
{
    cout<<"Nhap ten nhan vien :";
    cin>>st[addnew].name;
    cout<<"Nhap id nhan vien :";
    cin>>st[addnew].id;
    cout<<"Nhap tuoi nhan vien :";
    cin>>st[addnew].age;
    cout<<"Nhap luong chinh nhan vien :";
    cin>>st[addnew].mainsalary;
    cout<<"Nhap luong phu nhan vien :";
    cin>>st[addnew].extrasalary;
    cout<<"Nhap luong khac nhan vien :";
    cin>>st[addnew].othersalary;
    addnew++;
}
void findStaff()
{
    cout<<"Nhap id can tim :";
    int x=0;
    cin>>x;
    for (int i=0; i<addnew; i++)
    {
        if(x==st[i].id)
        {
            cout<<"\nNhan vien can tim la :"<<st[i].name;
        }
        else
        {
            cout<<"id khong phu hop ";
        }
    }
}
void listStaff()
{
    cout<<"\nDanh sach nhan vien la :";
    for(int i=0; i<addnew; i++)
    {
        cout<<"\n"<<i+1<<" "<<st[i].name<<" "<<st[i].id<<" "<<st[i].age<<" "<<st[i].mainsalary<<" "<<st[i].extrasalary<<" "<<st[i].othersalary;

    }
}
void arrangeStaff()
{
    Staff temp[1];
    for (int i=0; i<addnew-1; i++)
    {
        for (int j=i+1; j<addnew; j++)
        {
            if(st[i].age>=st[j].age)
            {
                temp[0]=st[i];
                st[i]=st[j];
                st[j]=temp[0];
            }
        }
    }
    cout<<"Sap xep theo tuoi cua nhan vien :";
    for (int i=0; i<addnew; i++)
    {
        cout<<" "<<st[i].age;
    }
    listStaff();



}
void mediumStaff()
{
    int tong=0;
    for (int i=0; i<addnew; i++)
    {
        tong=0;
        tong=tong+st[i].mainsalary+st[i].extrasalary+st[i].othersalary;
        st[i].mediumsalary=(tong/3);
        cout<<"\nLuong trung binh cua nhan vien "<<st[i].name<<" : "<<st[i].mediumsalary;
    }
    cout<<"\nDanh sach nhan vien la :";
    for(int i=0; i<addnew; i++)
    {
        cout<<"\n"<<i+1<<" "<<st[i].name<<" "<<st[i].id<<" "<<st[i].age<<" "<<st[i].mainsalary<<" "<<st[i].extrasalary<<" "<<st[i].othersalary<<" "<<st[i].mediumsalary;

    }
}
int main()
{
    int number=0;
    cout<<"1.Nhap thong tin nhan vien ";
    cout<<"\n2.Tim kiem nhan vien theo id ";
    cout<<"\n3.Hien thi danh sach nhan vien ";
    cout<<"\n4.Sap xep nhan vien theo do tuoi tu thap den cao ";
    cout<<"\n5.Tinh luong trung binh cua nhan vien ";
    cout<<"\n6.Ket thuc chuong trinh ";
    do
    {
        cout<<"\n-----------------------------------------------";
        cout<<"\n7.Moi ban nhap chuong trinh :";
        cin>>number;
        switch (number)
        {
        case 1:
            addStaff();
            break;
        case 2 :
            findStaff();
            break;
        case 3:
            listStaff();
            break;
        case 4:
            arrangeStaff();
            break;
        case 5:
            mediumStaff();
            break;
        default:
            break;
        }
    }
    while(0<number<7);
}
