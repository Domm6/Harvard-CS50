#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
    printf("I hope your day is going absolutely great\n");
        char c = get_char("Would you like to keep talking?\n");
        if (c == 'y')
            {
                printf("Great, lets continue");
            }
            else if (c == 'n')
            {
                printf("Have a great rest of your day then!\n");
            }
}