#include <iostream>
using namespace std;
class math
{
private:
	int a;
public:
	math(int in)
	{
		this->a = in;
	}
	void print()
	{
		int now = a;
		int i = 2;
		while (now >= 2)
		{
			if (now % i == 0)
			{
				cout << i << endl;
				now /= i;
			}
			else
				i++;
		}
	} 
	

};
int main()
{
	
	int a;
	cin >> a;

	math c = math(a);

	c.print();
	
}