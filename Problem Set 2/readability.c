#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)

{
    // Ask user for text
    string text = get_string("Text: ");

    // Count the number of letters in text
    int letters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        letters++;
    }

    // Count the number of spaces
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        words++;
    }

    // Count the number of sentences
    int sentence = 0;
    for (int i= 0; i < strlen(text); i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        sentence++;
    }

    // Use Colema-Liau index to determine the reading grade level
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentence / words * 100) - 15.8;
    int index = round(calculation);

    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

