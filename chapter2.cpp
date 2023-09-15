// Virtual Function in c++
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int Base_var = 1;
    virtual void display()
    {
        cout << "1 Displaying Base Class variable Base var " << Base_var << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int Derive_var = 2;
    void display()
    {
        cout << "2 Displaying Base Class variable Base var " << Base_var << endl;
        cout << "2 Displaying Derived Class variable Derived var " << Derive_var << endl;
    }
};
int main()
{
    BaseClass *Base_pointer;
    DerivedClass *derived_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    Base_pointer = &obj_derived;
    Base_pointer->display();

    return 0;
}