# 題目12. 遞迴程式練習

### 問題描述：

給定遞迴函式 請計算出 f (k) 。

### 輸入說明：

輸入值為一個大於 1 的整數。

### 輸出說明：

f(k) 的計算結果。

### 範例：

#### Sample Input
10

#### Sample Output
60

#### Sample Input
12

#### Sample Output
94

### 解答
```
#include <iostream>   
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    else if (n > 1) {
        return f(n - 1) + f(n / 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << "\n";

    return 0;
}
```
