#include <iostream>
#include <string>
using namespace std;
struct student //学生
{
    string name;
    int score;
};
struct teacher //老师
{
    string name;
    struct student sa[5];
};
void allocatespace(struct teacher ta[], int len) //赋值函数
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        ta[i].name = "techer_";
        ta[i].name += nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            ta[i].sa[j].name = "student_";
            ta[i].sa[j].name += nameSeed[j];
            ta[i].sa[j].score = 60;
        }
    }
}
void print(struct teacher ta[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名" << ta[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名：" << ta[i].sa[j].name
                 << "  考试分数" << ta[i].sa[j].score << endl;
        }
    }
}

//案例描述：
//学校正在做毕设项目，每名老师带五个学生，总共有三名老师，需求如下
//设计学生和老师的结构体，在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带学生赋值
//最终打印出老师数据以及老师所带学生的数据
int main()
{
    teacher ta[3]; //创建3名老师的数组
    int len = sizeof(ta) / sizeof(ta[0]);
    allocatespace(ta, len); //用函数给3名老师赋值并给老师所带的学生赋值
    print(ta, len);

    return 0;
}