#include <iostream>
#include <string>
using namespace std;

//结构体数组
//1. 定义结构体
struct Student
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

int main()
{
    //2创建结构体数组
    struct Student stua[3] =
        {
            {"张三", 18, 100},
            {"李四", 28, 60},
            {"王五", 38, 66}};
    //3. 给结构体数组中的元素赋值
    stua[2].name = "赵六";
    stua[2].age = 10;
    stua[2].score = 88; //可修改它的值
    //遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stua[i].name
             << "年龄：" << stua[i].age
             << "成绩：" << stua[i].score << endl;
    }

    return 0;
}