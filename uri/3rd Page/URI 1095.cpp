#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    for(int i = 1, j = 60; n<=12; i+=3, j-=5){
        cout<<"I="<<i<<" J="<<j<<endl;
        n++;
    }

    return 0;
}
