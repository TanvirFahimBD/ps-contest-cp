//input array of pipe heights & compare before the last one
// If pipe height greater than frog height the game over otherwise win

#include<iostream>
using namespace std;

int main()
{
    int height, pnum, count = 0;
    cin >> height >> pnum;
    int arr[pnum+1];

    for(int i=0; i<pnum; i++){
        cin >> arr[i];
    }

    for(int i=0; i<pnum-1; i++){
      if((abs(arr[i+1]-arr[i]))>height){
            count++;
            break;
        }
    }

    if(count == 0){
        cout << "YOU WIN" << endl;
    }
    else cout << "GAME OVER" << endl;

    return 0;
}
