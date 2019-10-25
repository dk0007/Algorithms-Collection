#include <bits/stdc++.h>

using namespace std;

long long pow(int a, int b)
{
	long long ret = 1LL;
	while (b > 0)
	{
		if (b & 1)
		{
			ret *= a;
		}
		a *= a;
		b >>= 1;
	}
	return ret;
}

int main()
{
	int a=5,b=3; printf("%d**%d = %lld\n",a,b,pow(a,b));
	a=37,b=7; printf("%d**%d = %lld\n",a,b,pow(a,b));
	a=37,b=0; printf("%d**%d = %lld\n",a,b,pow(a,b));
  // expected output
	// 5**3 = 125
	// 37**7 = 94931877133
	// 37**0 = 1
	return 0;
}
