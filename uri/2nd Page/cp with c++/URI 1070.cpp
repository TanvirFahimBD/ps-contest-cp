#include<iostream>
using namespace std;
int main(){
    int a, odd = 0;
    cin>>a;
    int x = a;
    for( ; a<x+12; a++){
        if(a%2 != 0){
            cout<<a<<endl;
        }else{
            continue;
        }
    }
    return 0;
}
