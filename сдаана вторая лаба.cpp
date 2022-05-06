#include<iostream>
using namespace std;
struct student {
	double SC;
	int NUM;
};
int main() {
	int a = 0,b = 0,c = 0, n = 0, t = 0;
	int const abc = 5;
	student st[abc];
	setlocale(LC_ALL, "Rus");
	for (n = 0; n <= 4; n++) { 
		st[n].NUM = n;
		cout << "Студент " << n << " средний балл: ";
		cin >> st[n].SC;
		c = c + st[n].SC;
		if (st[n].SC >= 4) b++; //считает 
	}
	for (a = 0; a < abc; a++) {
		for (n = 0; n < -a; n++) {
			if (st[n].SC < st[n + 1].SC) {
				t = st[n + 1].SC;
				st[n + 1].SC = st[n].SC;
				st[n].SC = t;
			}
		}
	}
	for (n = 0; n <= 4; n++) {
		cout << st[n].SC;
	}
	cout << endl << "Средний балл студентов: " << c / abc;
	cout << endl << "Хорошисты и отличники: " << b;
}