#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n,m;
        cin >> n >> m;
        int arr[n];
        char ans[m];
        for (int i = 0; i < m; i++) {ans[i] = 'B'; }
        for (int i = 0; i < n; i++) {cin >> arr[i]; arr[i]--;}

        for (int i = 0; i < n; i++) {
            if (ans[arr[i]] == 'A' && ans[m-1-arr[i]] == 'A')
                continue;
            if (ans[arr[i]] == 'A')
                ans[m-1-arr[i]] = 'A';
            else if (ans[m-1-arr[i]] == 'A')
                ans[arr[i]] = 'A';
            else {
                int check = (arr[i] < m-1-arr[i]) ? arr[i] : m-1-arr[i];
                ans[check] = 'A';
            }
        } 
        printf("%s\n", ans);
    }
    return 0;
}