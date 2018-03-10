#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <iostream>
using namespace std;

int frequency_of_primes(int n) {
	int i, j;
	int freq = n - 1;
	for (i = 2; i <= n; ++i) for (j = pow(i, 0.5); j>1; --j) if (i%j == 0) { --freq; break; }
	return freq;
}

int main()
{
	clock_t t;
	int f;
	t = clock();
	cout<<"Calculating...\n";
	f = frequency_of_primes(99999);
	cout<<"The number of primes lower than 100,000 is: " << f << "\n";
	t = clock() - t;
	float secs = (t / double(CLOCKS_PER_SEC));
	cout << "It took me " << t << " clicks (" << secs << " seconds).\n";
	system("pause");
}