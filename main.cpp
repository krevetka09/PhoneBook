#include <iostream>
#include <cstdio>
#include <cstdio>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	int i; char str[80];
	char numbers[8][80] =
	{
	"���", "555-223",
	"����", "675-123",
	"����", "552-931",
	"������", "877-091"
	};
	cout << "������� ���: ";
	cin >> str;
	//gets_s(str);
	for (i = 0; i < 4; i += 2) 
		if (!strcmp(str, numbers[i]))
		{
			cout << "������� " << numbers[i + 1] << "\n"; break;
		}
	if (i == 8) cout << "�� �������.\n";

	return 0;
}