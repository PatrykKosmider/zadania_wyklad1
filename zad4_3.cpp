/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int maks1;
    int maks2;
    
    cout << "Podaj liczbe: " << endl;
    cin >> x;

    cout << "Podaj liczbe: " << endl;
    cin >> y;

    cout << "Podaj liczbe: " << endl;
    cin >> z;

    maks1 = max(x,y);
    maks2 = max(maks1, z);
    cout << maks2 << " jest najwieksze" << endl;

    

   return 0;

}
