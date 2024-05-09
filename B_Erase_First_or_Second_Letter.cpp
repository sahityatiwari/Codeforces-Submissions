#include <iostream>
#include <unordered_set>

using namespace std;

int countDistinctStrings(const string& s) {
    unordered_set<string> distinctStrings;

    // Consider both operations in any order
    for (int i = 0; i < s.length(); ++i) {
        for (int j = i; j < s.length(); ++j) {
            // Remove characters from i to j
            string newString = s.substr(0, i) + s.substr(j + 1);
            distinctStrings.insert(newString);
        }
    }

    // Include the original string
    distinctStrings.insert(s);

    return distinctStrings.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = countDistinctStrings(s);
        cout << result << endl;
    }

    return 0;
}
