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
    
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    
    if ( x == 0){
        cout << x << " nie jest parzyste ani nieparzyste" << endl;
    }   else if ( x%2 == 0){
        cout << x << " jest parzyste" << endl; 
    } else {
        cout << x << " jest nieparzyste" << endl;
        
    }
   return 0;

}
