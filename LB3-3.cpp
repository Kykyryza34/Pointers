#include <iostream>
using namespace std;
int main()
{

	string YesNo;
	setlocale(LC_ALL, "Russian");
	const int ROW = 4;
	const int COLS = 4;

	int arr[ROW][COLS];
	int SM = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}


	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < 4; i++) {
		SM += arr[0][i];

		SM += arr[2][i];
		i++;
	}
	for (int i = 1; i < 4; i++) {
		SM += arr[1][i];

		SM += arr[3][i];
		i++;
	}

	cout << SM;



	cin.get();
}