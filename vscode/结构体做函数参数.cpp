#include <iostream>
using namespace std;
//定义学生的结构体
struct student
{
    string name;
    int age;
    int score;
};
//1.值传递
void printstudent1(struct student s)
{
    s.age = 200;
    cout << "函数1中姓名：" << s.name << endl
         << "函数1中年龄：" << s.age << endl
         << "函数1中分数：" << s.score << endl;
}
//2.地址传递
void prnitstudent2(struct student *p)
{
    p->age = 300;
    cout << "函数2中姓名：" << p->name << endl
         << "函数2中年龄：" << p->age << endl
         << "函数2中分数：" << p->score << endl;
}
int main()
{
    //结构体做函数的参数
    //将学生传入一个参数中输出学生的信息
    student s;
    s.name = "张三";
    s.age = 20;
    s.score = 100;
    printstudent1(s);
    prnitstudent2(&s);
    cout << "main函数中姓名：" << s.name << endl
         << "main函数中年龄：" << s.age << endl
         << "main函数中分数：" << s.score << endl;

    return 0;
}