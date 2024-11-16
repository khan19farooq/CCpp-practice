#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 50;

    cout << "Before swapping, a = " << a << ", b = " << b << " " << endl;

    int temp;
    // Using third variable
    temp = a;
    a = b;
    b = temp;

    cout << "Swapping using third variable, a = " << a << ", b = " << b << " " << endl;

    cout << endl << "----- Without using third variable -----" << endl;
// After swapping a = 50, b = 5
//                b = 55
//                a = 55 - 50 = 5
//                b = 55 - 5  = 50
    b = a + b;
    a = b - a;
    b = b - a;

    cout << "Originals, a = " << a << ", b = " << b << " " << endl;

    cout << endl << "----- Use swap function from #include <bits/stdc++.h> -----" << endl;

    swap(a, b);

    cout << "Using swap function, a = " << a << ", b = " << b << " " << endl;

    return 0;

}