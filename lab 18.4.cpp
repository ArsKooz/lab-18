#include <iostream>
using namespace std;
int main()
{
	int n, i,xmax,xmin;
	xmax = 0;
	xmin = 0;
	cout << "Vvedite znachenie N\n";
	cin >> n;
	int* a = new int[n];
	cout << "Vvedite vse znacheniya massiva\n";
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
		if (a[xmax] < a[i])
			xmax = i;
		if (a[xmin] > a[i])
			xmin = i;
	}
	if (xmax > xmin)
		for (i = xmin + 1;i < xmax;i++)
			a[i] = 0;
	else
		for (i = xmax + 1;i < xmin;i++)
			a[i] = 0;
	for (i = 0;i < n;i++)
		cout << a[i] << " ";
}