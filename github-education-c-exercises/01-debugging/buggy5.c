// Buggy example for debug50
#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Whats the heigh?\n");
    scanf("%d", &h);
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++) //(Delete the =)
    {
        printf("#\n");
    }
}
