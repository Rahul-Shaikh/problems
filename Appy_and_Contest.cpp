#include <iostream>

typedef long long ll;

using namespace std;

ll hcf(ll a, ll b)
{
	if (b == 0) return a;
	else return hcf(b, a%b);
}

ll lcm(ll a, ll b)
{
	return (a*b)/hcf(a, b);
}

int main(void)
{
	int T;
	ll A, B, K, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%lld %lld %lld %lld",&N, &A, &B, &K);
		ll res = (N/A) + (N/B) - 2*(N/lcm(A,B));
		if (res >= K) printf("Win\n");
        else printf("Lose\n");
	}
	return 0;
}