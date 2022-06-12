#include <bits/stdc++.h>

using namespace std;

typedef std::pair<int, int> PII;
typedef std::pair<long long, long long> PLL;
typedef std::pair<long long, int> PLI;
typedef std::pair<double, int> PDI;
typedef std::pair<double,long long> PDL;
typedef std::pair<double, double> PDD;
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<string> VS;
typedef __int128 i128;
#define pb push_back
#define mkp std::make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end() 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fll
#define IT iterator
#define SZ(x) ((int)(x).size())
#define debug(x) std::cout << #x << " = " << x << "\n" ; 
#define PASS printf("Passing [%s] in LINE %d \n",__FUNCTION__,__LINE__);
#define rep(i, a, b) for(int i = (a); i <= (b); ++i)
#define per(i, a, b) for(int i = (a); i >= (b); --i)
const ll M = 1e9 + 7;
ll Mpow(ll b, ll e, ll md = M) { ll a = 1; b %= md; assert(b >= 0); for(;e;e>>=1,b=b*b%md) if(e&1) a=a*b%md; return a; }
ll gcd(ll a, ll b) {return !b ? a : gcd(b, a%b);}
mt19937 mrand(random_device{}());
int rnd(int x) {return mrand() % x;}
// head
