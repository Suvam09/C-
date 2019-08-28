#include<iostream>
using namespace std;

class employee
{
    int employee_number;
    char employee_name[20];
    int bp;
    float da;
    float gross;
    float incometax;
    float netsal;


    public:
      void readdata();
      void calculate();
      void display();

}c;

void employee::readdata()
{
    cout<<"enter the employee number";
    cin>>employee_number;
    cout<<"enter employee name";
    cin>>employee_name;
    cout<<"enter basic pay";
    cin>>bp;
}
void employee::calculate()
{
    da=0.52*bp;
    gross=bp+da;
    incometax=0.30*da;
    netsal=gross-incometax;

}
void employee::display()
{
    cout<<"the employee number"<<employee_number;
    cout<<"the employee name"<<"employee_name";
    cout<<" the basic pay"<<bp;
    cout<<"the gross salary"<<gross;
    cout<<"the net salary"<<netsal;
}
int main()
{

    c.readdata();
    c.calculate();
    c.display();
}
