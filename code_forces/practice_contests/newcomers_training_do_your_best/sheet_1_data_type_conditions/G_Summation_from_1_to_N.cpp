//G. Summation from 1 to N - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <iostream>

using namespace std;

int main(){

    long long num, sum=0, i=1;

    cin >> num;

    for(; i<=num; i++){
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
