#include<iostream>
using namespace std;
int main()
{
    int num,i=1,fact=1;
    cout<<"Enter a number to find factorial : "<<endl;
    cin>>num;
    while(i<=num)
        {
            fact*=i;
            i++;
        }
    cout<<"factorial = "<<fact;
}
