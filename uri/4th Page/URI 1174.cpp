#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    double  x, A[100];
    while(i<100) {
        cin >> x;
        if(x<=10) {
            A[i]=x;
            cout<<"A["<< i <<"] = " ;
            cout <<fixed<<setprecision(1) <<x<< endl;
            i++;
        } else {
            i++;
            continue;
        }
    }

    return 0;
}
