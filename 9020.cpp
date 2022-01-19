#include <iostream>
using namespace std;
class math
{
private:
	int arr[10001];
	int a;
public:
	math(int a)
	{
		this->a = a;
		for (int i = 0; i < 10001; i++)
		{
			arr[i] = i;
		}
		arr[1] = 0; //1은 소수가 아님으로
	}
	void print()
	{
		int count = 0;
		for (int i = 2; i <= 1000; i++)
		{
			if (arr[i] == 0) continue;
			for (int j = i*2; j <= 10000; j+=i)
			{
				arr[j] = 0;
			}
		}

		for (int i = a / 2; i >= 2; i--)
		{
			if (arr[i] + arr[a - i] == a)
			{
				cout << arr[i] << " " << arr[a - i] << "\n";
				break;
			}
		}
	}
};
int main()
{
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{ 
		cin >> b;
		math c = math(b);

		c.print();
	}
	

	
}