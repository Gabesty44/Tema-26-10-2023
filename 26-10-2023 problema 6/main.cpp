#include <iostream>

using namespace std;

int main()
{
int n,i,a,k=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    k=k+a;
}
cout<<"Suma numerelor este "<<k;
return 0;
}
