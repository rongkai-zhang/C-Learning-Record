#include <iostream>
using namespace std;

//��������ư���

//1.�������������
//2.�������
// 3. �����Ϊ ��ȡ��������������
//4. �ֱ�����ȫ�ֺ����ͳ�Ա����  �ж��������Ƿ����
class Cube
{
public:
    //���ó�
    void setL(int l)
    {
        m_L = l;
    }
    //��ȡ��
    int getL()
    {
        return m_L;
    }

    //���ÿ�
    void setW(int w)
    {
        m_W = w;
    }
    //��ȡ��
    int getW()
    {
        return m_W;
    }

    //���ø�
    void setH(int h)
    {
        m_H = h;
    }
    //��ȡ��
    int getH()
    {
        return m_H;
    }

    //��ȡ���������
    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    int calculateV()
    {
        return m_L * m_W * m_H;
    }


    //���ó�Ա�����ж������������Ƿ����
    bool isSameclass(Cube &c)
    { 
        if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        {
            return true;
        }
        return false;
    }
private:
    int m_L; //��
    int m_W; //��
    int m_H; //��
};

//����ȫ�ֺ������ж������������Ƿ����
bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}
int main()
{
    //�������������
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1�����Ϊ��" << c1.calculateS() << endl;
    cout << "c1�����Ϊ��" << c1.calculateV() << endl;

    //�����ڶ���������
    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(20);

    bool ret = isSame(c1,c2);
    if(ret)
    {
        cout <<"c1��c2����ȵ�"<<endl;
    }
    else
    {
        cout<<"c1��c2�ǲ���ȵ�"<<endl;
    }
        
    //���ó�Ա�����ж�   
    ret = c1.isSameclass(c2);
    if(ret)
    {
        cout <<"��Ա�����жϵĽ����c1��c2����ȵ�"<<endl;
    }
    else
    {
        cout<<"��Ա�����жϵĽ����c1��c2�ǲ���ȵ�"<<endl;
    }
    return 0;
}