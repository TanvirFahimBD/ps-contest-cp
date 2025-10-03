#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void solve() {
    int n;
    if (!(std::cin >> n)) return;

    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}

// Input
// 4
// 3 2 1 2
// Output
// 1 2 2 3 
// Input
// 3
// 2 3 8
// Output
// 2 3 8 