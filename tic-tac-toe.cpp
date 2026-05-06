#include <iostream>
#include <string>
using namespace std;

int main() {
	char board[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};
	
	const char playerX = 'X';
	const char playerO = 'O';
	char currentPlayer = playerX;
	int r = -1;
	int c = -1;
	
	for (int i = 0; i < 9; i++) {
		cout << "   |   |   " << endl;
		cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
		cout << "___|___|___" << endl;
		cout << "   |   |   " << endl;
		cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
		cout << "___|___|___" << endl;
		cout << "   |   |   " << endl;
		cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
		cout << "   |   |   " << endl;
		
		cout << "Nguoi choi hien tai la: " << currentPlayer << endl;
		while (true) {
			cout << "Nhap hang va cot tu 0 - 2: ";
			cin >> r >> c;
			if (r < 0 || r > 2 || c < 0 || c > 2)
				cout << "O khong hop le, vui long thu lai! " << endl;
			else if (board[r][c] != ' ')
				cout << "O nay da duoc chon, vui long thu lai!" << endl;
			else
				break;
			r = -1;
			c = -1;
			//sua loi neu nguoi dung nhap gia tri khong hop le (kieu chuoi)
//			cin.clear();
//			cin.ignore(1000, '\n');
		}

		board[r][c] = currentPlayer;
		currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
		
	}
	return 0;
}
