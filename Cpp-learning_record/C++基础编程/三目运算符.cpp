#include <iostream>
using namespace std;
int main ()
{
	//三目运算符 
	// 表达式1 ？ 表达式2 ：表达式3
	// 表达式1为真，执行表达式2并返回2 的结果
	// 表达式1为假 ，执行表达式3并返回3的结果 
	//例 创建变量abc
	//  a  b作比较  ，较大的量赋值给c
	int a = 10;
	int b = 20;
	int c = 0;
	 
	c = (a > b ? a : b);
	cout <<"c = "<<c<<endl; 
	
	//在c++里三目运算符返回的变量值，可以继续赋值
	(a>b ? a :b) = 100;
	cout <<"a = "<<a <<endl<<"b = "<<b<<endl; 
	
	
	
	
	
	
	return 0;
 } 
