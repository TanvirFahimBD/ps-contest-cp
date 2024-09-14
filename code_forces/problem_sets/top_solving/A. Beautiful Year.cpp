#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int basePos, secondPos, thirdPos, fourthPos;

    for(;;){

        // Increasing year first
        year++;

        // Taking every position digit value
        fourthPos = year/1000;
        thirdPos = (year/100)%10;
        secondPos = (year/10)%10;
        basePos = year%10;

        //Comparing all position are not equal
        if(fourthPos!=thirdPos && fourthPos!=secondPos && fourthPos!=basePos && thirdPos!=secondPos && thirdPos!=basePos && secondPos!=basePos){
            break;
        }
    }

    cout << year << endl;

    return 0;
}
