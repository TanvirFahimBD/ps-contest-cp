// Not completed yet

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, numOfDeck, numOfQuery, card[100], color[100];
    cin >> numOfDeck;
    cin >> numOfQuery;
    for(i=0; i<numOfDeck; i++){
        cin >> card[i];
    }

    for(i=0; i<numOfQuery; i++){
        cin >> color[i];
    }

    for(j=0; j<numOfQuery; j++){
        for(i=0; i<numOfDeck; i++){
            if(color[j] == card[i]){
                // give the color to first deck
                card[0] = color[j];

                // Move all others deck to the next position
                for(j=1; j<numOfQuery; j++){
                    card[i+1] = card[i];
                }

                i++;
                break;
            }
        }
        cout << i << " ";
    }



    return 0;
}
