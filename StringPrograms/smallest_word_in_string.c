/** Find the smallest length of a word in a string */
#include <stdio.h>
#include <string.h>

int smallest_word(char* s)
{
    int i = 0;
    int len = strlen(s);
    int min = 1000;
    char nonwords[] = " .,;:!?\n\t"; 
    
    while (i < len) 
    {
        int count = 0;
        while (i < len)
        {
            if (strchr(nonwords, s[i]) != NULL)
                break;
            i++;
            count++;
        }

        if(count < min) min = count;

        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;
            i++;
        }
    }
    
    return min;
}

int main()
{
    char s[] = "This s the way!";
    int smallestWordLength = smallest_word(s);
    printf("\nLength of smallest word in the given string = %d\n\n", smallestWordLength);

    return 0;
}