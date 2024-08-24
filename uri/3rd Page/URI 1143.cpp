#include<iostream>
using namespace std;

int main()
{
    int a, i = 1, x = 1, y = 1, z = 1;
    cin >> a;
    for(int b = 1; b<=a; b++){
        x = i;
        y = x*i;
        z = y*x;
        cout<< x << " " << y << " " << z << endl;
        i++;
    }

    return 0;
}
