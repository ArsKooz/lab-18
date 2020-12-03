#include <iostream>

using namespace std;

int main()
{
	int n, i, nech;
	nech = 0;
	cout << "Vvedite N\n";
	cin >> n;
	int* a = new int[n];
	cout << "Vvedite massive A\n";
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 1)
			nech = a[i];
	}
	for (i = 0;i < n;i++)
	{
		if (a[i] % 2 == 1)
		{
			a[i] += nech;
		}
		cout << a[i]<<" ";
	}
}