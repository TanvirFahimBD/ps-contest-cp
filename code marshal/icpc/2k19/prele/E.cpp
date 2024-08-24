#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, c=0;
    cin >> t;
    while(t>0){

        int i, j, n, arr[100], sum = 0, mov = 0, m[100], temp = 0;
        cin >> n;
        for(i=0; i<n; i++){
            cin >> arr[i];
        }

         if(n == 2){
            sum = arr[0] + arr[1];
            c++;
            cout << "Case " << c << ": " <<  sum << " " << mov << endl;
        }

        for (i = 0; i < n - 1; i++) {
            min = i;
            for (j = i + 1; j < n; j++){
                if (a[j] < a[min]){
                    min = j;
                    temp = a[i];
                    a[i] = a[min];
                    a[min] = temp;
                }
            }
        }


//        else if(n > 2){
//            for(i=n-1; i>=0; i--){
//                if(i==1){
//                    sum += arr[i];
//                    break;
//                }
//                sum+= arr[i];
//            }
//            min = 0;
//            mov++;
//            c++;
//            cout << "Case " << c << ": " <<  arr << " " << mov << endl;
//        }

        t--;
    }

    return 0;
}

