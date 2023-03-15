# 題目6. 季節判定

### 問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3到5 月為春季，6到8 月為夏季， 9到11 月為秋季， 12到2 月為冬季）。

### 輸入說明：
輸入月份。

### 輸出說明：
輸出該月份的季節， 3到5 月為春季(Spring)， 6到8 月為夏季(Summer)， 9到11 月為秋季(Autumn)， 12到2 月為冬季(Winter)。

### 範例：

#### Sample Input:
3
10
#### Sample Output:
Spring
Autumn
### 解答
```
#include <iostream>
using namespace std;

int main() {
    int season;
    while (cin >> season)
    {
        switch (season)
        {
        case 1:
            cout << "Winter" << endl;
            break;
        case 2:
            cout << "Winter" << endl;
            break;
        case 3:
            cout << "Spring" << endl;
            break;
        case 4:
            cout << "Spring" << endl;
            break;
        case 5:
            cout << "Spring" << endl;
            break;
        case 6:
            cout << "Summer" << endl;
            break;
        case 7:
            cout << "Summer" << endl;
            break;
        case 8:
            cout << "Summer" << endl;
            break;
        case 9:
            cout << "Autumn" << endl;
            break;
        case 10:
            cout << "Autumn" << endl;
            break;
        case 11:
            cout << "Autumn" << endl;
            break;
        case 12:
            cout << "Winter" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
```

