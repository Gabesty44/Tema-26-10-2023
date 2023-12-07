#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
if(a>b && a>c)
    cout<<"Maximul este "<<a;
if(b>a && b>c)
    cout<<"Maximul este "<<b;
if(c>b && c>a)
    cout<<"Maximul este "<<c;
return 0;
}
