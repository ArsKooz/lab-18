#include <iostream>
using namespace std;

int main()
{
	int n, i, sw;
	cout << "Vvedite znachenie N\n";
	cin >> n;
	cout << "Vvedite znacheniya massiva\n";
	int* a = new int[n];
	for (i = 0;i < n;i++)
		cin >> a[i];
	i = 0;
	while (a[i] > a[i+1] && i+1<n)
	{
		sw = a[i];
		a[i] = a[i+1];
		a[i+1] = sw;
		i++;
	}
	for (i = 0;i < n;i++)
		cout << a[i]<<" ";
}