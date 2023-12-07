#include <iostream>

using namespace std;

int main()
{
int n,i,a;
float s=0,k=0,Media_aritmetica;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    if(a%2==0)
    {
        s=s+a;
        k=k+1;
    }
}
Media_aritmetica=s/k;
cout<<"Media aritmetica a numerelor pare este "<<Media_aritmetica;
return 0;
}
