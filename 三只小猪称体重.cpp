 //  �ֱ�������ֻС������� �ж�˭����
#include <iostream>
using namespace std;
int main ()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout <<"������С��1������"<<endl;
	cin>>num1; 
	
	cout <<"������С��2������"<<endl;
	cin>>num2; 
	
	cout <<"������С��3������"<<endl;
	cin>>num3; 
	
	cout <<"С��1������Ϊ"<<num1<<endl;
	cout <<"С��2������Ϊ"<<num2<<endl;
	cout <<"С��3������Ϊ"<<num3<<endl;
	
	if(num1>num2) //1��2�� 
	{
		if(num1>num3)//1��3�� 
		{
			cout<<"С��1����"<<endl;
		}
		else //3��1��
		{
			cout <<"С��3����"<<endl;
		 } 
	}
	else //2��1��
	{
		if(num2>num3)//2��3�� 
		{
			cout<<"С��2����"<<endl;
			 
		}
		else//3��2��
		{
			cout<<"С��3����"<<endl; 
		 } 
	} 

	return 0;
 } 
