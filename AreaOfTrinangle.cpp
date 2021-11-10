#include<iostream>
using namespace std;
int main()
{
    float l,b,area;
    cout << "Please enter the lenght and breath: ";
    cin >> l >> b;
    //cout << "you entered " << endl << l << endl<< b << endl;
    area = (l*b)/2;
    cout << "area = " << area;
    return 0;

}
