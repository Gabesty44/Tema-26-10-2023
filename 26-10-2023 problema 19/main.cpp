#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
if(c>=8)
    cout<<a<<","<<b<<","<<c;
else
    if(a>b)
        cout<<a;
    else
        cout<<b;
return 0;
}
