#include<iostream>
using namespace std;

class x
{
private:
     int a,b;
public:
    void display();
    x(int m,int n)
     { a=m;b=n;}
    x( x&c)
    {
        a=c.a;
        b=c.b;
    }
};
void x::display()
{
    cout<<a<<b<<endl;

}

int main()
{
    x c1(10,15);
    x c2(c1);
    c1.display();
    c2.display();
}
