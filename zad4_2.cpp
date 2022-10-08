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
    int tab[3];
    
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    tab[0] = x;
    cout << "Podaj liczbe: " << endl;
    cin >> y;
    tab[1] = y;
    cout << "Podaj liczbe: " << endl;
    cin >> z;
    tab[2] = z;
    
    int i;
    int max = 0;
    for(i=0;i<=2;i++){
        if (tab[i] > max){
            max = tab[i];
        }
    }
    
    cout << max << " jest najwieksze";
    

   return 0;

}
