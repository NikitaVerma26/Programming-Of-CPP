#include<iostream>
using namespace std;
int main()
{
    int raw,col;
    cout<<"Enter the vlaues of raws and colomn : ";
    cin>>raw>>col;
    for(int i=1;i<=raw;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cout<<" * ";
            }
        cout<<endl;
        }
    return 0;
}
