#include<iostream>
using namespace std;
int main(){

    double a, count = 0;
    for(int i = 1; i<=6; i++){
        cin>>a;
        if(a>0){
            count++;
        }else{
            continue;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}
