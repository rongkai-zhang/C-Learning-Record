#include <iostream>
using namespace std;
int main()
{
	//单精度 float
	//双精度 double
	//默认情况下输出的小数有6位有效数字 
	float f1 = 3.14f;//加f它会认为是float  不加会认为是double 
	
	double d1 = 3.1415926;
	cout << "f1 = "<<f1<<endl;
	cout << "d1 = "<<d1<<endl;
	cout<< "float占用的内存空间"<<sizeof(float)<<endl; //4 字节 
	cout<< "double占用的内存空间"<<sizeof(double)<<endl; //8字节 
    //科学计数法
	float f2 = 3e2; //3*10^2
	float f3 = 3e-2; // 3*0.1^2 
	cout <<"f2 = "<< f2<<endl;
	cout <<"f3 = "<< f3<<endl;
	
	return 0;
 } 
