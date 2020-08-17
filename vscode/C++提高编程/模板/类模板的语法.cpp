#include <iostream>
using namespace std;
#include <string>

//类模板
template <class Nametype ,class AgeType>
class Person
{
public:
    Person(Nametype name ,AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson()
    {
        cout<<"name: "<<this->m_Name<<endl;
        cout<<"age: "<<this->m_Age<<endl;
    }

    Nametype m_Name;
    AgeType m_Age;
};

void test01()
{
    Person<string , int> p1("孙悟空" ,999); 
    p1.showPerson();

}

int main()
{
    test01();
    return 0;
}