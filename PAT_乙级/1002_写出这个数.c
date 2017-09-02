#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *map[10] = {"ling", 
        "yi", 
        "er", 
        "san",
        "si",
        "wu",
        "liu",
           "qi",
        "ba",
        "jiu"};
        
void output(int num, int count)
{
  if( num / 10 == 0)
    printf("%s ", map[num]);
  else
  {
    output(num / 10, count + 1);
    if(count == 1)
    {
      printf("%s", map[num % 10]);
    }
    else
      printf("%s ", map[num % 10]);
  }
}
int main()
{
  char input[101] = { 0 };
  scanf("%s", (char *)input);
  
  int length = strlen((char *)input);
  int sum = 0;
  int count = 1;
  for(int i = 0; i < length; i++)
  {
    sum += input[i] - '0';
  }
  
  if(sum < 10)
    printf("%s\n", map[sum]);
  else
    output(sum, count);
  
  return 0;
}