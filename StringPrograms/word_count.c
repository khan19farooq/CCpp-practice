#include <stdio.h>
#include <string.h>

int word_count(char* s) 
{
    int len = strlen(s);
    int count = 0;
    char nonwords[] = " .,;\n\t";

    for (int i = 0; i < len; i++)
    {
        while (i < len)
        {
            if (strchr(nonwords, s[i]) != NULL)
            //strchr - pass a string and pass a character and if the character
            // cannot be found in the string then it will return NULL.
                break;
            i++;
        }
        
        count++;

        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;
            i++;
        }
    }
    return count;
}

int main()
{
    char s[] = "This is the way!";

    int count = word_count(s);
    printf("Number of words in the string: %d", count);

    return 0;
}

