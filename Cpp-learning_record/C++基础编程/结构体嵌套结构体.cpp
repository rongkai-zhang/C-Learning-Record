#include <iostream>
using namespace std;
//定义学生的结构体
struct studebt
{
    string name;
    int age;
    int score;
};
//定义一个老师的结构体包含一个学生的结构体
struct teacher
{
    int id; //教师编号
    string name;
    int age;
    struct studebt stu; //辅导的学生
};
int main()
{
    //结构体嵌套机构体
    //创建老师
    teacher t;
    t.id = 948587;
    t.age = 30;
    t.name = "老王";
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 99;
    //输出相关信息
    cout << "老师的姓名为：" << t.name << endl
         << "老师的编号为：" << t.id << endl
         << "老师的年龄为：" << t.age << endl
         << "老师辅导的学生姓名：" << t.stu.name << endl
         << "老师辅导的学生的年龄：" << t.stu.age << endl
         << "老师辅导的学生的分数：" << t.stu.score << endl;

    return 0;
}