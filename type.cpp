#include <iostream>
using namespace std;

int main() {
    char input[1000000], result[1000000];
    cin >> input;

    int Index = 0;
    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] == '=') {
            if (Index > 0) {
                Index--; 
            }
        } else {
            result[Index] = input[i];
            Index++;
        }
    }

    result[Index] = '\0';
    cout << result ;

    return 0;
}
