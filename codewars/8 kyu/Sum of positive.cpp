//#include<bits/stdc++.h>
//using namespace std;
//
//int positive_sum (int arr[5]){
//
//    int sum = 0;
//        for(int i=0; i<5; i++){
//            if(arr[i]>0){
//            sum += arr[i];
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t>0){
//
//        int i, arr[6];
//        for(i=0; i<5; i++){
//            cin >> arr[i];
//        }
//
//        int sum = positive_sum(arr);
//        cout << sum << endl;
//
//        t--;
//    }
//
//
//    return 0;
//}




//#include <vector>

//int positive_sum (const std::vector<int> arr){
//  // Your code here
//  return -1;
//}



#include <vector>

int positive_sum (const std::vector<int> arr){
    int sum = 0;
//        int len = *(&arr + 1) - arr;x
    int arrSize = sizeof(arr)/sizeof(arr[0]);
        for(int i=0; i<arrSize; i++){
            if(arr[i]>0){
            sum += arr[i];
        }
    }

    return sum;
}























