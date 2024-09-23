/* Check if a string is palindrome
abccba
abcdcba
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char string[]);

int main ()
{
    char string1[]  = "not a palindrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if (is_palindrome(string2))
        printf("\n%s - is a palindrome\n\n", string2);
    else
        printf("\n%s - is not a palindrome\n\n", string2);

    return 0;   
}

bool is_palindrome(char string[])
{
    int middle  = strlen(string)/2;
    int len = strlen(string);

    for (int i = 0; i < middle; i++)
        if(string[i] != string[len -i -1])
             return false;

return true;
}