#include <iostream>
#include <string>
using namespace std;
//用const来防止误操作
//const 的使用场景
//使用函数时候当给函数传递实参相当于复制了一份副本当数据量大的时候
//不如传递指针，指针只占4个字节，但指针会修改参数的值，加上const就可以避免
struct student
{
    string name;
    int age;
    int score;
};
void printstudent(const student *s)
{
    //s->age = 150;  加上const后误操作会报错  ※※※
    cout<<"print函数中"<<endl;
    cout << "姓名：" << s->name << endl
         << "年龄：" << s->age << endl
         << "分数：" << s->score << endl;
}
  
int main()
{
    //创建结构体变量
    student s = {"张三", 20, 100};
    printstudent(&s); 
    cout<<"main函数里"<<endl;
    cout << "姓名：" << s.name << endl
         << "年龄：" << s.age << endl
         << "分数：" << s.score << endl;

    return 0;
}