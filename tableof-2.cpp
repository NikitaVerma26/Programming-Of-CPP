#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(i=1;i<=10;i++)
        {
            cout<<num<<"x"<<i<<"="<<num*i<<endl;
        }
    return 0;
}
