#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int start;
        cin >> start;

        int keys[4];
        keys[0] = -1;
        cin >> keys[1] >> keys[2] >> keys[3];

        int check[4];
        memset(check, 0, sizeof(check));
        check[0] = -1;

        int loop = 3;

        while (loop--) {
            check[start] = 1;
            if (keys[start] == 0) {
                break;
            }
            start = keys[start];
        }

        int flag = 1;
        for (int i = 1; i < 4; i++) {
            if (check[i] == 0) {
                flag = 0;
                cout << "NO\n";
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}