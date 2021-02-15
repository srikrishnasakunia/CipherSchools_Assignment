#include<iostream>
using namespace std;
int main() {
	int a, num;
	cout << "Enter number of items:";
	cin >>num;
	int *arr = new int(num);
	cout << "Enter " << num << " items" << endl;
	for (a = 0; a < num; a++) {
		cin >> arr[a];
	}
	cout << "You entered this values: ";
	for (a = 0; a < num; a++) {
		cout << arr[a] << " ";
	}
	return 0;
}
