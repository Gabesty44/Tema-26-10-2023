#include <iostream>

using namespace std;

int main()
{
int n,i;
cin>>n;
for(i=5;i<=n*5;i++)
    if(i%5==0)
        cout<<i<<" ";
return 0;
}
