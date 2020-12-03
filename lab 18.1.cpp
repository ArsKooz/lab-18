#include <iostream>

using namespace std;

int main() {
	int i,n,swap;
	cout << "Vvedite n\n";
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	cout << "Vvedite znacheniya massiva A\n";
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	cout << "Vvedite znacheniya massiva B\n";
	for (i = 0;i < n;i++)
	{
		cin >> b[i];
	}
	for (i = 0;i < n;i++)
	{
		swap = a[i];
		a[i] = b[i];
		b[i] = swap;
	}
	for (i = 0;i < n;i++)
		cout << a[i];
	cout << endl;
	for (i = 0;i < n;i++)
		cout << b[i];
}