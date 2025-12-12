#include <iostream>
using namespace std;

int main() {
    int answer = 7;    // 設定答案（1~10）
    int guess = 0;     // 玩家輸入的數字

    cout << "猜一個 1 到 10 的數字：";
    cin >> guess;

    // 只要還沒猜對就重複
    while (guess != answer) {
        cout << "猜錯了，再試一次：";
        cin >> guess;
    }

    cout << "恭喜你猜對了！答案是 " << answer << endl;
    return 0;
}
