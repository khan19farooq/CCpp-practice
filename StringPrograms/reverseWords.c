#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *reverseWords(char* s) {
    
    int len = strlen(s);

    // Step 1: Entire the whole string
    int left = 0, right = len - 1;

    while (left < right) {
        char temp  = s[left];
        s[left++]  = s[right];
        s[right--] = temp; 
    }

    // Step 2: Reverse each word within the string
    int start = 0;
    for (int end = 0; end <= len; end++) {
        if (s[end] == ' ' || s[end] == '\0') {
            // Reverse the word
            int l = start, r = end - 1;
            while (l < r) {
                char temp = s[l];
                s[l++] = s[r];
                s[r--] = temp;
            }
            start = end + 1;
        }
    }
    // Step 3: Clean up spaces and form the final result
    int i = 0, j = 0;
    while (j < len) {
        // Skip leading spaces
        while (j < len && s[j] == ' ') j++;
        // Copy the word
        while (j < len && s[j] != ' ') s[i++] = s[j++];
        // Skip spaces between words and add one space
        while (j < len && s[j] == ' ') j++;
        if (j < len) s[i++] = ' ';
    }
    
    // Null-terminate the string and remove trailing spaces
    s[i] = '\0';
    if (i > 0 && s[i-1] == ' ') s[i-1] = '\0';

    return s;
}

int main () {

    char s[] = " sky is blue  ";

    printf("Reversed: %s\n", reverseWords(s)); 

    return 0;
}