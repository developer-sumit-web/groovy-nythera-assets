/* Groovy Nythera C Preview */

#include <stdio.h>

int add(int a, int b)
{
      return a + b;
}

int main()
{

      int numbers[] = {2, 4, 6, 8};
      int length = sizeof(numbers) / sizeof(numbers[0]);

      printf("Groovy Nythera Theme\n");

      for (int i = 0; i < length; i++)
      {
            printf("Number: %d\n", numbers[i]);
      }

      int result = add(10, 5);

      if (result > 10)
      {
            printf("Result: %d\n", result);
      }

      return 0;
}