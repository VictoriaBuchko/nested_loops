#include<iostream>
using namespace std;
int main()
{
	int userChoice, i, j;
	const int size1 = 9;
	const int size2 = 11;
	do {

		cout << "Your choice:\n";
		cout << "1 - a\n";
		cout << "2 - b\n";
		cout << "3 - c\n";
		cout << "4 - d\n";
		cout << "5 - e\n";
		cout << "6 - f\n";
		cout << "7 - g\n";
		cout << "8 - h\n";
		cout << "9 - i\n";
		cout << "10 - j\n";
		cout << "11 - quit\n";
		cin >> userChoice;
		switch (userChoice) {
		case 1:
		{
			cout << "Triangle version-a\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (j >= i)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 2:
		{
			cout << "Triangle version-b\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (j <= i)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}

				}
				cout << "\n";
			}
			break;
		}
		case 3:
		{
			cout << "Triangle version-c\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (j >= i && i + j <= size1 - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}

				}
				cout << "\n";
			}
			break;
		}
		case 4:
		{
			cout << "Triangle version-d\n";
			for (int i = 0; i < size1; i++)
			{
				for (int j = 0; j < size2; j++)
				{
					if (j <= i && i + j >= size1 - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 5:
		{
			cout << "Triangle version-e\n";
			for (int i = 0; i < size1; i++)
			{
				for (int j = 0; j < size1; j++)
				{
					if ((j <= i && i + j >= size1 - 1) || (j >= i && i + j <= size1 - 1))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 6:
		{
			cout << "Triangle version-f\n";
			for (int i = 0; i < size2; i++)
			{
				for (int j = 0; j < size2; j++)
				{
					if ((j <= i && i + j <= size2 - 1) || (j >= i && i + j >= size2 - 1))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 7:
		{
			cout << "Triangle version-g\n";
			for (int i = 0; i < size2; i++)
			{
				for (int j = 0; j < size2; j++)
				{
					if ((j <= i && i + j <= size2 - 1))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;

		}
		case 8:
		{
			cout << "Triangle version-h\n";
			for (int i = 0; i < size2; i++)
			{
				for (int j = 0; j < size2; j++)
				{
					if ((j >= i && i + j >= size2 - 1))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 9:
		{
			cout << "Triangle version-i\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (i + j <= size1 - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}

				}
				cout << "\n";
			}
			break;
		}
		case 10:
		{
			cout << "Triangle version-j\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (i + j >= size1 - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}

				}
				cout << "\n";
			}
			break;
		}
		case 11:
		{
			cout << "See you!";
			break;
		}
		default:
			cout << "Wrong menu item!";
		}
	} while (userChoice != 11);
	return 0;
}
