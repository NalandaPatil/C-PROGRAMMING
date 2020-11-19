#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"*Program to check if a given number is even or odd*"<<endl;
    cout << "\nEnter the number : "<<endl;
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}
