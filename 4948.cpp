#include <iostream>
using namespace std;
class math
{
private:
	int arr[2*123456+1];
	int a;
public:
	math(int a)
	{
		this->a = a;
		for (int i = 0; i < 123456*2+1; i++)
		{
			arr[i] = i;
		}
		arr[1] = 0; //1Àº ¼Ò¼ö°¡ ¾Æ´ÔÀ¸·Î
	}
	void print()
	{
		int count = 0;
		for (int i = 2; i <= a*2; i++)
		{
			if (arr[i] == 0) continue;
			for (int j = i*2; j <= a*2; j+=i)
			{
				arr[j] = 0;
			}
		}
		for (int i = a+1; i <= a*2; i++)
		{
			if (arr[i] != 0)
				count++;
		}
		cout << count << "\n";
	}
};
int main()
{
	int a;
	cin >> a;
	while (a != 0)
	{
		math c = math(a);
		c.print();

		cin >> a;
	}
	
}
