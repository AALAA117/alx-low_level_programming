#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int digit1, digit2;

    for (digit1 = 0; digit1 <= 8; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
        {
            printf("%d%d", digit1, digit2);

            if (!(digit1 == 8 && digit2 == 9))
            {
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}
