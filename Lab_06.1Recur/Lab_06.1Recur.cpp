#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* p, const int size, const int Min, const int Max, int i)
{
	p[i] = Min + rand() % (Max - Min + 1);
	if (i < size - 1)
		Create(p, size, Min, Max, i + 1);

}
void Vyvid(int* p, const int size, int i)
{
	cout << p[i] << " ";
	if (i < size - 1)

		Vyvid(p, size, i + 1);
	else

		return;
}

void Create1(int* p, const int size, int i)
{
	if (i <= size - 1)
	{

		if (p[i] % 2 != 0 && i % 13 != 0)
		{
			cout << p[i] << " ";
			Create1(p, size, i + 1);
		}
		else
			Create1(p, size, i + 1);
	}
	else return;
}

int Count(int* p, const int size, int k, int i)
{
	if (i < size)
	{
		if (p[i] % 2 != 0 && i % 13 != 0)
			return Count(p, size, ++k, ++i);

		else return Count(p, size, k, ++i);
	}

	else return k;
}

int Sum(int* p, const int size, int i, int& suma)
{

	if (p[i] % 2 != 0 && i % 13 != 0)
		suma += p[i];
	if (i < size)
		return Sum(p, size, i + 1, suma);
	else
		return suma;

}

void zamina(int* p, const int size, int i)
{
	if (i < size)
	{
		if (p[i] % 2 != 0 && i % 13 != 0)
		{
			p[i] = 0;
		}

		zamina(p, size, ++i);
	}
	else
		return;

}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int p[n];
	int Min = 15;
	int Max = 94;
	int suma = 0;

	Create(p, n, Min, Max, 0);
	cout << endl;
	Vyvid(p, n, 0);
	cout << endl;
	Create1(p, n, 0);
	cout << endl;

	int k = Count(p, n, 0, 0);
	cout << "Kilkist = " << k << endl;
	cout << "S = " << Sum(p, n, 0, suma) << endl;

	zamina(p, n, 0);
	Vyvid(p, n, 0);

}
