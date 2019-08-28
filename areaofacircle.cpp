#include<iostream>
using namespace std;
class circle
{
    float area;
    int radius;
    static float pi;
    public:
      void accept();
      void calculate();
      void display();

}c;

void circle::accept()
{
    cout<<"enter  the radius of the circle";
    cin>>radius;
}
void circle::calculate()
{
    float pi=3.14;
    area=pi*radius*radius;
}
void circle::display()
{
    cout<<"the area of the circle is "<<area;
}
int main()
{

    c.accept();
    c.calculate();
    c.display();
}
