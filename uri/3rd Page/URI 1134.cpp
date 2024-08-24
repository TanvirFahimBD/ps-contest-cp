#include<iostream>
using namespace std;

int main()
{
    int a, a1 = 0, g1 = 0, d1 = 0, b = 0;
    while(1){
        cin >> a;
    if(a>0){
        if(a>=1 && a<=4){
            if(a == 1){
                a1++;
            }else if(a == 2){
                g1++;
            }else if(a == 3){
                d1++;
            }else if(a == 4){
                break;
             }

        }else{
            if(b == 0) {
              cout << "MUITO OBRIGADO" << endl;
                b++;
                }else continue;
            }
        }
    }
    cout << "Alcool: " << a1 << endl;
    cout << "Gasolina: " << g1 <<endl;
    cout << "Diesel: " << d1 << endl;

    return 0;
}
