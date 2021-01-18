 #include<iostream>
using namespace std;
int main() {
	int i, j, na, nb, num = 0;
	int count = 0;
	cout << "The number of A is:" << ' ';
	cin >> na;
	cout << "The number of B is:" << ' ';
	cin >> nb;
	if (na <= 0 || nb <= 0) return 0;
	int* A = new int[na];
	int* B = new int[nb];
	for (i = 0; i < na; i++) {
		cout << "Input the A element" << ' ';
		cin >> A[i];
	}
	for (i = 0; i < nb; i++) {
		cout << "Input the B element" << ' ';
		cin >> B[i];
	}
	if (na < nb) {
		for (i = 0; i < na; i++) {
			for (j = 0; j < nb; j++) {
				if (A[i] == B[j]) count++;
			}
		}
		if (count == na) cout << "A is B's subset" << endl;
		else cout << "NONE" << endl;
	}
	else if (na > nb) {
		for (i = 0; i < nb; i++) {
			for (j = 0; j < na; j++) {
				if (A[j] == B[i]) count++;
			}
		}
		if (count == nb) cout << "B is A's subset" << endl;
		else cout << "NONE" << endl;
	}
	else {
		for (i = 0; i < nb; i++) {
			for (j = 0; j < na; j++) {
				if (A[j] == B[i]) count++;
			}
			if (count == na) cout << "A=B" << endl;
			else cout << "NONE" << endl;
		}
	}
	delete[] A;
	delete[] B;
}