#include<iostream>
using namespace std;

int main()
{

    for(double i = 0; i<=2; i+=.2){
            int n = 1;
            double j = i+1;
        for(; n<=3; j++){
            cout << "I=" << i << " J=" << j << endl;
            n++;
        }
    }

    return 0;
}

