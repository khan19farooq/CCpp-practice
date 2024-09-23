/** Check if the two words are anagram or not
 *  For example: S I L E N T, C H E A T E R, D O G, B U S T, P L A N T E R
 *               L I S T E N, T E A C H E R, G O D, S T U B, R E P L A N T
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool check_anagram(char* word1, char* word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int word1LetterCount[26] = {0}; // total alphabets to check are 26
    int word2LetterCount[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        int lower = tolower(word1[i]);   // tolower function present in ctype.h
        word1LetterCount[lower - 'a']++; // check ANSI characters datasheet
    }

    
    for (int i = 0; i < len1; i++)
    {
        int lower = tolower(word2[i]);   // tolower function present in ctype.h
        word2LetterCount[lower - 'a']++; // check ANSI characters datasheet
    }

    for(int i = 0; i < 26; i++)
        if(word1LetterCount[i] != word2LetterCount[i]) return false;
    
    return true;
}

int main()
{
    char s1[] = "Teacher";
    char s2[] = "Cheater";

    if(check_anagram(s1, s2) == true)
        printf("Given words are ANAGRAMS!\n");
    else printf("NOT ANAGRAM!\n");

    return 0;

}