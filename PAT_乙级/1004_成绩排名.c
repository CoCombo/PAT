#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 10
int main()
{
  int line = 0;
  scanf("%d", &line);
  
  char name[MAXLEN+1] = { 0 };
  char number[MAXLEN+1] = { 0 };
  int score = 0;
  char maxName[MAXLEN + 1] = { 0 };
  char maxNumber[MAXLEN + 1] = { 0 };
  char minName[MAXLEN + 1] = { 0 };
  char minNumber[MAXLEN + 1] = { 0 };
  
  int minScore = 0;
  int maxScore = 0;
  
  for(long i = 0; i < line; i++)
  {
    scanf("%s %s %d", (char *)name, (char *)number, &score);
    if( i == 0 )
    {
      maxScore = score;
      minScore = score;
      strncpy((char *)minName, (char *)name, sizeof(minName));
      strncpy((char *)maxName, (char *)name, sizeof(maxName));
      strncpy((char *)minNumber, (char *)number, sizeof(minNumber));
      strncpy((char *)maxNumber, (char *)number, sizeof(maxNumber));
    }
    else
    {
      if( score > maxScore )
      {
        strncpy((char *)maxName, (char *)name, sizeof(maxName));
        strncpy((char *)maxNumber, (char *)number, sizeof(maxNumber));
        maxScore = score;
      }
      if( score < minScore )
      {
        strncpy((char *)minName, (char *)name, sizeof(minName));
        strncpy((char *)minNumber, (char *)number, sizeof(minNumber));
        minScore = score;
      }
    }
    //printf("%s %s......\n", (char *)maxName, (char *)maxNumber);
    //printf("%s %s......\n", (char *)minName, (char *)minNumber);
  }
  
  printf("%s %s\n", (char *)maxName, (char *)maxNumber);
  printf("%s %s", (char *)minName, (char *)minNumber);
  
  return 0;
}