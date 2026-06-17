#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int xapna = target[0];
        int yapna = target[1];

        int dist = abs(yapna) + abs(xapna);

        for (auto i : ghosts) {
            int d = abs(xapna - i[0]) + abs(yapna - i[1]);

            if (d <= dist) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter number of ghosts: ";
    cin >> n;

    vector<vector<int>> ghosts(n, vector<int>(2));

    cout << "Enter ghost coordinates (x y):\n";
    for (int i = 0; i < n; i++) {
        cin >> ghosts[i][0] >> ghosts[i][1];
    }

    vector<int> target(2);
    cout << "Enter target coordinates (x y): ";
    cin >> target[0] >> target[1];

    Solution obj;

    if (obj.escapeGhosts(ghosts, target))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}