#include<iostream>
using namespace std;
int main(){
    int a, odd = 0;
    cin>>a;
    for(int i=1; i<=a; i++){
        if(i%2 != 0){
            cout<<i<<endl;
        }else{
            continue;
        }
    }
    return 0;
}
