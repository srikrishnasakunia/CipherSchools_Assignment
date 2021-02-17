#include<iostream>
#include<cmath>
 
int fib(int n) {
  double p = (1 + sqrt(5)) / 2;
  return round(pow(p, n) / sqrt(5));
}

int main ()
{
  int n;
  std::cout<<"Enter the Number";
  std::cin>>n;
  std::cout << fib(n) << std::endl;
  return 0;
}
