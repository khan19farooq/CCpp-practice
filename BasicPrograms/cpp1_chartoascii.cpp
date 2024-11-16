#include <iostream>
using namespace std;

int main()
{
    char ch, str[200] = "Farooq";
    int i = 0, value;

    cout << "\nCharacter\tASCII Value\n";

    while (str[i])
    {
        ch = str[i];
        value = ch;
        cout << ch << "\t\t" << value << endl;
        i++;
    }    

    /** Below function is to print the ASCII code from 'A' to 'Z' */
    
    char c;
    cout << "\nCharacter\tASCII Value\n";
    
    for(c = 'A'; c <= 'Z'; c++)
        cout << c << "\t\t" << (int)c << endl;

    return 0;
}