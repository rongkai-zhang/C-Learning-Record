#include <iostream>
using namespace std;
#include <string>
//结构体: 属于用户自定义的数据类型，允许存储不同的数据类型
//也就是一些数据类型集合组成的一个类型
//使用方法：
// struct 结构体名 {结构体成员列表} ；

//1.创建学生的数据类型 ：学生包括（姓名，年龄。分数）
struct Student
{
    //成员列表

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}s3;// 顺便创建一个结构体变量
//2.通过学生数据类型创建具体的学生

//2.1 struct Student s1
//2.2 struct Student s2 = {...}
//2.3 在定义结构体时顺便创建结构体变量

int main()
{
    //2.1 struct Student s1
    struct Student s1;//C++里 struct关键字可以省略
    //给s1属性赋值  通过 .访问结构体变量中的属性
    s1.name = "张三 ";
    s1.age = 20;
    s1.score = 100;
    cout << "姓名： " << s1.name << "年龄： " << s1.age << "分数：" << s1.score << endl;

    //2.2 struct Student s2 = {...}
    struct Student s2 = {"李四 ", 18, 90};

    cout << "姓名： " << s2.name << "年龄： " << s2.age << "分数：" << s2.score << endl;
    //2.3 在定义结构体时顺便创建结构体变量  很少用
    s3.name = "王五 ";
    s3.age = 21;
    s3.score = 70;
    cout << "姓名： " << s3.name << "年龄： " << s3.age << "分数：" << s3.score << endl;
   
    

    return 0;
}