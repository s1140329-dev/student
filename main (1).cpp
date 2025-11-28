#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;  // 將 i 加到 sum 裡
    }

    cout << "1 + 2 + 3 + 4 + 5 = " << sum << endl;
    return 0;
}
