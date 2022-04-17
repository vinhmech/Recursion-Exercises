#include <iostream>
using namespace std;




// Bai 739 Tinh T(x,n) = x^n
double bai739(double x, int n) {
	if (x == 0 && n > 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n > 0) {
		if (n == 1) {
			return x;
		}
		else {
			return x * bai739(x, n - 1);
		}
	}
	else if (n<0) {
		if (n == -1) {
			return (double)1 / x;
		}
		else {
			return ((double)1 / x) * bai739(x, n + 1);
		}
	}
}
// De Quy Duoi Bai 739 Tinh T(x,n) = x^n
double bai739_DeQuyDuoi(double x, int n, double tich = 1) {
	if (x == 0 && n > 0) {
		return 0;
	}
	else if (n == 0) {
		return tich;
	}
	else if (n > 0) {
		return bai739_DeQuyDuoi(x, n - 1, tich * x);
	}
	else if (n < 0) {
		return bai739_DeQuyDuoi(x, n + 1, tich * (1.0/x));
	}
}
// Khu De Quy Bai 739 Tinh T(x,n) = x^n
double bai739_KhuDeQuy(double x, int n) {
	double Tich = 1;
	if (x == 0 && n > 0) {
		return 0;
	}
	else if (n == 0) {
		return Tich;
	}
	else if (n > 0) {
		for (int i = 1; i <= n; i++) {
			Tich *= x;
		}
		return Tich;
	}
	else if (n < 0) {
		for (int i = n; i < 0; i++) {
			Tich *= (1.0 / x);
		}
		return Tich;
	}
}


// Bai 740 Tinh S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3.n
int bai740_TinhTich(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * bai740_TinhTich(n - 1);
	}
}
int bai740(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return bai740_TinhTich(n) + bai740(n - 1);
	}
}
// De Quy Phi Tuyen Bai 740 S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3.n
int bai740_DeQuyPhiTuyen(int n) {
	if (n == 1) {
		return 1;
	}
	int Tich = 1;
	for (int i = 1; i <= n; i++) {
		Tich *= i;
	}
	return bai740_DeQuyPhiTuyen(n - 1) + Tich;
}
// De Quy Duoi Bai 740 S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3.n
int bai740_DeQuyDuoi(int n, int x = 1) {
	if (n == 1) {
		return x;
	}
	else {
		return bai740_DeQuyDuoi(n - 1, x + bai740_TinhTich(n));
	}
}


// Bai 741 Tinh S(n) = x + x^2 + x^3 + ... + x^n
int bai741_TinhSoMu(int x, int n) {
	if (n == 1) {
		return x;
	}
	else {
		return bai741_TinhSoMu(x, n - 1) * x;
	}
}
int bai741(int x, int n) {
	if (x == 0) {
		return 0;
	}
	if (n == 1) {
		return x;
	}
	else {
		return bai741(x, n - 1) + bai741_TinhSoMu(x,n);
	}
}
// De Quy Duoi Bai 741 Tinh S(n) = x + x^2 + x^3 + ... + x^n
int bai741_DeQuyDuoi(int x, int n, int tong = 0) {
	if (n == 0) {
		return tong;
	}
	else {
		return bai741_DeQuyDuoi(x, n - 1, tong + bai741_TinhSoMu(x, n));
	}
}
// De Quy Phi Tuyen Bai 741 Tinh S(n) = x + x^2 + x^3 + ... + x^n
int bai741_DeQuyPhiTuyen(int x, int n) {
	if (n == 1) {
		return x;
	}
	int TinhSoMu = 1;
	for (int i = 1; i <= n; i++) {
		TinhSoMu *= x;
	}
	return bai741_DeQuyPhiTuyen(x, n - 1) + TinhSoMu;
}



// Bai 744 Tinh S(n) = 1 + 1/(1+2) + 1/(1+2+3) + 1/(1+2+3+4) + ... + 1/(1+2+3+4+..+n)
int bai744_TinhTong(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return bai744_TinhTong(n - 1) + n;
	}
}
double bai744(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return bai744(n - 1) + (1.0 / bai744_TinhTong(n));
	}
}


// Menu
void Menu() {
	int luachon;
	do {
		system("CLS");
		cout << "\n\n===========Menu===========";
		cout << "\n1. Bai 739";
		cout << "\n2. Bai 739 De Quy Duoi";
		cout << "\n3. Bai 739 Khu De Quy";
		cout << "\n4. Bai 740";
		cout << "\n5. Bai 740 De Quy Phi Tuyen";
		cout << "\n6. Bai 740 De Quy Duoi";
		cout << "\n7. Bai 741";
		cout << "\n8. Bai 741 De Quy Duoi";
		cout << "\n9. Bai 741 De Quy Phi Tuyen";
		cout << "\n10. Bai 744";
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
			cout << "\nNhap vao so x: ";
			float x;
			cin >> x;
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			if (x == 0 && n <= 0) {
				cout << "\nKet qua undefined";
			}
			else {
				double ketQua = bai739(x, n);
				cout << "\nKet qua = " << ketQua << endl;
			}
			system("pause");
		}

		else if (luachon == 2) {
			cout << "\nNhap vao so x: ";
			float x;
			cin >> x;
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			if (x == 0 && n <= 0) {
				cout << "\nKet qua undefined";
			}
			else {
				double ketQua = bai739_DeQuyDuoi(x, n);
				cout << "\nKet qua = " << ketQua << endl;
			}
			system("pause");
		}

		else if (luachon == 3) {
			cout << "\nNhap vao so x: ";
			float x;
			cin >> x;
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			if (x == 0 && n <= 0) {
				cout << "\nKet qua undefined";
			}
			else {
				double ketQua = bai739_KhuDeQuy(x, n);
				cout << "\nKet qua = " << ketQua << endl;
			}
			system("pause");
		}

		else if (luachon == 4) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai740(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 5) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai740_DeQuyPhiTuyen(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 6) {
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai740_DeQuyDuoi(n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 7) {
			cout << "\nNhap vao so x: ";
			int x;
			cin >> x;
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai741(x,n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 8) {
			cout << "\nNhap vao so x: ";
			int x;
			cin >> x;
			cout << "\nNhap vao so n: ";
			int n;
			cin >> n;
			int ketQua = bai741_DeQuyDuoi(x, n);
			cout << "\nKet qua = " << ketQua << endl;
			system("pause");
		}

		else if (luachon == 9) {
		cout << "\nNhap vao so x: ";
		int x;
		cin >> x;
		cout << "\nNhap vao so n: ";
		int n;
		cin >> n;
		int ketQua = bai741_DeQuyPhiTuyen(x, n);
		cout << "\nKet qua = " << ketQua << endl;
		system("pause");
		}

		else if (luachon == 10) {
		cout << "\nNhap vao so n: ";
		int n;
		cin >> n;
		double ketQua = bai744(n);
		cout << "\nKet qua = " << ketQua << endl;
		system("pause");
		}

	} while (luachon != 0);
}

int main() {
	Menu();
	return 0;
}