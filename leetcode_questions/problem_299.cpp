#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        unordered_map<char, int> mp;

        // Count characters from secret that are not bulls
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                mp[secret[i]]++;
            }
        }

        // Count cows
        for (int i = 0; i < guess.size(); i++) {
            if (secret[i] != guess[i] && mp[guess[i]] > 0) {
                cows++;
                mp[guess[i]]--;
            }
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};

int main() {
    Solution obj;

    string secret, guess;
    cin >> secret >> guess;

    cout << obj.getHint(secret, guess) << endl;

    return 0;
}