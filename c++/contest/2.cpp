#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long int arr[n];

    int start,end;

    for (int i = 0; i < n; i++) {
        cin >> start;
        arr[i] = start;
    }

    long long int ans_pre[n], ans_suf[n];

    ans_pre[0] = 0;
    for (int i = 1; i < n; i++) {
        ans_pre[i] = ans_pre[i-1];
        if (arr[i-1] > arr[i])
            ans_pre[i] += (arr[i-1] - arr[i]);
    }

    ans_suf[0] = 0;
    for (int i = n-1; i > 0; i--) {
        ans_suf[n-i] = ans_suf[n-i-1];
        if (arr[i-1] < arr[i])
            ans_suf[n-i] += (arr[i] - arr[i-1]);
    }

    while (q--) {
        cin >> start >> end;
        if (--start > --end) {
            start = n-1-start;
            end = n-1-end;
            cout << ans_suf[end]-ans_suf[start] << endl;
            continue;
        }
        cout << ans_pre[end]-ans_pre[start] << endl;
    }
    return 0;
}