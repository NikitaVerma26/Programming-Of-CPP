#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter a number to check whether it is even or odd : "<<endl;
    cin>>num;
    if(num%2==0)
        cout<<"number is even";
    else
        cout<<"number is odd";
    return 0;
}
