#include <iostream>
using namespace std;

//�̳еĺô��������ظ�����    //�������д д����
//�﷨�� class ���� ���̳з�ʽ ����
//���� Ҳ��Ϊ ������  
//���� Ҳ��Ϊ ����


//��ͨʵ��ҳ��

//Javaҳ��
// class Java
// {
// public:
//     void header()
//     {
//         cout << "��ҳ�������Ρ���¼��ע�ᡢ..������ͷ����" << endl;
//     }

//     void footer()
//     {
//         cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//     }

//     void left()
//     {
//         cout << "Java��Python��C++��...�����������б�" << endl;
//     }

//     void content()
//     {
//         cout << "Javaѧ����Ƶ" << endl;
//     }
// };

// //Pythonҳ��
// class Python
// {
// public:
//     void header()
//     {
//         cout << "��ҳ�������Ρ���¼��ע�ᡢ..������ͷ����" << endl;
//     }

//     void footer()
//     {
//         cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//     }

//     void left()
//     {
//         cout << "Java��Python��C++��...�����������б�" << endl;
//     }

//     void content()
//     {
//         cout << "Pythonѧ����Ƶ" << endl;
//     }
// };

// //C++ҳ��
// class CPP
// {
// public:
//     void header()
//     {
//         cout << "��ҳ�������Ρ���¼��ע�ᡢ..������ͷ����" << endl;
//     }

//     void footer()
//     {
//         cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//     }

//     void left()
//     {
//         cout << "Java��Python��C++��...�����������б�" << endl;
//     }

//     void content()
//     {
//         cout << "CPPѧ����Ƶ" << endl;
//     }
// };

//�̳�ʵ��ҳ��
class BasePage
{
public:
    void header()
    {
        cout << "��ҳ�������Ρ���¼��ע�ᡢ..������ͷ����" << endl;
    }

    void footer()
    {
        cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
    }

    void left()
    {
        cout << "Java��Python��C++��...�����������б�" << endl;
    }
};

//Javaҳ��
class Java : public BasePage
{
public:
    void content()
    {
        cout<<"Javaѧ����Ƶ"<<endl;
    }

};
//Python
class Python : public BasePage
{
public:
    void content()
    {
        cout<<"Pythonѧ����Ƶ"<<endl;
    }


};
//C++ҳ��
class CPP : public BasePage
{
public:
    void content()
    {
        cout<<"C++ѧ����Ƶ"<<endl;
    }

};





void test01()
{
    cout << "Java������Ƶҳ������" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "-------------------" << endl;
    cout << "Python������Ƶҳ������" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();

    cout << "-------------------" << endl;
    cout << "C++������Ƶҳ������" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();

}



int main()
{
    test01();

    return 0;
}