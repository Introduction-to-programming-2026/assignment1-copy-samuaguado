#include <stdio.h>

int string_length(char s[]);

int main(void)
{
    char name[100];

    printf("Name: ");
    scanf("%99s", name);

    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(char s[])
{
    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}