//! Not works on mathematical way show wrong output for 999, Works for string
// set 3, 2 , 1 digits for different output in array
// count from 3 to 1 digit & compare with setting string create a new string

#include<iostream>
using namespace std;

int main(){
    int num;
    string numer;
    string x1[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string x2[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string x3[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    cin >> num;
    numer = x3[num/100] + x2[(num%100)/10] + x1[num%10];
    cout << numer << endl;
    return 0;
}
