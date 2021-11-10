#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout<<"Enter a number to check whether it is divisible by 7: "<<endl;
    cin>>num;
    if(num%7==0)
        cout<<num <<" Number is divisible by 7";
    else
        cout<<num <<" Number is not divisible by 7"<<endl;
        rem=num%7;
        cout<<"remender is "<<rem<<endl;
        if(rem<=6)
            cout<<"now the num is divisible by 7"<<endl<< "the number is = "<<num-rem;
    return 0;
}
