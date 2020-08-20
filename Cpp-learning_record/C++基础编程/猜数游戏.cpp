#include <iostream>
using namespace std;
int main()
{
    cout<<"哲屙牛逼"<<endl;
    
    int num = rand() %100+1;//生成 0+1~99+1 随机数
    int val = 0;
  
    while (1)
    { 
        cin>> val;
        if (val >num )
        {  
            cout <<"猜测过大"<<endl;
        }
        else if(val<num)
        {
            cout <<"猜测过小"<<endl;

        }
        else {
            cout <<"恭喜您猜对了"<<endl;
            break;
        }
    }



    return 0;
    }