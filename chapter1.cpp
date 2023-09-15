// pointers to derived class
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int Base_var;
    void display()
    {
        cout << "Displaying Base Class variable Base var " << Base_var << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int Derive_var;
    void display()
    {
        cout << "Displaying Base Class variable Base var " << Base_var << endl;
        cout << "Displaying Derived Class variable Derived var " << Derive_var << endl;
    }
};
int main()
{
    BaseClass *base_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_pointer = &obj_derived;

    base_pointer->Base_var = 34;
    base_pointer->display();
    base_pointer->Base_var = 34000;
    base_pointer->display();

    DerivedClass *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->Base_var = 342;
    derived_pointer->Derive_var = 20;
    derived_pointer->display();
    return 0;
}