#include <iostream>

int max (int a, int b);

int main(void)

{
  std::cout << max (-3, 2) << "\n";

  return 0;
}

int max (int a, int b)
{
  int result = 0;
  if ( a >= b ) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}
