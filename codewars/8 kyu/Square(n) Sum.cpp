//#include <vector>
//
//int square_sum(const std::vector<int>& numbers)
//{
//    int i, sum = 0, len;
//    len = sizeof(numbers)/sizeof(numbers[0]);
//    for(i=0; i<len; i++){
//      sum += numbers[i] * numbers[i];
//    }
//  return sum;
//}

#include<bits/stdc++.h>
using namespace std;

int count_sheep(vector<bool> arr)
{
  int i, count = 0, len;
    len = sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<len; i++){
      if(arr[i] == true){
        count++;
      }else if(arr[i] = false){
            continue;
        }
    }
    return count;
}

int main(){
     vector<bool> array1 = { true,  true,  true,  false,
                                  true,  true,  true,  true ,
                                  true,  false, true,  false,
                                  true,  false, false, true ,
                                  true,  true,  true,  true ,
                                  false, false, true,  true };
    int num2 = count_sheep(array1);
    cout << num2 << endl;

}
