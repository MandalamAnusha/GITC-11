/*.................................Memory Leak..................*/

/*Memory Leak occurs when programer allocates memory using new operator and forget to deallocate memory using
delete operator.

main cause of memory leak is not using delete operator properly.
To free single allocated memory delete operator should be used.
To free a array of data values delete[] operator must be used. */

    #include <iostream>
    using namespace std;

    void oil_leak()
    {
        double *p = new double[80];
        cout<<sizeof(double)<<endl;
        delete p;
    }

    int main()
    {
        oil_leak();
    }


