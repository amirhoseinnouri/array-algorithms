#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;
    int Count = N ; 
    int Color = 0;
    int Countc[1000];
    int color;

    for (int i = 0; i < N ; ++i) {
        cin >> color;
        Countc[color]++;
    }
    for (int i = 1; i <= 100; ++i) {
        if (Countc[i] > 0 && Countc[i] < Count) {
            Count = Countc[i];
            Color = i;
        }
    }
    cout << Color << endl;

    return 0;
}