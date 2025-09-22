/// Check position reached or not - If not sub the max depending on the remaining position

#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int t;
//    cin >> t;
//    while(t>0){

    int mov, housePosition;
    cin >> housePosition;
    for(mov=0;; mov++){
        if(housePosition == 0) break;
        else{
           if(housePosition>=5){
             housePosition -= 5;
           }
           else if(housePosition>=4){
             housePosition -= 4;
           }
           else if(housePosition>=3){
             housePosition -= 3;
           }
           else if(housePosition>=2){
             housePosition -= 2;
           }
           else if(housePosition>=1){
             housePosition -= 1;
           }
        }
    }
    cout << mov << endl;

//     t--;
//    }

    return 0;
}
