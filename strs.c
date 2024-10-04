#include <stdio.h>
#include<string.h>

int my_strlen(char s[])
{
    int i = 0;
    for(i; s[i] != '\0'; i++)
    return i;
}

int main()
{
    char buff[8]; // most people make the buffer large, to small might create errors for large strings
    printf("enter a string: ");
    fgets(buff, 8, stdin); //cin in cpp
    int len = strlen(buff);
    // becaue of small buffer, we'll need a if statement:
    if(buff[len-1]=='\n')
        buff[strlen(buff)-1] = '\0'; // force the string to stop printing after 7 characters
    printf("len: %ld\n", strlen(buff)); // will co
    printf("the string: %s", buff);

    char test[] = "acb";
    printf("test '%s' '%ld' \n", test, strlen(test));
}