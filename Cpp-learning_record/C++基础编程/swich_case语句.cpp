#include <iostream>
using namespace std;
int main ()
{
  //例 给电影打分 
  //10~9 经典
  // 8~7 还可以 
  // 6~5 一般 
  // 5以下  烂片
  
  int score;
  cout <<"请给电影打分"<<endl;
  cin>> score;
  cout << "您给电影打的分数为："<<score<<endl;
  switch(score)
  {
  	case(10):
      {
  		cout<<"经典电影"<<endl; 
  		break;//退出当前分支 
	  }
	case(9):
	  {
		cout<<"经典电影"<<endl;
		break ;
	  }  
  	case(8):
  		{
  		cout<<"还可以"<<endl;	
  		break; 
		} 
	case(7):
	   {
	   	cout<<"还可以"<<endl;	
  		break; 
		}
	case(6):
		{
		cout <<"一般"<<endl;
		break;	
		}
	case(5):
	    {
	    cout <<"一般"<<endl;
		break;		
		}	
	default :
		{
		cout <<"烂片"<<endl;	
		break;	
		}
	   			
   } 
	//if 和switch的区别 
	// 缺点  判断只能是整形或者字符型，不能是一个区间 
	// 优点  结构清晰 执行效率高 

	return 0;
 } 
