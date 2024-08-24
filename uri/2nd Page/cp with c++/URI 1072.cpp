#include<iostream>
using namespace std;
int main()
{
    int n, t, in = 0, out = 0;
    cin>>t;
    while(t>0){
        cin>>n;
        if(n>=10 && n<=20){
            in++;
        }else{
            out++;
        }
        t--;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
