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

int P_Prostopadloscianu(int a, int b, int c)
{
    return 2*(a*b+b*c+a*c);
}

int V_Prostopadloscianu(int a, int b, int c)
{
    return a*b*c;
}

int d_Prostopadloscianu(int a, int b, int c)
{
    return pierwiastek(a*a+b*b+c*c, 2);
}

double sinus(double x)
{
    int wynik = x;
    int k=0;
    for (int i=0; i<8; i+=2)
    {
        if (k % 2 == 0)
        {
            wynik -= potega(x, i+3)/silnia(i+3);
            cout<<wynik<<" ";
        }
        else
            {
            wynik += potega(x, i+3)/silnia(i+3);
            cout<<wynik<<" ";
            }
        k++;
    }
    return wynik;
}

double cosinus(double x)
{
    return 1/sinus(x);
}

