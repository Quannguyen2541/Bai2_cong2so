#include <iostream>
using namespace std;
int main() {
	cout << "Chuong trinh tinh tong hai so" << endl;
	int so1, so2; // khai bao bien so1 va so2 kieu so nguyen 
	int tong;
	cout << "Nhap so 1:"; cin >> so1;
	cout << "Nhap so 2:"; cin >> so2;
	tong = so1 + so2;
	cout << "tong hai so:" << so1 << "+" << so2 << "=" << tong << endl;
	cout << "tong hai so:" << so1 << "+" << so2 << "=" << tong;  
	return 0;
}