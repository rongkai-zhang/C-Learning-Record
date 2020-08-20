#include <iostream>
using namespace std;
struct hero
{
    string name;
    int age;
    string sex;
};
void bubbleSort(hero arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                hero t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
void printhero(hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << arr[i].name << "  "
             << "年龄：" << arr[i].age << "  "
             << "性别：" << arr[i].sex << endl;
    }
}
//设计一个英雄的结构体，包括成员的姓名、年龄、性别；构建结构体数组
//数组中有5名英雄，通过冒泡排序的算法，将数组中的英雄按照年龄升序排序，最终输出结果
int main()
{
    hero arr[5] =
        {
            {"刘备  ", 23, " 男"},
            {"关羽  ", 22, " 男"},
            {"张飞  ", 20, " 男"},
            {"赵云  ", 21, " 男"},
            {"貂蝉  ", 19, " 女"}
        };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printhero(arr, len);

    return 0;
}