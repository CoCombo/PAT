#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM 1000
#define C_WIN -7
#define J_WIN 8
#define B_WIN -1

int main()
{
  unsigned int count = 0;
  int a_win = 0;
  int a_lose = 0;
  int a_draw = 0;
  int b_win = 0;
  int b_lose = 0;
  int b_draw = 0;
  
  int a_win_j = 0;
  int a_win_c = 0;
  int a_win_b = 0;
  int b_win_j = 0;
  int b_win_c = 0;
  int b_win_b = 0;
  
  scanf("%d\n", &count);
  
  for(int i = 0; i < count; i++)
  {
    char a;
    char b;
    scanf("%c %c", &a, &b);
    getchar();//消去回车符
    //printf("%d\n", a - b);
    switch(a - b)
    {
    case C_WIN:
      a_win++;
      a_win_c++;
      b_lose++;
      break;
    case -C_WIN:
      a_lose++;
      b_win++;
      b_win_c++;
      break;
    case J_WIN:
      a_win++;
      a_win_j++;
      b_lose++;
      break;
    case -J_WIN:
      a_lose++;
      b_win++;
      b_win_j++;
      break;
    case B_WIN:
      a_win++;
      a_win_b++;
      b_lose++;
      break;
    case -B_WIN:
      a_lose++;
      b_win++;
      b_win_b++;
      break;
    default:
      a_draw++;
      b_draw++;
      break;
    }
    
  }
  
  printf("%d %d %d\n", a_win, a_draw, a_lose);
  printf("%d %d %d\n", b_win, b_draw, b_lose);
  printf("%c %c", a_win_c > a_win_b ? 'C' : a_win_j > a_win_b ? 'J': 'B', b_win_c > b_win_b ? 'C' : b_win_j > b_win_b ? 'J': 'B');
  return 0;
}