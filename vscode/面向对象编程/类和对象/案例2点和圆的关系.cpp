#include <iostream>
using namespace std;

//���Բ�Ĺ�ϵ�İ���
//����

class Point
{
public:
    //����X
    void setX(int x)
    {
        m_X = x;
    }
    //��ȡX
    int getX()
    {
        return m_X;
    }
    //����Y
    void setY(int y)
    {
        m_Y = y;
    }
    //��ȡY
    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

//Բ��
class Circle
{
public:
    //���ð뾶
    void setR(int R)
    {
        m_R = R;
    }
    //��ȡ�뾶
    int getR()
    {
        return m_R;
    }
    //����Բ��
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //��ȡԲ��
    Point getCenter()
    {
        return m_Center;
    }

private:
    int m_R;        //�뾶

    //********�����п�������һ������Ϊ�����еĳ�Ա
    Point m_Center; //Բ��
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point p)
{
    //��������֮������ƽ��
    int distance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    //����뾶��ƽ��
    int rDistance = c.getR() * c.getR();

    //�жϹ�ϵ
    if (distance == rDistance)
    {
        cout << "����Բ��" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "����Բ��" << endl;
    }
    else
    {
        cout << "����Բ��" << endl;
    }
}
int main()
{
    //����һ��Բ
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //����һ����
    Point p;
    p.setX(10);
    p.setY(1);

    //�жϹ�ϵ

    isInCircle(c, p);

    return 0;
}