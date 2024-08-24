#include<iostream>
using namespace std;

int main()
{
    int i = 0, t = 10;
    while(t>0){
        int a, x[10];
        cin >> a;
        if(a<=0){
            x[i] = 1;
            cout << "X[" << i << "] = " << x[i] << endl;
            i++;
        }else {
            x[i] = a;
            cout << "X[" << i << "] = " << x[i] <<endl;
            i++;
        }
        t--;
    }

    return 0;
}
