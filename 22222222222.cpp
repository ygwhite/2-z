#include<iostream>
using namespace std;
struct GYM {
	double SC;
	int ID;
};
int main() {
	int a, b, c, d, e, t;
		int const YG = 5;
	GYM st[YG];
	for (e = 0;e <= 4;e++) {
		st[e].ID = e;
		cout << "Студент" << e << "Средний бал";
		cin >> st[e].SC;
		d = d + st[e].SC;
		if (st[e].SC >= 4)c++;

	}
	for (a = 0;a < c;a++)
		for (e = 0;e <= 4;e++) {
			if (st[e].SC < d[e + 1].SC) {
				t = st[e + 1].SC;
				st[e + 1].SC = st[e].SC;
				st[e].SC = t;
			}
		}
	for (e = 0;e = 4;e++)
		cout << st[e].SC

		for (e = 0; n <= 4; n++);
cout << st[n].SC;
cout << endl << "averade ball" << d / YG;
cout << endl << "4 & 5" << K;
}

