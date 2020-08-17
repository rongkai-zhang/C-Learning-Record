#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

struct person //��ϵ�˽ṹ��
{
    string m_Name;  //����
    int m_Sex;      //�Ա�
    int m_Age;      //����
    string m_Phone; //�绰
    string m_Addr;  //��ַ
};
struct Addressbooks //ͨѶ¼�ṹ��
{
    person Person_arr[MAX]; //ͨѶ¼�б������ϵ������

    int m_Size; //ͨѶ¼�е�ǰ��¼��ϵ�˸���
};

void showMenu() //��ʾ�˵�ҳ��
{
    cout << "**************************" << endl;
    cout << "*****  1.�����ϵ��  *****" << endl;
    cout << "*****  2.��ʾ��ϵ��  *****" << endl;
    cout << "*****  3.ɾ����ϵ��  *****" << endl;
    cout << "*****  4.������ϵ��  *****" << endl;
    cout << "*****  5.�޸���ϵ��  *****" << endl;
    cout << "*****  6.�����ϵ��  *****" << endl;
    cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
    cout << "**************************" << endl;
}
void addPerson(Addressbooks *abs) //�����ϵ��
{
    if (abs->m_Size == MAX) //�ж��Ƿ�����
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
        return;
    }
    else //����û�
    {
        cout << "����������" << endl; //����
        cin >> abs->Person_arr[abs->m_Size].m_Name;

        cout << "�������Ա�" << endl; //�Ա�
        {
            cout << "1---��" << endl;
            cout << "2----Ů" << endl;
            int sex = 0;

            while (1)
            {
                cin >> sex;
                if (sex == 1 || sex == 2)
                {
                    abs->Person_arr[abs->m_Size].m_Sex = sex;
                    break;
                }
                else
                {
                    cout << "������������������" << endl;
                }
            }
        }
        cout << "���������䣺" << endl; //����
        int age = 0;
        cin >> age;
        abs->Person_arr[abs->m_Size].m_Age = age;

        cout << "��������ϵ�绰��" << endl; //�绰
        string phone;
        cin >> phone;
        abs->Person_arr[abs->m_Size].m_Phone = phone;

        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->Person_arr[abs->m_Size].m_Addr = address;

        abs->m_Size++; //����ͨѶ¼����

        cout << "��ӳɹ�" << endl;

        system("pause"); //�����������
        system("cls");   //��������
    }
}

void showPerson(Addressbooks *abs) //��ʾ������ϵ��
{
    if (abs->m_Size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "������" << abs->Person_arr[i].m_Name << "\t";
            cout << "�Ա�" << (abs->Person_arr[i].m_Sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << abs->Person_arr[i].m_Age << "\t";
            cout << "�绰��" << abs->Person_arr[i].m_Phone << "\t";
            cout << "סַ��" << abs->Person_arr[i].m_Addr << endl;
        }
    }
    system("pause"); //�����������
    system("cls");   //����
}

//�����ϵ���Ƿ���� ������ڷ�����ϵ���������е�λ�ã������ڷ���-1
int isExit(Addressbooks *abs, string name) //����ͨѶ¼��Ҫ���ҵ�����
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->Person_arr[i].m_Name == name)
        {
            return i; //�ҵ��󷵻�����˵������±�
        }
    }
    return -1; //����û�ҵ� ����-1
}

void deletePerson(Addressbooks *abs) //ɾ��ָ����ϵ��
{
    cout << "��������Ҫɾ������ϵ��" << endl;

    string name;
    cin >> name;

    //ret == -1 û�鵽�����
    //ret !-1  �鵽��
    int ret = isExit(abs, name);

    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size; i++) //����������ǰ�Ʋ���
        {
            abs->Person_arr[i] = abs->Person_arr[i + 1];
        }
        abs->m_Size--; //����ͨѶ¼�е�����
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}
void findPerson(Addressbooks *abs) //������ϵ����Ϣ
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExit(abs, name); //�ж���ϵ���Ƿ���ͨѶ¼��
    if (ret != -1)               //�ҵ���
    {
        cout << "������" << abs->Person_arr[ret].m_Name << "\t";
        cout << "�Ա�" << abs->Person_arr[ret].m_Sex << "\t";
        cout << "���䣺" << abs->Person_arr[ret].m_Age << "\t";
        cout << "�绰��" << abs->Person_arr[ret].m_Phone << "\t";
        cout << "סַ��" << abs->Person_arr[ret].m_Addr << endl;
    }
    else //δ�ҵ�
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}

void modifyPerson(Addressbooks *abs) //�޸�ָ����ϵ����Ϣ
{
    cout << "������Ҫ�޸ĵ���ϵ������" << endl;
    string name;
    cin >> name;

    int ret = isExit(abs, name);
    if (ret != -1) //�ҵ���ָ����ϵ��
    {
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->Person_arr[ret].m_Name = name;
        cout << "�������Ա�" << endl;
        cout << "1----��" << endl
             << "2----Ů" << endl;
        int sex = 0;
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->Person_arr[ret].m_Sex = sex;
                break; //������ȷ�˳�ѭ��
            }
            else
                cout << "������������������" << endl;
        }
        cout << "����������" << endl;
        int age = 0;
        cin >> age;
        abs->Person_arr[ret].m_Age = age;

        cout << "������绰" << endl;
        string phone;
        cin >> phone;
        abs->Person_arr[ret].m_Phone = phone;

        cout << "�������ͥסַ" << endl;
        string address;
        cin >> address;
        abs->Person_arr[ret].m_Addr = address;

        cout << "�޸ĳɹ�" << endl;
    }
    else // δ�ҵ�
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}

void cleanPerson(Addressbooks *abs) //�����ϵ��
{
    cout << "�Ƿ����������ϵ��?" << endl;
    cout << "1----��" << endl
         << "2---��" << endl;
    int a = 0;

    while (1)
    {
        cin >> a;
        if (a == 1)
        {
            abs->m_Size = 0; //����ǰ��¼��ϵ���������� �����߼���ղ���
            cout << "ͨѶ¼�����" << endl;
            break;
        }
        else if (a == 2)
        {
            break;
        }
        else
            cout << "����������" << endl;
    }
    system("pause");
    system("cls");
}
int main()
{
    Addressbooks abs; //�����ṹ�����
    abs.m_Size = 0;

    int select = 0; //�����û�ѡ�����

    while (1)
    {
        showMenu(); //�˵�����
        cin >> select;
        switch (select)
        {
        case 1: // 1.�����ϵ��
            addPerson(&abs);
            break;
        case 2: //2.��ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3: //3.ɾ����ϵ��
            deletePerson(&abs);
            break;
        case 4: // 4.������ϵ��2

            findPerson(&abs);
            break;
        case 5: // 5.�޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6: //6.�����ϵ��
            cleanPerson(&abs);
            break;
        case 0: // 0.�˳�ͨѶ¼
            cout << "��ӭ�´�ʹ��" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}