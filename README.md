# 題目4. 停車費計算

### 問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

### 輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。

### 輸出說明：
輸出停車費。

### 範例：
#### 輸入範例:
10 23
15 20
#### 輸出範例:
340
### 解答
```
#include <iostream>
using namespace std;

void ParkingCost(int START_HR, int START_MIN, int END_HR, int END_MIN) {
    int Cost;
    int TOTAL_ParkingTime = 0, TOTAL_ParkingTime_Half = 0;
    TOTAL_ParkingTime = ((END_HR * 60) + END_MIN) - ((START_HR * 60) + START_MIN); // min.

    //TOTAL_ParkingTime_Half = TOTAL_ParkingTime / 30;
    if (TOTAL_ParkingTime < 120) Cost = 30 * (TOTAL_ParkingTime / 30); // $120
    else if ((120 <= TOTAL_ParkingTime) && (TOTAL_ParkingTime < 240)) Cost = 120 + (((TOTAL_ParkingTime - 120) / 30) * 40);
    else if (TOTAL_ParkingTime >= 240) Cost = 120 + 160 + (((TOTAL_ParkingTime - 240) / 30) * 60);
    else if (TOTAL_ParkingTime < 30) Cost = 0;
    cout << Cost << endl;
}

int main() {
    int START_HR, START_MIN;
    int END_HR, END_MIN;

    cin >> START_HR >> START_MIN;
    cin >> END_HR >> END_MIN;
    ParkingCost(START_HR, START_MIN, END_HR, END_MIN);
    return 0;
}
```

