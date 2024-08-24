#include<iostream>
using namespace std;

int main()
{
    int a, x, x1, y, y1, z, z1;
    cin >> a;
    for(int i = 1; i<=a; i++){
        x = i;
        y = i*i;
        z = i*i*i;
        cout << x << " " << y << " " << z << endl;
        x = i;
        y = (i*i)+1;
        z = (i*i*i)+1;
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
