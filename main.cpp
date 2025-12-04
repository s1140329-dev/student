#include <iostream>
using namespace std;

int main() {
    // 外層迴圈表示乘數
    for (int i = 1; i <= 9; ++i) {
        // 內層迴圈表示被乘數
        for (int j = 1; j <= 9; ++j) {
            // 印出乘法表每個數字
            cout << i << " * " << j << " = " << i * j << "\t"; 
        }
        // 換行
        cout << endl;
    }

    return 0;
}
