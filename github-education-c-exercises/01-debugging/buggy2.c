// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
//#include <cs50.h> (Im from VS Code and does not recognize this library)
#include <stdio.h>
int main(void)
{
    char name[50];
    printf("What is your name?\n");
    scanf ("%s", name);
    printf("hello, %s\n", name);
}
