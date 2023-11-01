#include <iostream>
#include <iomanip>
#include <Windows.h> 
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
}
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0)
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;
	Create(a, n, Low, High, 0);
	cout << "Масив = [ "; Print(a, n, 0);cout << "  ]" << endl;
	cout << "Сума додатніх елементів  = " << Sum(a, n, 0) << endl;
	return 0;
}
