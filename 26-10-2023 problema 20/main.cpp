#include <iostream>

using namespace std;

int main()
{
int i,n,a;
float Ma,k=0,s=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    if(a%2==1)
    {
        s=s+a;
        k=k+1;
    }
}
Ma=s/k;
cout<<"Media aritmetica a numerelor este "<<Ma;
return 0;
}
