#include<iostream>
using namespace std;

int main()
{
    int t = 15, i, j, k = 0, l = 0, Even[5], Odd[5];
    while(t>0){
        int num;
        cin >> num;
            if(num % 2 == 0){
                Even[k] = num;
                k++;
                if(k == 5){
                    for(i = 0; i < 5; i++){
                        cout << "par[" << i << "] = " << Even[i] << endl;
                        Even[i] = 0;
                    }
                    k = 0;
                }

        }else{
                Odd[l] = num;
                l++;
                if(l==5){
                    for(i = 0; i < 5; i++){
                        cout << "impar[" << i << "] = " << Odd[i] << endl;
                        Odd[i] = 0;
                    }
                    l = 0;
                }
            }

        t--;

            if(t == 0){
                    for(i = 0; i < 5; i++){
                    if(Odd[i] == 0) break;
                    cout << "impar[" << i << "] = " << Odd[i] << endl;
                }

            for(i = 0; i < 5; i++){
                    if(Even[i] == 0) break;
                    cout << "par[" << i << "] = " << Even[i] << endl;
                }

        }
   }


    return 0;
}
