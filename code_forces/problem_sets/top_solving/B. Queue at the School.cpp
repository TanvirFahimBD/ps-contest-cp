/// Compare both position & Change if the condition occurs - Also skip the task for those position by increasing position value - Show the output

#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int t;
//    cin >> t;
//    while(t>0){

        int i, j, child, time, temp;
        string str;
        cin >> child >> time;
        cin >> str;
        for(i=0; i<time; i++){
            for(j=0; j<child-1; j++){
               if(str[j] == 'B' && str[j+1]== 'G'){
                str[j] = 'G';
                str[j+1] = 'B';
                j++;
               }
            }
        }

        for(j=0; j<child; j++){
            cout << str[j];
        }
        cout << endl;

//        t--;
//    }

    return 0;
}
