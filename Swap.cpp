#include <iostream>
using namespace std;

int main()
{
    int x , y , swap;
    cout<<"*program to swap two numbers in C++*"<<endl;
    cout<<"\nEnter numbers to be swaped"<<endl;
    cin>>x>>y;
    cout << "\nBefore swapping the numbers" << endl;
    cout << "Number 1 = " << x <<endl;
    cout<< "Number 2 = " << y << endl;

    swap = x;
    x = y;
    y = swap;

    cout << "\nAfter swapping the numbers" << endl;
    cout << "Number 1 = " << x <<endl;
    cout << "Number 2 = " << y << endl;

    return 0;
}
