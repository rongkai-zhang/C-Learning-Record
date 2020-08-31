 //  分别输入三只小猪的重量 判断谁最重
#include <iostream>
using namespace std;
int main ()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout <<"请输入小猪1的体重"<<endl;
	cin>>num1; 
	
	cout <<"请输入小猪2的体重"<<endl;
	cin>>num2; 
	
	cout <<"请输入小猪3的体重"<<endl;
	cin>>num3; 
	
	cout <<"小猪1的体重为"<<num1<<endl;
	cout <<"小猪2的体重为"<<num2<<endl;
	cout <<"小猪3的体重为"<<num3<<endl;
	
	if(num1>num2) //1比2重 
	{
		if(num1>num3)//1比3重 
		{
			cout<<"小猪1最重"<<endl;
		}12
		else //3比1重
		{
			cout <<"小猪3最重"<<endl;
		 } 
	}
	else //2比1重
	{
		if(num2>num3)//2比3重 
		{
			cout<<"小猪2最重"<<endl;
			 
		}
		else//3比2重
		{
			cout<<"小猪3最重"<<endl; 
		 } 
	} 

	return 0;
 } 
