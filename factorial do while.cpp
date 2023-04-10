#include <iostream>
using namespace std;

int main()
{
	int num, fact = 1;
	do
	{
		cin >> num;
		for (int i = num; i > 0; i--)
		{
			fact = fact * i;
		}
		cout << fact << endl;

	} while (num < 1);

	return 0;
}