#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Please enter three numbers to check which number is greater : "<<endl;
    cin>>num1>>num2>>num3;
        if(num1>num2 && num1>num3)
            cout<<"greater number is = "<<num1;
        else if(num2>num1 && num2>num3)
            cout<<"greater number is = "<<num2;
        else
            cout<<"greater number is = "<<num3;
    return 0;
}
