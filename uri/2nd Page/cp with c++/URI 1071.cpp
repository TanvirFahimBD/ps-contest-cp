#include<iostream>
using namespace std;
int main(){
    int x, y, sum = 0;
    cin>>x>>y;
    for(y = y+1; y<x; y++){
        if(y%2 != 0){
            sum += y;
        }else{
            continue;
        }
    }
    cout<<sum<<endl;
    return 0;
}
