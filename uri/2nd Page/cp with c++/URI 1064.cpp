#include<iostream>
#include <iomanip>
 using namespace std;
 int main(){

    double a, sum = 0.0, count = 0.0;
    double avg;
    for(int i=0; i<6; i++){
        cin>>a;
        if(a>0){
            sum += a;
            count++;
        }else{
            continue;
        }
    }
    avg = sum / count;
    cout<<count<<" valores positivos"<<endl;
    cout<< fixed << setprecision(1)<<avg<<endl;
    return 0;
 }
