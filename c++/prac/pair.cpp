#include <iostream>
#include <vector>

using namespace std;

class i_pair {
    public:
        int a;
        int b;
        i_pair(int first, int second) {
            a = first;
            b = second;
        }
};

bool is_connected(i_pair p1, i_pair p2) {
    if (p1.a - p2.a == -1 && p1.b - p2.b == -1)
        return true;
    if (p1.a - p2.a == -1 && p1.b - p2.b == 0)
        return true;
    if (p1.a - p2.a == 0 && p1.b - p2.b == -1)
        return true;
    return false;
}

int main() {
    i_pair test1(1,2);
    i_pair test2(2,3);

    test1.a = 9;

    cout << is_connected(test1,test2) << endl;
}