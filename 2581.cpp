#include <iostream>
using namespace std;
class math
{
public:
	int a, b;
	math(int a, int b){
		this->a = a;
		this->b = b;
	}
	int isdecimal(int in)
	{
		if (in == 1)
			return 0;
		for (int i = 2; i < in; i++)
			if (in % i == 0)
				return 0;
		
		return 1;
	}
	void alldecimal()
	{
		int max = 0;
		int min = 0;
		for (int i = a; i <= b; i++)
		{
			if (isdecimal(i) == 1)
			{
				if (min == 0)
					min = i;
				max += i;
			}
		}
		if (min == 0)
			cout << "-1";
		else
			cout << max << endl << min;

	}
	

};
int main()
{
	
	int a, b;
	cin >> a;
	cin >> b;

	math c = math(a, b);

	c.alldecimal();
	
}