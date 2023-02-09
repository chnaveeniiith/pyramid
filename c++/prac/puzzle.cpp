#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    char matrix[n][n];
    vector<list<pair<int,int>>> graph;
    graph.resize(26);
    getchar();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char alpha = getchar();
            matrix[i][j] = alpha;
            getchar();
            graph[alpha-'a'].push_back({i,j});
        }
    }
    
    char find[n+1];
    while(scanf("%s", find) != EOF) {
        int found = 1;
        if (graph[find[0]-'a'].empty())
            cout << "not found\n";
        else {
            int found_1 = 0;
            for (auto litr = graph[find[0]-'a'].begin(); litr != graph[find[0]-'a'].end(); litr++) {
                if (litr->first < n-1 && matrix[litr->first+1][litr->second] == find[1]) {
                    found = 1;
                    found_1 = 1;
                    int r = litr->first+2;
                    int c = litr->second;
                    for (int j = 2; find[j] != '\0'; j++,r++) {
                        if (r == n || matrix[r][c] != find[j]) {
                            found = 0;
                            break;
                        }
                    }
                    if (found) {
                        cout << "found at row: " << litr->first+1 << " column: " << litr->second+1;
                        cout << " ends at row: " << r << " column: " << c+1 << endl;
                        break;
                    }
                }
                if  (litr->second < n-1 && matrix[litr->first][litr->second+1] == find[1]) {
                    found = 1;
                    found_1 = 1;
                    int r = litr->first;
                    int c = litr->second+2;
                    for (int j = 2; find[j] != '\0'; j++,c++) {
                        if (c == n || matrix[r][c] != find[j]) {
                            found = 0;
                            break;
                        }
                    }
                    if (found) {
                        cout << "found at row: " << litr->first+1 << " column: " << litr->second+1;
                        cout << " ends at row: " << r+1 << " column: " << c << endl;
                        break;
                    }
                }
                if  (litr->first < n-1 && litr->second < n-1 && matrix[litr->first+1][litr->second+1] == find[1]) {
                    found = 1;
                    found_1 = 1;
                    int r = litr->first+2;
                    int c = litr->second+2;
                    for (int j = 2; find[j] != '\0'; j++,r++,c++) {
                        if (c == n || r == n || matrix[r][c] != find[j]) {
                            found = 0;
                            break;
                        }
                    }
                    if (found) {
                        cout << "found at row: " << litr->first+1 << " column: " << litr->second+1;
                        cout << " ends at row: " << r << " column: " << c << endl;
                        break;
                    }
                }
            }
            if (found_1 == 0 || found == 0)
                cout << "not found\n";
        }
    }
    return 0;
}