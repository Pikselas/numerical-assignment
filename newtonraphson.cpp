#include<iostream>
#include<functional>
typedef std::function<double(double)> FType;
double NewRaph(double a,double b , FType f, FType df)
{
    double Xn = (a + b) / 2,Xn1 = Xn;
    while(true)
    {
        Xn = Xn - f(Xn) / df(Xn);
        if(Xn1 == Xn)
        {
            break;
        }
        else
        {
            Xn1 = Xn;
        }
    }
    return Xn;
}
int main()
{
    
    return 0;
}