#include <iostream>
using namespace std;

//������Ԫ
class Building;
class GoodGay
{
public:
    GoodGay();

    void visit(); //�ιۺ�������Buliding �е�����
    Building *building;
};

class Building
{
    //GoodGay���Ǳ���ĺ����� ���Է��ʱ�����˽�еĳ�Ա
    friend class GoodGay;
public:
    Building();
    string m_SittingRoom; //����

private:
    string m_BedRoom; //����
};

//����ȥд��Ա����
Building::Building()
{
    m_SittingRoom = "����";
    m_BedRoom = "����";
}

GoodGay::GoodGay()
{
    //����һ��������Ķ���
    building = new Building;
}

void GoodGay::visit()
{
    cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{

    test01();

    return 0;
}