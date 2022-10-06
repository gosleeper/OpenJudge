#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

class Integer
{
public:
    Integer(int _n)
    {
        n=_n;
        cout<<"Integer "<<n<<" construction."<<endl;
    }
    Integer(Integer &an)
    {
        n=an.n;
        cout<<"Integer "<<n<<" duplicate."<<endl;
    }
    int value()
    {
        return n;
    }
    ~Integer()
    {
        cout<<"Integer "<<n<<" destruction."<<endl;
    }
private:
    int n;
};

class Fraction
{
public:
    Fraction(Integer& _n1,Integer& _n2):n1(_n1),n2(_n2)
    {
       cout<<"Fraction "<<n1.value()<<"/"<<n2.value()<<" construction."<<endl;
    }
    Integer& numerator()
    {
        return n1;
    }
    Integer& denominator()
    {
        return n2;
    }
    double value()
    {
        return (double)n1.value()/(double)n2.value();
    }
    ~Fraction()
    {
        cout<<"Fraction "<<n1.value()<<"/"<<n2.value()<<" destruction."<<endl;
    }
private:
    Integer n1,n2;
};

int main()
{
    int n, d;
    while(cin >> n >> d)
    {
        Integer num(n), den(d);
        Fraction f(num, den);
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
    }
}

/**************************************************************
	Problem: 2587
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

