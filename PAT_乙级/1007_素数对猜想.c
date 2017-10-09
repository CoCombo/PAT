#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num);

int main()
{
  int input;
  int count = 0;
  int current = 2;

  scanf("%d", &input);

  while (current+2 <= input)
  {
    //printf("%d\n", current);
    if (isPrime(current) && isPrime(current + 2))
    {
      //printf("%d %d\n", current, current+2);
      count++;
    }
    current++;
  }

  printf("%d", count);
    return 0;
}

bool isPrime(int num)
{
  int middle = sqrt(num);
  for (int i = 2; i <= middle; i++)
  {
    if (num % i == 0)
      return false;
  }
  
  return true;
}