#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM 5000

void parse(int num, int bit);
char map[3] = {' ', 'S', 'B'};
int main()
{
  int input;
  int bit = 0;
  scanf("%d", &input);
  
  parse(input, bit);
  return 0;
}

void parse(int num, int bit)
{
  if( num != 0 )
  {
    parse(num / 10, bit + 1);
    for(int i = 1; i <= num % 10; i++)
    {
      if( bit == 0 )
        printf("%d", i);
      else
        printf("%c", map[bit]);
    }
  }
  else
    return ;
} 