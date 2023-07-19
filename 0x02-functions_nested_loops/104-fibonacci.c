#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev = 0;
    unsigned long int current = 1;
    unsigned long int next;
    int count;

    printf("%lu, %lu, ", current, current + 1);

    for (count = 3; count <= 98; count++)
    {
        next = prev + current;
        printf("%lu", next);

        if (count != 98)
            printf(", ");

        prev = current;
        current = next;
    }

    printf("\n");
    return (0);
}
