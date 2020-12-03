#include <iostream>

using namespace std;

int main()
{
	int j, n, i, s;
	cout << "Vvedite n\n";
	cin >> n;
	int* a = new int[n];
	cout << "Vvedite massive A\n";
	for (i = 0;i < n;i++)
		cin >> a[i];
	int* b = new int[n];
	for (i = 0;i < n;i++)
	{
		s = 0;
		for (j = 0;j <= i;j++)
		{
			s += a[j];
		}
		b[i] = s / (i+1);
	}
	for (i = 0;i < n;i++)
		cout << b[i];
}