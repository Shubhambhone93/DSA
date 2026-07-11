#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& nums, int start, vector<int>& subset, vector<vector<int>>& ans) {
    ans.push_back(subset);

    for (int i = start; i < nums.size(); i++) {
        subset.push_back(nums[i]);
        backtrack(nums, i + 1, subset, ans);
        subset.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans;
    vector<int> subset;

    backtrack(nums, 0, subset, ans);

    cout << "\nAll Subsets:\n";
    for (const auto& s : ans) {
        cout << "{ ";
        for (int x : s) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}