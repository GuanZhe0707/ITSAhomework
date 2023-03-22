#include <iostream>
using namespace std;

int main() {
	int num, count = 0;

	cin >> num;
	for (int i = 2; i < num; i++)
		if (num % i == 0) count = count + 1;
	if (count == 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
