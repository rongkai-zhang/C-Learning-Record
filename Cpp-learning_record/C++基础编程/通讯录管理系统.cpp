#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

struct person //联系人结构体
{
    string m_Name;  //名字
    int m_Sex;      //性别
    int m_Age;      //年龄
    string m_Phone; //电话
    string m_Addr;  //地址
};
struct Addressbooks //通讯录结构体
{
    person Person_arr[MAX]; //通讯录中保存的联系人数组

    int m_Size; //通讯录中当前记录联系人个数
};

void showMenu() //显示菜单页面
{
    cout << "**************************" << endl;
    cout << "*****  1.添加联系人  *****" << endl;
    cout << "*****  2.显示联系人  *****" << endl;
    cout << "*****  3.删除联系人  *****" << endl;
    cout << "*****  4.查找联系人  *****" << endl;
    cout << "*****  5.修改联系人  *****" << endl;
    cout << "*****  6.清空联系人  *****" << endl;
    cout << "*****  0.退出通讯录  *****" << endl;
    cout << "**************************" << endl;
}
void addPerson(Addressbooks *abs) //添加联系人
{
    if (abs->m_Size == MAX) //判断是否已满
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else //添加用户
    {
        cout << "请输入姓名" << endl; //姓名
        cin >> abs->Person_arr[abs->m_Size].m_Name;

        cout << "请输入性别：" << endl; //性别
        {
            cout << "1---男" << endl;
            cout << "2----女" << endl;
            int sex = 0;

            while (1)
            {
                cin >> sex;
                if (sex == 1 || sex == 2)
                {
                    abs->Person_arr[abs->m_Size].m_Sex = sex;
                    break;
                }
                else
                {
                    cout << "输入有误，请重新输入" << endl;
                }
            }
        }
        cout << "请输入年龄：" << endl; //年龄
        int age = 0;
        cin >> age;
        abs->Person_arr[abs->m_Size].m_Age = age;

        cout << "请输入联系电话：" << endl; //电话
        string phone;
        cin >> phone;
        abs->Person_arr[abs->m_Size].m_Phone = phone;

        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->Person_arr[abs->m_Size].m_Addr = address;

        abs->m_Size++; //更新通讯录人数

        cout << "添加成功" << endl;

        system("pause"); //按任意键继续
        system("cls");   //清屏操作
    }
}

void showPerson(Addressbooks *abs) //显示所有联系人
{
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->Person_arr[i].m_Name << "\t";
            cout << "性别：" << (abs->Person_arr[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->Person_arr[i].m_Age << "\t";
            cout << "电话：" << abs->Person_arr[i].m_Phone << "\t";
            cout << "住址：" << abs->Person_arr[i].m_Addr << endl;
        }
    }
    system("pause"); //按任意键继续
    system("cls");   //清屏
}

//检测联系人是否存在 如果存在返回联系人在数组中的位置，不存在返回-1
int isExit(Addressbooks *abs, string name) //传入通讯录和要查找的人名
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->Person_arr[i].m_Name == name)
        {
            return i; //找到后返回这个人的数组下标
        }
    }
    return -1; //遍历没找到 返回-1
}

void deletePerson(Addressbooks *abs) //删除指定联系人
{
    cout << "请输入您要删除的联系人" << endl;

    string name;
    cin >> name;

    //ret == -1 没查到这个人
    //ret !-1  查到了
    int ret = isExit(abs, name);

    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size; i++) //数组中数据前移操作
        {
            abs->Person_arr[i] = abs->Person_arr[i + 1];
        }
        abs->m_Size--; //更新通讯录中的人数
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}
void findPerson(Addressbooks *abs) //查找联系人信息
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExit(abs, name); //判断联系人是否在通讯录中
    if (ret != -1)               //找到了
    {
        cout << "姓名：" << abs->Person_arr[ret].m_Name << "\t";
        cout << "性别：" << abs->Person_arr[ret].m_Sex << "\t";
        cout << "年龄：" << abs->Person_arr[ret].m_Age << "\t";
        cout << "电话：" << abs->Person_arr[ret].m_Phone << "\t";
        cout << "住址：" << abs->Person_arr[ret].m_Addr << endl;
    }
    else //未找到
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}

void modifyPerson(Addressbooks *abs) //修改指定联系人信息
{
    cout << "请输入要修改的联系人姓名" << endl;
    string name;
    cin >> name;

    int ret = isExit(abs, name);
    if (ret != -1) //找到了指定联系人
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->Person_arr[ret].m_Name = name;
        cout << "请输入性别：" << endl;
        cout << "1----男" << endl
             << "2----女" << endl;
        int sex = 0;
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->Person_arr[ret].m_Sex = sex;
                break; //输入正确退出循环
            }
            else
                cout << "输入有误，请重新输入" << endl;
        }
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->Person_arr[ret].m_Age = age;

        cout << "请输入电话" << endl;
        string phone;
        cin >> phone;
        abs->Person_arr[ret].m_Phone = phone;

        cout << "请输入家庭住址" << endl;
        string address;
        cin >> address;
        abs->Person_arr[ret].m_Addr = address;

        cout << "修改成功" << endl;
    }
    else // 未找到
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}

void cleanPerson(Addressbooks *abs) //清空联系人
{
    cout << "是否清空所有联系人?" << endl;
    cout << "1----是" << endl
         << "2---否" << endl;
    int a = 0;

    while (1)
    {
        cin >> a;
        if (a == 1)
        {
            abs->m_Size = 0; //将当前记录联系人数量置零 ，做逻辑清空操作
            cout << "通讯录已清空" << endl;
            break;
        }
        else if (a == 2)
        {
            break;
        }
        else
            cout << "您输入有误" << endl;
    }
    system("pause");
    system("cls");
}
int main()
{
    Addressbooks abs; //创建结构体变量
    abs.m_Size = 0;

    int select = 0; //创建用户选择变量

    while (1)
    {
        showMenu(); //菜单调用
        cin >> select;
        switch (select)
        {
        case 1: // 1.添加联系人
            addPerson(&abs);
            break;
        case 2: //2.显示联系人
            showPerson(&abs);
            break;
        case 3: //3.删除联系人
            deletePerson(&abs);
            break;
        case 4: // 4.查找联系人2

            findPerson(&abs);
            break;
        case 5: // 5.修改联系人
            modifyPerson(&abs);
            break;
        case 6: //6.清空联系人
            cleanPerson(&abs);
            break;
        case 0: // 0.退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}