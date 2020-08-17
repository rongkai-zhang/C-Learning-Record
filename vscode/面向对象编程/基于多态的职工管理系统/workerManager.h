#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
    //���캯��
    WorkerManager();

    //չʾ�˵�
    void Show_Menu();

    //�˳�ϵͳ
    void ExitSystem();

    //��¼ְ������
    int m_EmpNum;

    //ְ������ָ��
    Worker ** m_EmpArray;

    //���ְ��
    void Add_Emp();

    //�����ļ�
    void save();

    //�ж��ļ��Ƿ�Ϊ��
    bool m_FileIsEmpty;

    //ͳ���ļ��е�����
    int get_EmpNum();

    //��ʼ��ְ��
    void init_Emp();

    //��ʾְ��
    void Show_Emp();

    //ɾ��ְ��
    void Del_Emp();

    //�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������λ�ã������ڷ���-1
    int ISExist(int id);

    //�޸�ְ��
    void Mod_Emp();

    //����ְ��
    void Find_Emp();

    //����ְ���������
    void Sort_Emp();

    //��ղ���
    void Clean_File();

    //��������
    ~WorkerManager();

};