#include <iostream>
using namespace std;
int main()
{
	int a;
	int count = 0;
	int yak = 0;
	int tmp;
	int i, j;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> tmp;
		for (j = 1; j <= tmp; j++)
		{
			if (tmp % j == 0)
				yak++;

		}
		if (yak == 2)
			count++;

		yak = 0;
	}
	cout << count;
}