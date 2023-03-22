# 題目11. 矩陣反轉

### 問題描述 ：

請設計一程式，輸入一個陣列並且反轉後再輸出。

 

### 輸入說明 ：

第一行先輸入矩陣的行、列，之後再輸入陣列元素。

 

### 輸出說明 ：

反轉後的矩陣。

 

### 範例 ：

 

#### 輸入範例
2 1
3
2
3 2
4 6
7 8
4 6
2 4
7 8 9 10
6 5 22 4
4 2
4 5
2 3
4 5
6 9

#### 輸出範例
3 2
4 7 4
6 8 6
7 6
8 5
9 22
10 4
4 2 4 6
5 3 5 9
 
### 解答
```
#include <iostream>
using namespace std;

int main()
{
    int a, b, count;
    int* num;
    count = 0;
    cin >> a >> b;
    num = new int[a * b];
    for (int i = 0; i < (a * b); i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            count++;
            cout << num[j * b + i];
            if (count % a != 0)
                cout << " ";
        }
        cout << endl;
    }
    delete[]num;
    return 0;
}

```

