/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    cout << "Podaj liczbe: " << endl;
    cin >> y;
    cout << "Podaj liczbe: " << endl;
    cin >> z;
    
    if (x >= y && x >= z){
        cout << x << " jest najwieksze" << endl;
    }else if (y >= z && y >= x){
        cout << y << " jest najwieksze" << endl;   
    }
    else if ( z >= y && z >= x){
        cout << z << " jest najwieksze" << endl;
    }
    

   return 0;

}
