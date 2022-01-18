#include <iostream>
using namespace std;
class math
{
private:
	int arr[1000001];
	int a, b;
public:
	math(int a, int b)
	{
		this->a = a;
		this->b = b;
		for (int i = 0; i < 1000001; i++)
		{
			arr[i] = i;
		}
		arr[1] = 0; //1은 소수가 아님으로
	}
	void print()
	{
		for (int i = 2; i <= b; i++)
		{
			if (arr[i] == 0) continue;
			for (int j = i*2; j <= b; j+=i)
			{
				arr[j] = 0;
			}
		}
		for (int i = a; i <= b; i++)
		{
			if (arr[i] != 0)
				cout << arr[i] << "\n";
		}
	}
};
int main()
{
	int a, b;
	cin >> a >> b;
	
	math c = math(a, b);

	c.print();
	
}