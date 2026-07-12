#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    vector<int> dp = triangle.back();

    for (int i = triangle.size() - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
        }
    }

    return dp[0];
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    cout << minimumTotal(triangle) << endl;

    return 0;
}