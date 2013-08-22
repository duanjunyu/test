#include <iostream>
#include <string>
#include <cstdlib>
/*
构造和初始化顺序：
1、基类的类成员初始化
2、基类构造函数
3、派生类的类成员初始化
4、派生类构造函数

销毁顺序：
1、子类析构函数
2、子类的类成员析构、销毁
3、派生类析构函数
4、派生类的类成员析构、销毁

这两个顺序，可以用入栈、出栈操作来理解~其顺序刚好相反
*/
using namespace std;
class c
{
public:
    c(){cout<<"class c construct"<<endl;}
    ~c(){cout<<"class c destruct"<<endl;}
};
class base
{
public:
    base(){cout<<"base construct"<<endl;}
    ~base(){cout<<"base destruct"<<endl;}
    c obj;
};
class d
{
public:
    d(){cout<<"class d construct"<<endl;}
    ~d(){cout<<"class d destruct"<<endl;}
};
class child: public base
{
public:
    child(){cout<<"child construct"<<endl;}
    ~child(){cout<<"child destruct"<<endl;}
    d obj1;
};

int main()
{
    child obj;
}
