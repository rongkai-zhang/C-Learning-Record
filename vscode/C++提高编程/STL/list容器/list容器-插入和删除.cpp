#include <iostream>
using namespace std;
#include <list>
//list容器插入和删除

void printlist(const list<int> d)
{
    for (list<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> L;

    // 尾插
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);

    //头插
    L.push_front(100);
    L.push_front(200);
    L.push_front(300);

    //300 200 100 10 20 30
    printlist(L);

    //尾删
    L.pop_back();
    //300 200 100 10 20
    printlist(L);

    //头删
    L.pop_front();
    // 200 100 10 20
    printlist(L);

    //insert  插入
    list<int>::iterator it = L.begin();
    L.insert(++it, 1000); //(迭代器，要插入的数字)
    //  200 1000 100 10 20
    printlist(L);

    //删除
    it = L.begin();
    L.erase(++it);
    //200  100 10 20
    printlist(L);

    //移除
    L.push_back(10000);
    L.push_back(10000);
    printlist(L);
    L.remove(10000); //带有10000的都删掉
    printlist(L);

    //清空
    L.clear();
    printlist(L);

}

int main()
{
    test01();

    return 0;
}