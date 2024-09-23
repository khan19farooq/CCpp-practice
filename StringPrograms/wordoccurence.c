#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count (char *string, char *word);

int main ()
{
    char *s = "This is a testing string!";
    char *w = "This";

    int result = word_count (s, w);
    printf("\nResult: %d\n\n", result);
    
    return 0;

}

int word_count (char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {
        bool word_found = true;
        for ( int j = 0; j < wlen; j++)
        {
            if (word[j] != string [i + j])
            {
                word_found = false;
                break;
            }
        }
    if (word_found) count ++;
    }
    
return count;
}