#include <stdio.h>

/**
 * print_comb4 - Prints all possible combinations of four digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int digit1, digit2, digit3, digit4;

    for (digit1 = '0'; digit1 < '8'; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
        {
            for (digit3 = digit2 + 1; digit3 <= '9'; digit3++)
            {
                for (digit4 = digit3 + 1; digit4 <= '9'; digit4++)
                {
                    if ((digit2 != digit1) != (digit3 != digit2) != (digit4 != digit3))
                    {
                        putchar(digit1);
                        putchar(digit2);
                        putchar(digit3);
                        putchar(digit4);
                    }

                    if (digit1 == '7' && digit2 == '8' && digit3 == '9')
                    {
                        continue;
                    }
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
