#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    //结构体指针：通过指针访问结构体中的成员

    //1.创建学生结构体变量
    struct student s = {"张三", 18, 100};

    //2.通过指针指向结构体变量
    student *p = &s; //关键字struct 可以省略

    //3. 通过指针来访问结构体变量中的数据
    //通过结构体指针访问结构体中的属性，要利用‘->’

    cout << "姓名：" << p->name << "  "
         << "年龄: " << p->age << "  "
         << "成绩：" << p->score << "  " << endl;

    return 0;
}