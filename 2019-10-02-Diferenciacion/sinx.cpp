#include <cstdio>
#include <cmath>

double fun(double x);
double dev_forward (double x, double h);
double dev_central(double x, double h);
double dev_forward_richardson (double x, double h);
int main(void)
{
  double x = M_PI/3.0;
  double h = 0.1;

  std::printf ("%25.16e %25.16e %25.16e %25.16e %25.16e %25.16e%25.16e",
	       x, h, std::cos (x), dev_forward (x, h),
	       dev_central (x, h), dev_forward_richardson (x, h));
  
  return 0;
}

double fun ( double x)

{
  return std::sin(x);
}

double dev_forward (double x, double h)
{
  return ( fun (x+h)- fun (x))/h;
}
double dev_central (double x, double h)
{
  return (fun (x+h/2) - fun (x-h/2))/h;
}
double dev_forward_richardson (double x, double h)
{
  double result1 = dev_forward (x, h);
  double result2 = dev_forward (x, h/2);
  return ( 4*result2 - result1)/3;


  
}
