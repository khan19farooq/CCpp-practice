#include <stdio.h>
#include <string.h>

int longest_Word(char* s)
{
    int len = strlen(s);
    int count = 0;
    int max = -1;
    char nonwords[] = " .,;!?\n\t";

    int i = 0;
    while (i < len)
    {   
        count = 0;
        while (i < len)
        {
            if (strchr(nonwords, s[i]) != NULL)
            {
                printf("loop break: %d\n", i);               
                break;  
            }
            i++;
            count++;
        }

        if (count > max) max = count;

        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;
            i++;
        }
    }
    return max;
    
}

int main ()
{
    char s[] = "This is the way!";

    int max_word_length = longest_Word(s);
    printf("\nLength of the longest word in the given string = %d\n", max_word_length);

    return 0;
}