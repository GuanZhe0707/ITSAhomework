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