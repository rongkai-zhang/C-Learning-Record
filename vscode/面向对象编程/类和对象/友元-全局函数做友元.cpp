#include <iostream>
using namespace std;

class Buliding
{
    // goodGayȫ�ֺ����� Building������ ���Է���Building��˽�г�Ա
    friend void goodGay(Buliding &buliding);

public:
    Buliding()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
    string m_SittingRoom; //����

private:
    string m_BedRoom; //����
};

//ȫ�ֺ���
void goodGay(Buliding &buliding)
{
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << buliding.m_SittingRoom << endl;

    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << buliding.m_BedRoom << endl;
}

void test01()
{
    Buliding buliding;
    goodGay(buliding);
}

int main()
{

    test01();

    return 0;
}