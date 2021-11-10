#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,rem,sum=0,m;
    m=num;
    cout<<"enter a number to check ARMSTRONG number : ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if(sum==m)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
    return 0;
}
