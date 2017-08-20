#include <iostream>

int main()
{
  int input = 1;
  int output = 0;
  
  std::cin >> input;
  
  while( input > 1)
  {
    output++;
    if( input % 2 == 0)
    {
      input /= 2;
    }
    else
    {
      input = (input * 3 + 1) / 2;
    }
  }
  
  std::cout << output;
  
  return 0;
}