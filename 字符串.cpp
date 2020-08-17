#include <iostream>
#include <string>
using namespace std;
int main()
{
	//C风格的字符串  char 变量名【】=“字符串值”
	// c++风格字符串  string 变量名 = “字符串”
	char  str[] = "hello word";//注意事项  1.要加[] 2.要用双引号   
	cout << str<< endl; 
	string str2 = "hello word";//注意要包含头文件  #include<string> 
	cout << str2<<endl; 
	
	
	
	
	return 0;
}
