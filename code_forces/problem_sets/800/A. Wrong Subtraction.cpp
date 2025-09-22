/// Check condition - If div - Else Sub till Number of sub

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int i, subNumber;
        long int number;
        cin >> number >> subNumber;
        for(i=0; i<subNumber; i++){
            if(number%10 == 0){
                number /= 10;
            }else number--;
        }
        cout << number << endl;

    return 0;
}
