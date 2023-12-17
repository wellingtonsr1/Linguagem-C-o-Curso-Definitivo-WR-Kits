#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strchr(char *str, char ch);
char *my_strchr_1(char *str, char ch);

int main()
{
    char s[100], c;

    printf("Intrd. uma string: ");
    fgets(s, sizeof(s), stdin);
    if(s[strlen(s) - 1] == '\n') 
        s[strlen(s) - 1] = '\0';    
    
    printf("Intrd. um char: ");
    scanf(" %c", &c);

    puts(my_strchr_1(s, c));

    return 0;
}

char *my_strchr(char *str, char ch)
{
    int i;
    for(i=0; str[i] !='\0'; i++)
        if(str[i] == ch)
            return &str[i];

    return NULL;
}

char *my_strchr_1(char *str, char ch)
{
    while(*str)
        if(*str == ch)
            return str;
        else
            str++;

    return NULL;
}
