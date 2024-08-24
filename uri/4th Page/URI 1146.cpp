#include<iostream>
using namespace std;

int main()
{
    while(1){
        int a;
        cin >> a;
        if(a == 0){
            break;
        }else{
            for(int i = 1; i <= a; i++){
               if(i == a){
                 cout << i;
               }else{
                 cout << i << " ";
               }
            }
            cout << endl;
        }
    }

    return 0;
}
