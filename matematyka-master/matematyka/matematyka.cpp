#include <iostream>

using namespace std;

double potega(double n, int k)
{
    double wynik=1;
    if (k==0)
        return 1;
    for (int i = 0; i<k; i++)
        wynik *= n;
    return wynik;
}

double pierwiastek(double a, double stopien)
{
    double x[16];
   // x[0]=(int)a/2;
    x[0]=1.5;
    for (int i = 0; i<15; i++)
    {
        x[i+1] = 1/stopien * ((stopien-1)*x[i]+a/potega(x[i], stopien-1));
    }
    return x[15];
}

long long silnia (int n)
{
    long long wynik=1;
    for (int i=1; i<=n; i++)
        wynik *= i;
    return wynik;
}

double P_Prostopadloscianu(double a, double b, double c)
{
    return 2*(a*b+b*c+a*c);
}

double V_Prostopadloscianu(double a, double b, double c)
{
    return a*b*c;
}

double d_Prostopadloscianu(double a, double b, double c)
{
    return pierwiastek(a*a+b*b+c*c, 2);
}

double sinus(double x)
{
    double temp = x;
    if (x>90 && x<=180)
        x = 180 - x;
    if (x>180 && x<360)
        x = 360 - x;
    if (x==360)
        return 0;
    double radians = x/180 * 3.141592653589793238462643;
    double wynik = radians;
    int k=0;
    for (int i=0; i<11; i+=2)
    {
        if (k % 2 == 0)
        {
            wynik -= potega(radians, i+3)/silnia(i+3);
        }
        else
            {
            wynik += potega(radians, i+3)/silnia(i+3);
            }
        k++;
    }
    if (temp>180 && temp<360)
       return -wynik;
    return wynik;
}

double cosinus(double x)
{
    if (x<=90)
        return sinus(90 - x);
    else if (x>90 && x<=180)
    {
        x = 180 - x;
        return -sinus(90 - x);
    }
    else if (x>180 && x<=360)
    {
        x = 360 - x;
        return sinus(90 - x);
    }
}

double tangens(double x)
{
    if (x<=90)
        return sinus(x)/cosinus(x);
    else if(x>90 && x<180)
    {
        x = 180 - x;
        return -sinus(x)/cosinus(x);
    }
    else if (x>180 && x<360)
    {
        x = 360 - x;
        return -sinus(x)/cosinus(x);
    }
    else if (x==180 || x==360)
        return 0;
}

double tworzaca_stozka(double r, double H)
{
    return pierwiastek(H*H + r*r, 2);
}
