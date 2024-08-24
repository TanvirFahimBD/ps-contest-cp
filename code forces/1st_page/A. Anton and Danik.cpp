#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, match, antonWin=0, danikWin=0;
    string winners;
    cin >> match;
    cin >> winners;
    //Count each winner winning number
    for(i=0; i<match; i++){
        if(winners[i] == 'A'){
            antonWin++;
        }else{
            danikWin++;
        }
    }

    // Compare Winning number
    if(antonWin == danikWin){
        cout << "Friendship" << endl;
    }
    else if(antonWin > danikWin){
        cout << "Anton" << endl;
    }else cout << "Danik" << endl;

    return 0;
}
