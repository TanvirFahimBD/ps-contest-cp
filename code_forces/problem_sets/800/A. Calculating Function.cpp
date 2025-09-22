//! using for loop give TLE on test 3
// Check for even or odd. If even div by 2
// If odd div by 2 , add 1, show the value negative

#include<iostream>
using namespace std;

int main()
{
    long long int n,sum = 0;
    cin >> n;
    if(n%2 == 0) cout << n/2 << endl;
    else {
        n = -(n/2 + 1);
        cout << n << endl;
    }

    return 0;
}
