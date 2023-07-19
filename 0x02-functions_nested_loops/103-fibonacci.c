#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev = 1;
    unsigned long int current = 2;
    unsigned long int next;
    unsigned long int sum = 2;

    while (current <= 4000000)
    {
        next = prev + current;

        if (next % 2 == 0)
            sum += next;

        prev = current;
        current = next;
    }

    printf("%lu\n", sum);
    return (0);
}
