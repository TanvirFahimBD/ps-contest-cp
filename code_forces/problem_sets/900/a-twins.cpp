// https://codeforces.com/problemset/problem/160/A

///==================================================================================
///                         ACCEPTED
///==================================================================================

///==================================================================================
///                         CONDITION:
///1. Take the specific value in a string
///2. Compare with the Input string with the specific value. If match then increase the
///   position value of specific string, increase count of the match
///3. Compare the match value with the specific string legth
///==================================================================================

///==================================================================================
///                          LEARNING:
///==================================================================================
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> coins[i];
        total_sum += coins[i];
    }
    
    std::sort(coins.rbegin(), coins.rend()); // Sort in descending order
    
    int my_sum = 0;
    int coins_count = 0;
    
    for (int i = 0; i < n; ++i) {
        my_sum += coins[i];
        coins_count++;
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    
    std::cout << coins_count << std::endl;
    
    return 0;
}