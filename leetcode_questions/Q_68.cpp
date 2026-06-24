#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int i = 0;
        int n = words.size();

        while (i < n) {
            int j = i;
            int len = 0;

            while (j < n && len + words[j].size() + (j - i) <= maxWidth) {
                len += words[j].size();
                j++;
            }

            int gaps = j - i - 1;
            string line;

            if (j == n || gaps == 0) {
                line = words[i];

                for (int k = i + 1; k < j; k++) {
                    line += " " + words[k];
                }

                line += string(maxWidth - line.size(), ' ');
            }
            else {
                int totalSpaces = maxWidth - len;
                int spacesPerGap = totalSpaces / gaps;
                int extraSpaces = totalSpaces % gaps;

                for (int k = i; k < j - 1; k++) {
                    line += words[k];
                    line += string(spacesPerGap, ' ');

                    if (extraSpaces > 0) {
                        line += " ";
                        extraSpaces--;
                    }
                }

                line += words[j - 1];
            }

            ans.push_back(line);
            i = j;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<string> words = {
        "This", "is", "an", "example", "of", "text", "justification."
    };

    int maxWidth = 16;

    vector<string> result = obj.fullJustify(words, maxWidth);

    for (string s : result) {
        cout << "\"" << s << "\"" << endl;
    }

    return 0;
}