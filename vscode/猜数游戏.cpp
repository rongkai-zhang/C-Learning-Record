#include <iostream>
using namespace std;
int main()
{
    cout<<"����ţ��"<<endl;
    
    int num = rand() %100+1;//���� 0+1~99+1 �����
    int val = 0;
  
    while (1)
    { 
        cin>> val;
        if (val >num )
        {  
            cout <<"�²����"<<endl;
        }
        else if(val<num)
        {
            cout <<"�²��С"<<endl;

        }
        else {
            cout <<"��ϲ���¶���"<<endl;
            break;
        }
    }



    return 0;
    }