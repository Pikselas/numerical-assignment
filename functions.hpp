#include<cmath>
auto f1 = [](double x)
            {
                return pow(x,3) - 2*x + 5;
            };
auto df1 = [](double x)
            {
                return 3 * pow(x,2) - 2;
            };
auto f2 = [](double x)
            {
                return 3 * x - cos(x) - 1;  
            };
auto df2 = [](double x)
            {
                return 3 + sin(x);          
            };
auto f3 = [](double x)
            {
               return log(x) + 2 * x; 
            };
auto df3 = [](double x)
            {
                return 1 / x + 2;         
            };
auto f4 = [](double x)
            {
                return pow(2.783 , x) - 3 * x;
            };
auto df4 = [](double x)
            {
                return pow(2.783 , x) - 3;
            };
auto f5 = [](double x)
            {
                return sin(x) + 10 * x - 45;
            };
auto df5 = [](double x)
            {
               return cos(x)  + 10;
            };