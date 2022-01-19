#include <iostream>
using namespace std;
class rect
{
private:
	int x, y;
	int w, h;
public:
	rect(int x, int y, int w, int h)
	{
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	void out()
	{
		int dist1 = x > w - x ? w - x : x;
		int dist2 = y > h - y ? h - y : y;
		int result = dist1 > dist2 ? dist2 : dist1;

		cout << result;
	}
};

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	rect a = rect(x, y, w, h);
	a.out();
}