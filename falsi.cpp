#include<iostream>
#include<functional>
double RegularFalsi(double a , double b,std::function<double(double)> f)
{
    double c = a + b, c1;
    if((f(a) * f(b)) < 0)
    {
     while(true)
     {
       double fa = f(a) ,fb = f(b),fc;
      c1 = (a * fb - b * fa) / (fb - fa);
      if((fc = f(c1)) == 0.0)
      {
          break;
      }
      else if(c1 == c)
      {
          break;
      }
      else if((fa * fc) < 0)
      {
          b = c1;
      }
      else
      {
          a = c1;
      }
      c = c1;
     }
    }
    return c1;
}
int main()
{

    return 0;
}