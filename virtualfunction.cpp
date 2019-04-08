/*............virtual function................*/

/*virtual function is a function that is declared using virtual keyword.By seeing virtual compiler will not bind  and run function at compile time.It will executethe function at run time based on the object we have assigned to pointer.It is know as dynamic binding/late binding.
 */
/* VTABLE is a static array of function pointer.
VTABLE is provided by compiler at compile time.
If class is having virtual function for that class one VTABLE will be created.
It contains virtual function address.
when an object is created for class which is having virtual function first four bytes is VPTR.
VPTR is a hidden pointer.It is hidden pointer provided by compiler. */


#include<iostream>
using namespace std;

class Base
{
        public:
        int a;
        float f;
        virtual void fun(int)
        {
                cout<<"A::f"<<"\t"<<sizeof(Base)<<endl;
        }
};

class Derived:public Base
{
        public:
        virtual void fun(int) override
        {
                cout<<"B::f"<<"\t"<<sizeof(Derived)<<endl;
        }

};

int main()
{
        Base *p;
        Derived obj;
        obj.a = 10;
        obj.f = 23.6f;
        p = &obj;
        p->fun(10);
        return 0;
}

