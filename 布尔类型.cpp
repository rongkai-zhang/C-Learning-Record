#include <iostream>
using namespace std;
int main ()
{
	//bool  类型只有两个值 true-->真（1）	false-->假（0）  只占1个字节
	bool flag = true;// true代表真
	cout<<flag<<endl; //输出1 
	
	flag = false;
	cout<<flag<<endl;//输出0
	 
	
    cout<<"bool类型占的内存空间为"<< sizeof(bool)<<endl;
	
	
	
	return 0;
 } 
