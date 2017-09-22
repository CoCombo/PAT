#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM 1000
#define C_WIN -7
#define J_WIN 8
#define B_WIN -1

int main()
{
  int input = 0;
  scanf("%d", &input);
  
  do
  {
    int bit[10] = { 0 };
    int up = 0;
    int down = 0;
    while( input != 0 )
    {
      bit[input % 10] += 1;
      input /= 10;
    }

    for(int i = 0; i < 10; i++)
    {
      if( bit[i] != 0 )
      {
        for(int j = 0; j < bit[i]; j++)
          up = up * 10 + i;
      }
    }
    for(int i = 9; i >= 0; i--)
    {
      //printf("%d ", bit[i]);
      if( bit[i] != 0 )
      {
        for(int j = 0; j < bit[i]; j++)
          down = down * 10 + i;
        //printf("down: %d\n", down);
      }
    }
    down *= down < 10 ? 1000 : (down < 100 ? 100 : (down < 1000 ? 10 :1));
    input = down - up;
    printf("%.4d - %.4d = %.4d\n", down, up, input);
    //Sleep(5000);
  }while( input != 6174 && input != 0);
  
  return 0;
}