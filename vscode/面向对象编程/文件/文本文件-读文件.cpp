#include <iostream>
using namespace std;
#include <fstream>

//�ı��ļ� - ���ļ�

void test01()
{
    //1.�Ȱ���ͷ�ļ�

    //2.����������
    ifstream ifs;

    //3.���ļ�  ���ж��Ƿ�򿪳ɹ�
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "�ļ���ʧ����" << endl;
        return;
    }

    //4. ������

    //��һ��
    // char buf[1024] = { 0 }; 
    // while(ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }

    //�ڶ���
    // char buf[1024] = { 0 };
    // while(ifs.getline(buf,sizeof(buf)))  
    // {
    //     cout<<buf<<endl;
    // }

    //������
    string buf;

    while(getline(ifs,buf))
    {
        cout<<buf<<endl;
    }

    //������  ���Ƽ� ����һ��һ���ַ�ȥ����
    // char c;
    // while( (c =ifs.get()) != EOF) //EOF  end of file �ļ�β�ı�־
    // {
    //     cout<<c;
    // }

    //5.�ر��ļ�
    ifs.close();
}

int main()
{
    test01();

    return 0;
}