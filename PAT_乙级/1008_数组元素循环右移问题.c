#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM 5000


int main()
{
  int length;
  int move;
  
  int arr[101];
  int result[101];
  scanf("%d %d", &length, &move);
  
  for(int i = 0; i < length; i++)
  {
    scanf("%d", &arr[i]);
    result[(i + move) % length] = arr[i];
  }
  
  for(int i = 0; i < length - 1; i++)
    printf("%d ", result[i]);
  printf("%d", result[length - 1]);
  return 0;
}