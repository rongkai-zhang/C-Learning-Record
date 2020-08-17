#include <iostream>
using namespace std;
int main()
{
    //空指针
    //1.控指针用于给指针变量初始化
    int *p = NULL;
    //2.空指针是不可以进行访问的
    // 0~255之间的内存编号是系统内存占用的,不能访问的
    
    //野指针
    //指针指向非法的内存空间
    int *k = (int *)0x1100; //运行不了的  不要访问
    
  return 0;
}