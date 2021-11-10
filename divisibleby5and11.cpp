#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout<<"Enter a number to check whether it is divisible by 5 and 11: "<<endl;
    cin>>num;
    if(num%5==0 && num%11==0)
        cout<<num <<" Number is divisible by 5 and 11";
    else
        cout<<num <<" Number is not divisible by 5 and 11"<<endl;
    return 0;
}
