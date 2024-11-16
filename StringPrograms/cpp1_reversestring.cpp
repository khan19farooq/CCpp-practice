/** creata a program to reverse  a string using recursion */
#include <bits/stdc++.h>

using namespace std;

void reverseString(char *str, int index, int n)
{
    if(index == n) // return if we reached till the end of the string
    {
        return;
    }

    char temp = str[index];  // Storing each character starting from index 0 from function call stack
    reverseString(str, index + 1, n); // calling recursive function by increasing index everytime
    cout << temp; //printing each stored character while recurring back
}

int main()
{
    char a[] = "Farooq Khan";
    int n = sizeof(a) / sizeof(a[0]);
    reverseString(a, 0 , n);

    return 0;

}
