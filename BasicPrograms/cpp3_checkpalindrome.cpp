/** Checking palindrome using string () method 
 *  Why? Lets say if we have a very long number which exceeds the limit of long long int
 *  we cant take that number as an integer since the long long int doesnt satisfy
 *  the given number.
 * 
 *  So take the number a string. Run the loop from starting to length/2 and check the first
 *  character (numeric) to the last character of the string and second to the second last one and so on
*/

#include <iostream>
using namespace std;

int checkpalindrom(string str)
{
    int len = str.length();

    for(int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string st = "112233445566778899000000998877665544332211";
    if(checkpalindrom(st) == true)
        cout << "Yes";
    else
        cout << "No";
        
    return 0;
}