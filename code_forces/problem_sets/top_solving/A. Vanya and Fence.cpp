#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numOfFriend, heightOfFrenc, i, friendHeight, count = 0;
    cin >> numOfFriend >> heightOfFrenc;
    for(i=0; i<numOfFriend; i++){
        cin >> friendHeight;

        // Compare with height and increase count value
        if(friendHeight > heightOfFrenc){
            count += 2;
        }else{
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
