#include <iostream>
using namespace std;
int main ()
{
  //�� ����Ӱ��� 
  //10~9 ����
  // 8~7 ������ 
  // 6~5 һ�� 
  // 5����  ��Ƭ
  
  int score;
  cout <<"�����Ӱ���"<<endl;
  cin>> score;
  cout << "������Ӱ��ķ���Ϊ��"<<score<<endl;
  switch(score)
  {
  	case(10):
      {
  		cout<<"�����Ӱ"<<endl; 
  		break;//�˳���ǰ��֧ 
	  }
	case(9):
	  {
		cout<<"�����Ӱ"<<endl;
		break ;
	  }  
  	case(8):
  		{
  		cout<<"������"<<endl;	
  		break; 
		} 
	case(7):
	   {
	   	cout<<"������"<<endl;	
  		break; 
		}
	case(6):
		{
		cout <<"һ��"<<endl;
		break;	
		}
	case(5):
	    {
	    cout <<"һ��"<<endl;
		break;		
		}	
	default :
		{
		cout <<"��Ƭ"<<endl;	
		break;	
		}
	   			
   } 
	//if ��switch������ 
	// ȱ��  �ж�ֻ�������λ����ַ��ͣ�������һ������ 
	// �ŵ�  �ṹ���� ִ��Ч�ʸ� 

	return 0;
 } 
