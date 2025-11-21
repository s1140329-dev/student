#include <iostream>
using namespace std;

int main() {
    cout << "請輸入你的年齡:" << endl;

    int age;
    cin >> age;

    if (age >= 18) {
        cout << "你已滿 18 歲，是成年人！" << endl;
    } else {
        cout << "你未滿 18 歲，加油努力讀書！" << endl;
    }

    return 0;
}

    