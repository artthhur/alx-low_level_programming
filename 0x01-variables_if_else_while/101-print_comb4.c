#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * separated by ,, followed by a space. The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the
 * three digits 0, 1 and 2. Prints only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * Only putchar is allowed, and can be used at most six times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar(i % 8 + '0');
                putchar(j % 9 + '0');
                putchar(k % 10 + '0');
                if (i < 7)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');

    return (0);
}

