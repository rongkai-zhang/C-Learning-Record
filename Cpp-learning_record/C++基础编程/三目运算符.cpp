#include <iostream>
using namespace std;
int main ()
{
	//��Ŀ����� 
	// ���ʽ1 �� ���ʽ2 �����ʽ3
	// ���ʽ1Ϊ�棬ִ�б��ʽ2������2 �Ľ��
	// ���ʽ1Ϊ�� ��ִ�б��ʽ3������3�Ľ�� 
	//�� ��������abc
	//  a  b���Ƚ�  ���ϴ������ֵ��c
	int a = 10;
	int b = 20;
	int c = 0;
	 
	c = (a > b ? a : b);
	cout <<"c = "<<c<<endl; 
	
	//��c++����Ŀ��������صı���ֵ�����Լ�����ֵ
	(a>b ? a :b) = 100;
	cout <<"a = "<<a <<endl<<"b = "<<b<<endl; 
	
	
	
	
	
	
	return 0;
 } 
