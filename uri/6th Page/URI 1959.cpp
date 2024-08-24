// As the range after multiple goes out of int range so take long long
// multiply

#include<iostream>
using namespace std;

int main()
{
    long long int num, length, per;
    cin >> num >> length;
    per = num * length;
    cout << per << endl;

    return 0;
}
