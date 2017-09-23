#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXNUM 10

int main()
{
  int bit[MAXNUM] = { 0 };
  char num;
  while((num = getchar()) != '\n')
  {
    bit[num - '0']++;
  }
  /*
  for(int i = 0; i < 10; i++)
    printf("%d ", bit[i]);
  */
  for(int i = 0; i < MAXNUM; i++)
  {
    if( bit[i] != 0 )
      printf("%d:%d\n", i, bit[i]);
  }
  return 0;
}