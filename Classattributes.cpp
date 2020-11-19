#include <iostream>
using namespace std;

class Address
{
    public:
    string building;
    int houseno;
    string city;
    
};
int main() {
    Address ob;
    ob.building="Evershine";
    ob.houseno=15;
    ob.city="Vasai";
    cout<<ob.building<<"\n";
    cout<<ob.houseno<<"\n";
    cout<<ob.city<<"\n";
    return 0;
}
