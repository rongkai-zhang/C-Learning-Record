#include <iostream>
using namespace std;
#define Day 7 
// 1.#define 常量名 数值   宏常量
// 2.const修饰的常量  

int main()
{
	cout<< "一周有"<<Day<<"天"<<endl; 
	
	const int month = 12;//const修饰的变量
	cout <<"一年有" <<month<<"个月份"<<endl ;
	return 0;
}
