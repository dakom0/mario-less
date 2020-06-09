#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int n = get_positive_int("Positive integer: ");

    //loop for the rows
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < (n - i - 1); spaces++)
        {
            printf(" ");
        }
        for (int dashes = 0; dashes <= i; dashes++)
        {
            printf("#");
        }
        printf("\n");
    }

}

// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while ((n < 1) || (n > 8));
    return n;
}