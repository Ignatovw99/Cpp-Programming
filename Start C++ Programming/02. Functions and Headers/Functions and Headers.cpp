#include <iostream>
#include "Functions.h"

using namespace std;

double add(double x, double y);
double add(double x, double y, double z);
bool test(bool param);
bool test(int param);

int main()
{
    double a = add(3, 8);
    cout << "3 + 8 = " << a << endl;
    double b = add(6, 8, 9);
    cout << "6 + 8 + 9 = " << b << endl;
    if (test(true)) 
    {
        cout << "True is invoked." << endl;
    }
    if (test(6))
    {
        cout << "6 is involked." << endl;
    }


    double multplyResult = multiply(3, 5, 6);
    cout << "3 * 5 * 6 = " << multplyResult << endl;
    return 0;
}
