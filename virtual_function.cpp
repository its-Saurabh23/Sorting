// Operator overloading

#include <iostream>
using namespace std;

class test
{
    int num;

public:
    test()
    {
        int num = 1;
    }
    // Operator overlaoding start

    void operator++()
    {
        ++num;
    }
    // display
    void display()
    {
        cout << "value = " << num << endl;
    }
};
int main()
{
    test t1;
    t1.display(); // Before increment
    ++t1;
    t1.display(); // After increment
    return 0;
}