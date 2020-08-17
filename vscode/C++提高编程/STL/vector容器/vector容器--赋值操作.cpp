#include <iostream>
using namespace std;
#include <vector>

void printVetor(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//vector 赋值
void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    printVetor(v1);

    //赋值  operator=
    vector<int> v2;
    v2 = v1;
    printVetor(v2);

    //assign
    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    printVetor(v3);

    //nelem方式辅助
    vector<int> v4;
    v4.assign(10,100);//10个100
    printVetor(v4);

}

int main()
{
    test01();

    return 0;
}