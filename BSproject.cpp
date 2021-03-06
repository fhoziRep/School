#include <iostream>
#include <algorithm>

using namespace std;

void shuffleAndShow(int values[49]);

int main()
{
	int values[49];
	for (int i = 0; i < 49; i++)
	{
		values[i] = i + 1;
	}
	bool exec = true;
	shuffleAndShow(values);
	while (exec) {
		cout << "Neu: <n>, Beenden: <e>" << endl;
		char inp = 'c';
		cin >> inp;
		switch (inp) {
		case 'n': cout << "Neue Zahlen" << endl;
			shuffleAndShow(values);
			break;
		case 'e': cout << "Beenden" << endl;
			exec = false;
			break;
		default: cout << "Falsche Eingabe" << endl;
			break;
		}
	}
}

void shuffleAndShow(int values[49]) {
	random_shuffle(&values[0], &values[48]);
	sort(&values[0], &values[6]);
	for (int i = 0; i < 6; i++)
	{
		cout << values[i] <<" ";
	}
	cout << endl;
}
