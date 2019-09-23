#include<iostream>
using namespace std;

class complex
{
    int r,c;
public:
    void read()
    {
        cout<<"enter the real and i no";
        cin>>r>>c;

    }
    complex add(int x,complex p)
    {
        complex a;
        a.r=x+p.r;
        a.c=p.c;
        return a;
    }
    complex add(complex i,complex j)
    {
        complex a;
        a.r=i.r+j.r;
        a.c=i.c+j.c;
        return a;
    }
    void display()
    {
        cout<<r<<"+"<<c<<"k"<<endl;
    }

};
int main()
{
    complex s1,s2,s3,s4,s5,s6;
    int w;
    cout<<"enter the value of the real number";
    cin>>w;
    s1.read();
    s2.read();
    s5=s3.add(w,s1);
    s6=s4.add(s1,s2);
    s5.display();
    s6.display();

}
