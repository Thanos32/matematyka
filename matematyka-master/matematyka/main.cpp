#include <iostream>
#include "matematyka.h"

using namespace std;

int main()
{
    cout<<potega(1.5,1)<<endl;
    cout<<silnia(7)<<endl;
    cout<<pierwiastek(5, 2)<<endl;
    cout<<P_Prostopadloscianu(3, 4, 5)<<endl;
    cout<<V_Prostopadloscianu(3, 4, 5)<<endl;
    cout<<d_Prostopadloscianu(3, 4 ,5)<<endl;
    cout<<tworzaca_stozka(4, 3)<<endl;
    cout.precision(8);
    cout<<fixed<<sinus(360)<<endl;
    cout<<cosinus(360)<<endl;
    cout<<tangens(360)<<endl;

    return 0;
}
