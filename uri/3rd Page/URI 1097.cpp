#include<iostream>
using namespace std;

int main()
{
    int j = 2;
    for(int i = 1; i<=9; i+=2){
            j = j + 5;
            int n = 1;
        for(; n<=3; j--){
            cout << "I=" << i << " J=" << j << endl;
            n++;
        }
    }

    return 0;
}
