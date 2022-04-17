#include <iostream>
using namespace std;




// Bai 747 Tim uoc so le lon nhat cua so nguyen duong n
int bai747(int n) {
	if (n % 2 != 0) {
		return n;
	}
	else {
		return bai747(n / 2);
	}
}
// De Quy Duoi Bai 747 Tim uoc so le lon nhat cua so nguyen duong n
// Khu De Quy Bai 747 Tim uoc so le lon nhat cua so nguyen duong n


// Bai 748 Tinh S(n) = can(2+can(2+can(2+can(2+can2)))))
double bai748(int n) {
	if (n == 1) {
		return pow(2, 0.5);
	}
	else {
		return pow(2 + bai748(n - 1), 0.5);
	}
}


// Bai 751
double bai751(int n) {
	if (n == 1) {
		return 0.5;
	}
	else {
		return 1.0 / (1.0 + bai751(n - 1));
	}
}


// Bai 752
int bai752(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return 1 + bai752(n / 10);
	}
}


// Bai 753
int bai753(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return (n % 10) + bai753(n / 10);
	}
}

// Menu
void Menu() {
	int luachon;
	do {
		system("CLS");
		cout << "\n\n===========Menu===========";
		cout << "\n1. Bai 747";
		cout << "\n2. Bai 747 De Quy Duoi";
		cout << "\n3. Bai 747 Khu De Quy";
		cout << "\n4. Bai 748";
		cout << "\n5. Bai 748 De Quy Duoi";
		cout << "\n6. Bai 748 Khu De Quy";
		cout << "\n7. Bai 751";
		cout << "\n8. Bai 751 De Quy Duoi";
		cout << "\n9. Bai 751 Khu De Quy";
		cout << "\n10. Bai 752";
		cout << "\n11. Bai 751 De Quy Duoi";
		cout << "\n12. Bai 751 Khu De Quy";
		cout << "\n13. Bai 753";
		cout << "\n0.Thoat";
		cout << "\n\n===========End===========";
		do {
			cout << "\nNhap vao lua chon: ";
			cin >> luachon;
			if (luachon < 0 || luachon > 30) {
				cout << "\nLua chon khong hop le, nhap lai";
			}
		} while (luachon < 0 || luachon > 30);

		if (luachon == 1) {
			cout << "\nNhap so n: ";
			int n;
			cin >> n;
			int ketQua = bai747(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 4) {
			cout << "\nNhap so n: ";
			int n;
			cin >> n;
			double ketQua = bai748(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 7) {
			cout << "\nNhap so n: ";
			int n;
			cin >> n;
			double ketQua = bai751(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 10) {
			cout << "\nNhap so n: ";
			int n;
			cin >> n;
			int ketQua = bai752(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 13) {
			cout << "\nNhap so n: ";
			int n;
			cin >> n;
			int ketQua = bai753(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

	} while (luachon != 0);
}

int main() {
	Menu();
	return 0;
}