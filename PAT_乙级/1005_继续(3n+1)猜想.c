#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM 5000

void callatz(int record[MAXNUM + 1], int num);

int main()
{
  int count;
  
  scanf("%d", &count);
  
  int record[MAXNUM + 1] = { 0 };
  int maxNum = 0;
  int currNum = 0;
  for(int i = 0; i < count; i++)
  {
    scanf("%d", &currNum);
    if( currNum > maxNum )
      maxNum = currNum;
    record[currNum] = 1;
  }
  
  for( int i = maxNum; i > 1; i--)
  {
    if( record[i] > 0 )
      callatz(record, i);
  }
  
  int sum = 0;
  for( int i = maxNum; i > 1; i--)
  {
    if( record[i] > 0 )
      sum++;
  }
  
  for( int i = maxNum; i > 1; i--)
  {
    
    if( record[i] > 0 )
    {
      if( sum-- != 1 )
        printf("%d ", i);
      else
        printf("%d", i);
    }
  }
  return 0;
}

void callatz(int record[MAXNUM + 1], int num)
{
  while( num != 1)
  {
    if( num % 2 == 0 )
    {
      num /= 2;
    }
    else
    {
      num = (3 * num + 1) / 2;
    }
    record[num] = -1;
  }
}