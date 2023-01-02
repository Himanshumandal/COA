#include <bits/stdc++.h>
using namespace std;

// To count number of set bits
int count(int n)
{
	int co = 0;
	while (n) {
		n &= (n - 1);
		co++;
	}
	return co;
}

// To calculate sum of numbers
int tSum(int n)
{
	int sum = 0;

	// To count sum of number
	// whose 2 bit are set
	for (int i = 1; i <= n; i++)
		if (count(i) == 2)
			sum += i;

	return sum;
}

// Driver program to test above function
int main()
{
	int n = 10;
	cout << tSum(n);
	return 0;
}
