#include<iostream>
using namespace std;
int main()
{

    int n, sqr;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i%2 == 0){
            sqr = i*i;
            cout<<i<<"^"<<2<<" = "<<sqr<<endl;
        }
    }
    return 0;
}
