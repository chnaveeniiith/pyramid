#include <iostream>
using namespace std;

class first_class {
    private:
        int private_num;
    public:
        string public_str;
        void setPrivateNum(int n) {private_num = n; }
        int getPrivateNum() {return private_num; }
    };

int main() {
    int n;
    cin >> n;
    cout << "hello! naveen " << n << endl;

    first_class test;

    test.public_str = "test";
    test.setPrivateNum(10);

    cout << test.public_str + " "  << test.getPrivateNum() << endl;
    return 0;
}