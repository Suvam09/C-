#include<iostream>
using namespace std;

class time
{
 int hours;
 int minutes;
 public: void read()
 {
     cout<<"enter hours";
     cin>>hours;
     cout<<"enter minutes";
     cin>>minutes;
 }
 time add(time t1,int x)
 {
     time a;
     a.minutes=x+t1.minutes;
     a.hours=t1.hours;
     while(a.minutes>=60)
     {
         a.hours=a.hours+1;
         a.minutes=a.minutes-60;
     }
     return a;
 }
 time add(time t1,time t2)
 {
     time a;
     a.minutes=t1.minutes+t2.minutes;
     a.hours=t1.hours+t2.hours;
     while(a.minutes>=60)
     {
         a.hours=a.hours+1;
         a.minutes=a.minutes-60;
     }
     return a;
 }
 void display()
 {
     cout<<"the time is"<<hours<<"and"<<minutes<<endl;
 }
};
int main()
{
    time s1,s2,s3,s4,s5,s6;
    int w;
    cout<<"enter minutes"<<endl;
    cin>>w;
    s1.read();
    s2.read();
    s5=s3.add(s1,w);
    s6=s4.add(s1,s2);
    s5.display();
    s6.display();
}
