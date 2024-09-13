/** Count the number of punctuations in the given string using "ispunct" function from "ctype.h" */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_punc(char* s)
{
    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
        if(ispunct(s[i])) count++; 
        // ispunct - function present in ctype.h returns true if the punctuation is present in the string
    
return count;
}

int main()
{
    char s[] = "apple, pear, carrot, banana... ";

    printf("\nNumber of punctuations in the given string = %d\n\n", count_punc(s));

    return 0;
}