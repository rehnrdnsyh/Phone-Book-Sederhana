#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	const int SIZE = 50;	// ukuaran max
	int count = 0;			// jumlah data tersimpan
	string phones[SIZE];
	string names[SIZE];
	string addresses[SIZE];

	// struktur menu
	string menu;
	while (true)
	{
		system("cls");
		cout << "Phonebook\n";
		cout << "[1] Insert\n";
		cout << "[2] Show\n";
		cout << "[3] Exit\n";
		cout << "Select : ";
		getline(cin, menu);
		switch (menu[0])
		{
		case '1':
			while (true)
			{
				string ip, in, ia;
				system("cls");

				cout << "Phone: ";
				getline(cin, ip);
				if (ip == "")
					break;

				cout << "Name: ";
				getline(cin, in);
				cout << "Addr.: ";
				getline(cin, ia);

				phones[count] = ip;
				names[count] = in;
				addresses[count] = ia;

				++count;
			}
			break;
		case '2':
			//show
			system("cls");
			cout << "-----------------------------------------------------------------\n";
			cout << setw(14) << "PHONE NUM" << setw(15) << "NAME" << setw(21) << "ADRESS";
			cout << "\n---------------------------------------------------------------\n";

			for (int i = 0; i < count; ++i)
			{
				cout << setw(14) << phones[i];
				cout << setw(15) << names[i];
				cout << setw(21) << addresses[i];
				cout << endl;
			}
			cout << "----------------------------------------------------------------\n";
			system("pause");
			break;
		case '3':
			return 0;
		}

	}

	system("pause");
	return 0;
}

