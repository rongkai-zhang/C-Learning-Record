#include <iostream>
using namespace std;
int main()
{
	//������ float
	//˫���� double
	//Ĭ������������С����6λ��Ч���� 
	float f1 = 3.14f;//��f������Ϊ��float  ���ӻ���Ϊ��double 
	
	double d1 = 3.1415926;
	cout << "f1 = "<<f1<<endl;
	cout << "d1 = "<<d1<<endl;
	cout<< "floatռ�õ��ڴ�ռ�"<<sizeof(float)<<endl; //4 �ֽ� 
	cout<< "doubleռ�õ��ڴ�ռ�"<<sizeof(double)<<endl; //8�ֽ� 
    //��ѧ������
	float f2 = 3e2; //3*10^2
	float f3 = 3e-2; // 3*0.1^2 
	cout <<"f2 = "<< f2<<endl;
	cout <<"f3 = "<< f3<<endl;
	
	return 0;
 } 
