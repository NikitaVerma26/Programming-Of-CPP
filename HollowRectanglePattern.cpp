#include<iostream>
using namespace std;
int main()
{
    int raw,col;
    cout<<"Enter the values of raw and column : ";
    cin>>raw>>col;
    for(int i=1;i<=raw;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==raw)
                cout<<"*";
            else if(j==1 || j==col)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
