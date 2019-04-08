#include<iostream>
using namespace std;


class Singleton
{
        static Singleton *single;

        Singleton()
        {
                cout<<"default constructor"<<endl;
        }
        Singleton(const Singleton &obj)
        {
                cout<<"copy constructor"<<endl;
        }
        public:
        static Singleton *getinstance()
        {
                if(single == NULL)
                {
                        single = new Singleton;
                        cout<<"instance created"<<single<<endl;
                }
                else
                {
                        cout<<"previous instance"<<single<<endl;
                }
                return single;
        }
};

Singleton *Singleton::single = NULL;
int main()
{
        Singleton *p1 = Singleton::getinstance();
        Singleton *p2 = Singleton::getinstance();
        Singleton *p3(p2);
        p2 = Singleton::getinstance();

        return 0;
}

