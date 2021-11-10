#include<iostream>
using namespace std;
int main()
{
    int tem;
    cout<<"Please enter the Temparature : "<<endl;
    cin>>tem;
    if(tem<0)
        cout<<"It is SOLID";
    else if(tem>=0&&tem>=100)
        cout<<"It is LIQUID";
    else
        cout<<"It is GAS";
    return 0;
}
