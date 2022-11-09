#include "iostream"

using namespace std;

int function();

int main()
{
	for(int i = 0; i < 10; i++)
	{
		cout << function() << endl;
	}
	return 0;
}

int function()
{
	static int s = 0;
	int t = 0;
	s++;
	t++;
	//return s;
	return t;
}
