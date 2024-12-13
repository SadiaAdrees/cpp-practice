#include<iostream>
using namespace std;
int main() {
	int choice = 0, r1 = 0, r2 = 0, c1 = 0, c2 = 0;
	int arr1[100][100], arr2[100][100], multi[100][100], add[100][100], sub[100][100];
	cout << "***Choose the Options**** " << endl << "1.Addition" << endl << "2.Subtraction" << endl << "3.Multiplication" << endl << "4.Exist" << endl;
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "Enter value of matrixs order." << endl;
		do {
			cout << "Make sure You Enter Both Matrix same number of rows and same number of Columns" << endl;
			cout << "Enter 1st martrix Rows: ";
			cin >> r1;
			cout << "Enter 1st martrix columns: ";
			cin >> c1;
			cout << "Enter 2nd martrix Rows: ";
			cin >> r2;
			cout << "Enter 2nd martrix column: ";
			cin >> c2;
		} while (r1 != r2 && c1 != c2);

		cout << "Enter the value of 1st Matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << "Enter the value of arr1[" << i << "][" << j << "]= ";
				cin >> arr1[i][j];
			}
		}
		cout << endl << "Enter the value of 2nd Matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << "Enter the value of arr2[" << n << "][" << m << "]= ";
				cin >> arr2[n][m];
			}
		}
		cout << "The 1st matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << arr1[i][j] << " ";
			}cout << endl;
		}
		cout << "The 2nd matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << arr2[n][m] << " ";
			} cout << endl;
		}
		cout << "***Addition***" << endl;

		for (int q = 0; q < r1; q++)
			for (int r = 0; r < c2; r++) {
				add[q][r] = arr1[q][r] + arr2[q][r];

			}
		for (int q = 0; q < r1; q++) {
			for (int r = 0; r < c2; r++)
			{
				cout << add[q][r] << " ";
			}cout << endl;
		}
		break;
	}
	case 2: {

		cout << "Enter value of matrixs order." << endl;

		do {
			cout << "Make sure You Enter Both Matrix same number of rows and same number of Columns" << endl;
			cout << "Enter 1st martrix Rows: ";
			cin >> r1;
			cout << "Enter 1st martrix columns: ";
			cin >> c1;
			cout << "Enter 2nd martrix Rows: ";
			cin >> r2;
			cout << "Enter 2nd martrix column: ";
			cin >> c2;
		} while (r1 != r2 && c1 != c2);


		cout << "Enter the value of 1st Matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << "Enter the value of arr1[" << i << "][" << j << "]= ";
				cin >> arr1[i][j];
			}
		}
		cout << endl << "Enter the value of 2nd Matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << "Enter the value of arr2[" << n << "][" << m << "]= ";
				cin >> arr2[n][m];
			}
		}
		cout << "The 1st matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << arr1[i][j] << " ";
			}cout << endl;
		}
		cout << "The 2nd matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << arr2[n][m] << " ";
			} cout << endl;
		}
		cout << "***Substraction***" << endl;

		for (int q = 0; q < r1; q++)
			for (int r = 0; r < c2; r++) {
				sub[q][r] = arr1[q][r] - arr2[q][r];

			}
		for (int q = 0; q < r1; q++) {
			for (int r = 0; r < c2; r++)
			{
				cout << sub[q][r] << " ";
			}cout << endl;
		}
		break;
	}
	case 3: {
		cout << "Enter value of matrixs order." << endl;
		do {
			cout << "Make sure Column of 1st matrix should be equal to the Rows of 2nd matrix" << endl;
			cout << "Enter 1st martrix Rows: ";
			cin >> r1;
			cout << "Enter 1st martrix columns: ";
			cin >> c1;
			cout << "Enter 2nd martrix Rows: ";
			cin >> r2;
			cout << "Enter 2nd martrix column: ";
			cin >> c2;
		} while (c1 != r2);
		cout << "Enter the value of 1st Matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << "Enter the value of arr1[" << i << "][" << j << "]= ";
				cin >> arr1[i][j];
			}
		}
		cout << endl << "Enter the value of 2nd Matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << "Enter the value of arr2[" << n << "][" << m << "]= ";
				cin >> arr2[n][m];
			}
		}
		cout << "The 1st matrix" << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << arr1[i][j] << " ";
			}cout << endl;
		}
		cout << "The 2nd matrix" << endl;
		for (int n = 0; n < r2; n++) {
			for (int m = 0; m < c2; m++) {
				cout << arr2[n][m] << " ";
			} cout << endl;
		}
		cout << "***Multiplication***" << endl;

		for (int q = 0; q < r1; q++)
			for (int r = 0; r < c2; r++) {

				multi[q][r] = 0;
				for (int k = 0; k < c1; k++)
				{
					multi[q][r] += arr1[q][k] * arr2[k][r];

				}
			}
		for (int q = 0; q < r1; q++) {
			for (int r = 0; r < c2; r++)
			{
				cout << multi[q][r] << " ";
			}cout << endl;
		}
		break;
	}

	case 4: {
		exit(0);
		break;
	}
	}
	return 0;
}
