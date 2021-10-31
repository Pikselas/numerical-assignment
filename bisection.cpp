#include<iostream>
#include<cmath>
#include<functional>
double Bisection(double x1,double x2,std::function<double(double x)> f,int Iterations)
{
    double x0;
    for(int i = 0;i<Iterations;i++)
    {
     x0 = (x1 + x2) / 2;
     auto Res = f(x0);
     if(Res == 0)
     {
         return x0;
     }
     else if(Res * f(x1) < 0)
     {
         x2 = x1;
         x1 = x0;

     }
     else if(Res * f(x2) < 0)
     {
         x1 = x0;
     }
    }
    std::cout<<std::endl<<x0<<std::endl;
    return x0;
}
int main()
{
    auto f1 = [](double x){
        return pow(x,3) - (10 * x) + 4;
    };   // x^3 - 10x + 4 = 0
    
    auto f2 = [](double x){
        return x * tan(x) - 4*x + 10;
    }; // x * tanx -4x + 10
    std::cout<<Bisection(0,1,f1,4); // upto 4 iterations , interval [0,1]
    std::cout<<Bisection(0,1,f2,4);// upto 4 iterations , interval [0,1]


    return 0;
}//by aritra