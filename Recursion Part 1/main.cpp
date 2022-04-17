#include <iostream>
using namespace std;

// Bai 730 Tinh S(n) = 1 + 2 + 3 +...+ n
int bai730(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + bai730(n - 1);
	}
}
// De Quy Duoi Bai 730 Tinh S(n) = 1 + 2 + 3 +...+ n
int bai730_DeQuyDuoi(int n, int x = 1) {
	if (n == 1) {
		return x;
	}
	else {
		return bai730_DeQuyDuoi(n-1, x+n);
	}
}
// Khu De Quy Bai 730 Tinh S(n) = 1 + 2 + 3 +...+ n
int bai730_KhuDeQuy(int n) {
	int Tong = 1;
	for (int i = 2; i <= n; i++) {
		Tong += i;
	}
	return Tong;
}


// Bai 731 Tinh S(n) = 1^2 + 2^2 + 3^2 +...+ n^2
int bai731(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * n + bai731(n - 1);
	}
}
// De Quy Duoi Bai 731 Tinh S(n) = 1^2 + 2^2 + 3^2 +...+ n^2
int bai731_DeQuyDuoi(int n, int x = 1) {
	if (n == 1) {
		return x;
	} 
	else {
		return bai731_DeQuyDuoi(n - 1, x + n * n);
	}
}
// Khu De Quy Bai 731 Tinh S(n) = 1^2 + 2^2 + 3^2 +...+ n^2
int bai731_KhuDeQuy(int n) {
	int tong = 1;
	for (int i = 2; i <= n; i++) {
		tong += i * i;
	}
	return tong;
}

// Bai 732 Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double bai732(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return ((double) 1 / n) + bai732(n - 1);
	}
}
// De Quy Duoi Bai 732 Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double bai732_DeQuyDuoi(int n, double x = 1) {
	if (n == 1) {
		return x;
	}
	else {
		return bai732_DeQuyDuoi(n - 1, x + (double) 1 / n);
	}
}
// Khu De Quy Bai 732 Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double bai732_KhuDeQuy(int n) {
	double tong = 1;
	for (int i = 2; i <= n; i++) {
		tong += (double)1 / i;
	}
	return tong;
}

// Bai 733 Tinh S(n) = 1/2 + 1/4 + ... + 1/2n
double bai733(int n) {
	if (n == 1) {
		return 0.5;
	}
	else {
		return (double)1 / (2 * n) + bai733(n - 1);
	}
}
// De Quy Duoi Bai 733 Tinh S(n) = 1/2 + 1/4 + ... + 1/(2n)
double bai733_DeQuyDuoi(int n, double x = 0.5) {
	if (n == 1) {
		return x;
	}
	else {
		return bai733_DeQuyDuoi(n - 1, x + (double) 1 /(2*n));
	}
}
// Khu De Quy Bai 733 Tinh S(n) = 1/2 + 1/4 + ... + 1/(2n)
double bai733_KhuDeQuy(int n) {
	double tong = 0.5;
	for (int i = 2; i <= n; i++) {
		tong += (double) 1 / (2*i);
	}
	return tong;
}


// Menu
void Menu() {
	int luachon;
	do {
		system("CLS");
		cout << "\n\n===========Menu===========";
		cout << "\n1. Bai 730";
		cout << "\n2. Bai 730 De Quy Duoi";
		cout << "\n3. Bai 730 Khu De Quy";
		cout << "\n4. Bai 731";
		cout << "\n5. Bai 731 De Quy Duoi";
		cout << "\n6. Bai 731 Khu De Quy";
		cout << "\n7. Bai 732";
		cout << "\n8. Bai 732 De Quy Duoi";
		cout << "\n9. Bai 732 Khu De Quy";
		cout << "\n10. Bai 733";
		cout << "\n11. Bai 733 De Quy Duoi";
		cout << "\n12. Bai 733 Khu De Quy";
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
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai730(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 2) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai730_DeQuyDuoi(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 3) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai730_KhuDeQuy(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 4) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai731(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 5) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai731_DeQuyDuoi(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 6) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai731_KhuDeQuy(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 7) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai732(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 8) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai732_DeQuyDuoi(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 9) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai732_KhuDeQuy(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 10) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai733(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 11) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai733_DeQuyDuoi(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 12) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			double ketQua = bai733_KhuDeQuy(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}
	} while (luachon != 0);
}

int main() {
	Menu();
	return 0;
}