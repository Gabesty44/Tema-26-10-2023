#include <iostream>

using namespace std;

int main()
{
int i,n,a,s=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    s=s+a;
}
cout<<"Costul cartilor este de "<<s<<" lei";
return 0;
}
