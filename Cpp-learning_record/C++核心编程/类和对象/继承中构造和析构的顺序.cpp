#include <iostream>
using namespace std;

//�̳��еĹ����������˳��
//�ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴
class Base
{
public:
    Base()
    {
        cout <<"Base���캯����"<<endl;
    }
    ~Base()
    {
        cout<<"Base����������"<<endl;
    }
};

class Son:public Base
{
public:
    Son()
    {
        cout <<"Son���캯����"<<endl;
    }
    ~Son()
    {
        cout<<"Son����������"<<endl;
    }

};

void test01()
{
    //Base b;

    //�̳��еĹ����������˳������
    //�ȹ��츸���ٹ������࣬����˳���빹��˳���෴
    Son s;

}

int main()
{

    test01();


    return 0;
}