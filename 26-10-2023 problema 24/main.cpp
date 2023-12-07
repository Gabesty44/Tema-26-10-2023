#include <iostream>

using namespace std;

int main()
{
int x;
cin>>x;
if(x<61)
    cout<<"CORECT";
if(x>=61 && x<=80)
    cout<<"AMENDA";
if(x>80)
    cout<<"CARNET SUSPENDAT";
return 0;
}
