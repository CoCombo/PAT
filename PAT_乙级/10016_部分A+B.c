#include stdio.h
#include stdlib.h
#include string.h

#define MAXNUM 1000


int main()
{
  unsigned int num_a;
  unsigned int num_b;
  int num_da;
  int num_db;
  unsigned int result_a = 0;
  unsigned int result_b = 0;
  
  scanf(%d %d %d %d, &num_a, &num_da, &num_b, &num_db);
  
  
  while( num_a )
  {
    if( num_a % 10 == num_da )
    {
      result_a = result_a  10 + num_da;
    }
    num_a = 10;
  }
  
  while( num_b )
  {
    if( num_b % 10 == num_db )
    {
      result_b = result_b  10 + num_db;
    }
    num_b = 10;
  }
  
  printf(%d, result_a + result_b);
  return 0;
}