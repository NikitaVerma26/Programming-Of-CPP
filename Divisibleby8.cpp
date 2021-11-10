#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout<<"Enter a number to check whether it is divisible by 8: "<<endl;
    cin>>num;
    if(num%8==0)
        cout<<num <<" Number is divisible by 8";
    else
        cout<<num <<" Number is not divisible by 8"<<endl;
        rem=num%7;
        cout<<"remender is "<<rem<<endl;
        if(rem<=7)
            cout<<"now the num is divisible by 8"<<endl<< "the number is = "<<num-rem;
    return 0;
}
