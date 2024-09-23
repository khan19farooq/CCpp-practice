#include <stdio.h>
#include <string.h>

int main()
{
    char string [] = "Snehil";
    printf("\n%s\n\n",string);
    printf("length of string: %d\n\n", strlen(string));

    int currentpostiton = 0;
    int newpostiton = 0;

    while(currentpostiton < strlen(string))
    {
        if(!(string[currentpostiton] == 'a' || string[currentpostiton] == 'e' 
        || string[currentpostiton] == 'i' || string[currentpostiton] == 'o' || 
        string[currentpostiton] == 'u'))
        {
            string[newpostiton] = string[currentpostiton];
            newpostiton++;
        }
        currentpostiton++;
    }
    string[newpostiton] = '\0';

    printf("%s\n\n",string);

    return 0;
}