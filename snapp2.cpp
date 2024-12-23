#include <iostream>
using namespace std;

bool matching(char a[],char b[], int pre, int suf) {

    for (int i = 0; i < pre; i++) {
        if (a[i] != b[i]) return false;
    }
    int len1 = 0, len2 = 0;
    while (a[len1] != '\0') len1++;
    while (b[len2] != '\0') len2++;

    for (int i = 0; i < suf; i++) {
        if (a[len1 - suf + i] != b[len2 - suf + i]) return false;
    }
    return true;
}
int main() {
    int n, pre, suf;
    cin >> n >> pre >> suf;

    if (n <= 0) return 0;

    char names[n][101];
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    int test = n; 
    bool remove[n] = {false};

    for (int i = 0; i < n; i++) {
        if (remove[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (!remove[j] && matching(names[i], names[j], pre, suf)) {
                remove[j] = true;
                test--;
            }
        }
    }

    cout << test << endl;
    return 0;
}