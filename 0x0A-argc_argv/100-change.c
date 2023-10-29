#include <stdio.h>
#include <sys/param.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int j;
  int coins[] = {1, 2, 5, 10, 25};
  
  if ((argc - 1) != 1)
  {
    printf("Error\n");
    return (1);
  }
  if (atoi(argv[1]) < 0 || atoi(argv[1]) == 0)
  {
    printf("%d\n", 0);
  }
  for (i = 0; i <= argc - 1; i++)
    {
      for (j = 0; j <= atoi(argv[1]); j++)
        {
          if (coins[i] > j)
          {
            int temp = atoi(&argv[i - 1][j]);
            
            printf("%d", temp);
          }
          else
          {
            int temp = MIN(atoi(&argv[i - 1][j]), 1 + atoi(&argv[i][j-coins[i]]));
            printf("%d", temp);
          }
        }
    }
  return (0);
}
