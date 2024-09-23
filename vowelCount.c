#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main()
{
    char s[] = "It's a wonderful life!";
    char s1[] = "aeiou";
    int scount = vowel_count(s1);

    printf("\nVowel counts in s1 = %d\n\n", scount);

    return 0;
}

int vowel_count(char *s)
{
    int count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
    }
    return count;
}