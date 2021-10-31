#include<iostream>
#include<cmath>
#include<array>
double RoundTo(double X,int To)
{
    auto Power = pow(10,To);
    auto Val = (X * Power);
    auto LstVal = Val - (int) Val;
    LstVal >= 0.5 ? Val += 1 : 0 ;
    return (int)Val / Power;
    
}
double AbsoluteError(double Expected,double Result)
{
    auto Res = Expected - Result;
    return Res < 0 ? -Res : Res;
}
double RelativeError(double Expected,double Result)
{
    return AbsoluteError(Expected,Result) / Expected;
}
double PercentageError(double Expected,double Result)
{
    return RelativeError(Expected,Result) * 100;
}
int main()
{
    auto A  = RoundTo(17.78965,4), B  = RoundTo(56.23456,4) , C = RoundTo(0.7895432,4);
    auto a = round(A),b = round(B),c = round(C);
    std::cout<<"\nEA of A:"<<AbsoluteError(a,A)<<"\nER of A:"
             <<RelativeError(a,A)
             <<"\nEP of A:"<<PercentageError(a,A);
    std::cout<<"\nEA of B:"<<AbsoluteError(b,B)<<"\nER of B:"
             <<RelativeError(b,B)
             <<"\nEP of B:"<<PercentageError(b,B);
    std::cout<<"\nEA of C:"<<AbsoluteError(c,C)<<"\nER of C:"
             <<RelativeError(c,C)
             <<"\nEP of C:"<<PercentageError(c,C);
    return 0;
}