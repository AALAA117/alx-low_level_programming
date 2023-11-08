#include "3-calc.h"
/**
 * main - check the code
 * @argc:..
 * @argv:..
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	if ((argc - 1) != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	switch (*argv[2])
	{
		case '+':
			operator = get_op_func("+");
			printf("%d\n", operator(num1, num2));
			break;
		case '-':
			operator = get_op_func("-");
			printf("%d\n", operator(num1, num2));
			break;
		case '*':
			operator = get_op_func("*");
			printf("%d\n", operator(num1, num2));
			break;
		case '/':
			operator = get_op_func("/");
			printf("%d\n", operator(num1, num2));
			break;
		case '%':
			operator = get_op_func("%");
			printf("%d\n", operator(num1, num2));
			break;
		default:
			operator = get_op_func("");
			printf("Error\n");
			exit(99);
	}
	return (0);
}
