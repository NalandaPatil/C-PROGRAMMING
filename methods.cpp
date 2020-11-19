#include <iostream>
using namespace std;

class Countries
{
    public:
    void world()
    {
       cout<<"country: India"<<endl;
    }
    void form()
    {
        cout<<"capital: Delhi"<<endl;
    }
     void states(int num)
    {
        cout<<"number of states:"<<num<<endl;
    }
    
};
int main() {
    Countries ob;
    ob.world();
    ob.form();
    ob.states(28);
    return 0;
}
