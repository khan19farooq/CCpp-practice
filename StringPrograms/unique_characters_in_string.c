#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**Function to print the unique characters in the string, the characters which are non-repeating */
void print_first_unique (char* s)
{
    int length = strlen(s);
    bool found_unique = false;
    bool found_repeat = false;

    for (int i = 0; i < length; i++)
    {   
        found_repeat = false;
        for (size_t j = 0; j < length; j++)
        {
            if (s[i] == s[j] && i != j)
                found_repeat = true;
        }
        if(!found_repeat)
        {
            printf("%c\n", s[i]);
            found_unique = true;
        }
    }
}

/** Function to print the first repeating characters in the string */
void print_first_repeat (char* s)
{
    int length = strlen(s);
    bool found_unique = false;
    bool found_repeat = false;

    for (int i = 0; i < length; i++)
    {   
        found_repeat = false;
        for (size_t j = 0; j < length; j++)
            if (s[i] == s[j] && i != j)   
                found_repeat = true;
        
        if (found_repeat)
        {
            printf("%c\n", s[i]);
            break;
        }
    }
    if(!found_repeat)
        printf("No repeating characters in the given string!"); 
}

/** Function to print the occurences of characters in the string */

void print_occurences(char* s)
{
    int length = strlen(s);
    char unique[length];
    int counted = 0;

    for (size_t i = 0; i < length; i++)
    {
        bool already_counted = false;
        for (size_t j = 0; j < counted; j++)
            if(s[i] == unique[j])
                already_counted = true;
        
        if (already_counted) continue;

        int count = 0;
        for (size_t j = 0; j < length; j++)
            if (s[i] == s[j]) count++;
        
        printf("%c - %d\n", s[i], count);
        
        unique[counted] = s[i];
    }
    
}

int main ()
{
    char s[] = "abcdefghijabcdefghijklm";

    print_occurences(s);

    return 0;  
}