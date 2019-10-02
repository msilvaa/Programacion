#include <iostream>

int main(void)
{
  double a = 0;
  std::cin >> a;
  if (a%3 == 0) {
    std::cout << "number " << a << " Can be divided by 3\n";
    
  }
  else {
    std::cout << "number " << a << " Can not be divided by 3\n";
    
  }

  
  return 0;
}
