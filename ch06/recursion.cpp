#include <iostream>
#include <chrono>

using namespace std;

int sum_recursive(int n)
{
    if( n == 1 )
        return (1);
    else
        return (n + sum_recursive(n-1));
}

int sum_iterative(int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += i;

    return (sum);
}

int main()
{
  	{
		auto start = chrono::system_clock::now();

		volatile int s = 0;
		for (int n = 1; n <= 20000; n++)
			s = sum_recursive(n);

		auto end = chrono::system_clock::now();
		auto msec = chrono::duration<double>(end - start).count() * 1000;
		cout << "sum_recursive(): " << msec << "ms" << endl;
	}

	{
		auto start = chrono::system_clock::now();

		volatile int s = 0;
		for (int n = 1; n <= 20000; n++)
			s = sum_iterative(n);

		auto end = chrono::system_clock::now();
		auto msec = chrono::duration<double>(end - start).count() * 1000;
		cout << "sum_iterative(): " << msec << "ms" << endl;
	}
}