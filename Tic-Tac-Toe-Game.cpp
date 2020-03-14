#include<iostream>
using namespace std;
int win(char arr[9])
{
	if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
	{
		cout << "Player 1 wins.";
		return (1);
	}
	else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
	{
		cout << "Player 2 wins.";
		return (2);
	}
	else
	{
		return(0);
	}
}
void display(char arr[9], int o, int p)
{
	{
		cout << "\t" << "\t" << "Tic Tac Toe Game";
		cout << "\n";
		cout << endl;
		cout << "\t" << "     " << "Player1" << " ( " << o << " ) " << "vs" << "  " << "Player 2" << " ( " << p << " )";
		cout << endl;
		cout << "\nPlayer 1 = 'X', Player 2 = 'O'";
		cout << endl;
		cout << "    " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "  " << endl;
		cout << "  " << "-----------------" << endl;
		cout << "    " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "  " << endl;
		cout << "  " << "-----------------" << endl;
		cout << "    " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "  " << endl;
	}
}
int main()
{
	int n, o = 0, p = 0;
	char op;
	do
	{
		system("cls");
		char arr[9] = { '1','2','3','4','5','6','7','8','9' };
		int b, c = 0, z = 3;
		for (int i = 1; i <= 2; i++)
		{
			display(a, o, p);
			cout << "\nPlayer " << i << " Turn : \n";
			cout << "Enter cell no. ";
			cin >> b;
			arr[b - 1] = 'X';

			if (i % 2 == 0)
			{
				arr[b - 1] = 'O';
				i = 0;
			}
			c = win(a);
			if (c == 2 || c == 1 || z == 11)
			{
				if (c == 2)
				{
					p++;
				}
				else if (c == 1)
				{
					o++;
				}
				if (z == 11)
				{
					cout << "Game Drawn.";
				}
				break;
			}
			else
			{
				system("cls");
			}
			z++;
		}
		cout << "\nDo you want to play more ? Y/N ";
		cin >> op;
	} while (op == 'Y' || op == 'y');
	if (o > p)
	{
		cout << "\nOver All Result is :\n";
		cout << " Player 1 wins with " << o << " : " << p << "\n\n";
	}
	else if (o < p)
	{
		cout << "\nOver All Result is :\n";
		cout << " Player 2 wins with " << p << " : " << o << "\n\n";
	}
	else
	{
		cout << "\n\tOver All Result is :\n";
		cout << " No one wins. Match Drawn with " << o << " : " << p << "\n\n";
	}
}