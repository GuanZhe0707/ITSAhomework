# 題目7. 複數運算

### 問題描述 ：

在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。

### 輸入說明 ：

第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

### 輸出說明 ：

每一列表一個運算結果。虛數的格式為a b。

### 範例 ：

#### Sample Input:
3
- 1 2 2 -3
+ 2 1 1 2
* 1 1 1 1
#### Sample Output:
-1 5
3 3
0 2

### 解答
```
#include <iostream>
using namespace std;

class Complex {
private:
    int re, im;
public:
    Complex(int r = 0, int i = 0) {
        re = r;
        im = i;
    }

    Complex operator + (Complex const& obj) {
        Complex result;
        result.re = re + obj.re;
        result.im = im + obj.im;
        return result;
    }

    Complex operator - (Complex const& obj) {
        Complex result;
        result.re = re - obj.re;
        result.im = im - obj.im;
        return result;
    }

    Complex operator * (Complex const& obj) {
        Complex result;
        result.re = re * obj.re - im * obj.im;
        result.im = re * obj.im + obj.re * im;
        return result;
    }

    void display() {
        cout << re << "  " << im << endl;
    }
};

int main()
{
    //Complex c;
    //c.display();

    //Complex c1(2,3);
    //c1.display();

    //Complex c2(5, -7);
    //c2.display();

    //Complex c3 = c1 + c2;
    //c3.display();

    int n;
    cin >> n;

    Complex c[10];
    for (int i = 1; i <= n; i++) {
        char oper;
        int ar, ai, br, bi;
        cin >> oper >> ar >> ai >> br >> bi;
        Complex a(ar, ai);
        Complex b(br, bi);

        switch (oper) {
        case '+':
            c[i] = a + b;
            break;
        case  '-':
            c[i] = a - b;
            break;
        case  '*':
            c[i] = a * b;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        c[i].display();
    }

}
```

