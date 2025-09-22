/// Initial Year=1 - Multiply with yearly weight with increasing rate - Compare & break(! Condition can be given inside for loop)

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int year, limakWeight, bobWeight;
        cin >> limakWeight >> bobWeight;
            for(year=1;; year++){
                limakWeight *= 3;
                bobWeight *= 2;
                if(limakWeight>bobWeight) break;
            }
        cout << year << endl;

    return 0;
}
