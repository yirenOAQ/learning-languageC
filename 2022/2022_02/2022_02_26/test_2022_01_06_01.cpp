#include <iostream>
#include <string>
using namespace std;
bool larger(int x, int y);

int main()
{
	int x, y;
	bool t;
	cout << "please input x, y" << endl;
	cin >> x >> y;
	t = larger(x, y);
	cout << t << " " << boolalpha << t << " " << noboolaplha << t << endl;
	if (t)
		cout << x << "-" << y << "=" << x - y << endl;
	else
		cout << x << "+" << y << "=" << x + y << endl;
	return 0;
}

bool larger(int x, int y)
{
	if (x > y)
		return true;
	return false;
}