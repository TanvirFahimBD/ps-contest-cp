#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a, b = 0, sum = 0, avg;
    while(1){
        while(1){
            cin >> a;
            if(a>=0 && a<=10){
                sum += a;
                b++;
            if(b>1) break;
            }else cout << "nota invalida" << endl;
        }

        avg = sum / 2;
        cout << fixed << setprecision(2) << "media = " << avg << endl;
            b = 0;
            sum = 0;
            while(1){
                cin >> a;
                cout << "novo calculo (1-sim 2-nao)" << endl;
                if(a == 1 || a == 2) break;
            }
            if(a == 1)continue;
            else break;
        }

    return 0;
}
