#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a,b,c,s;
double A,p;
cin>>a>>b>>c;
p=(a+b+c)/2;
A=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<"Aria triunghiului este "<<A;
return 0;
}
