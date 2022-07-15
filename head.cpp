#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef vector<int> VI;

#define vt vector
#define ar array
#define SZ(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,a,b) for (int i=(a); i<(b); i++)
#define per(i,a,b) for (int i=(b)-1; i>=(a); i--)
#define FOR(i,a) rep(i,1,(a)+1) 
#define ROL(i,a) per(i,1,(a)+1)
#define EACH(x, a) for (auto &x : (a))
#define pb push_back
#define ACCU accumulate
#define mp std::make_pair
#define fi first
#define se second
#define fileio(s) freopen(s".in", "r", stdin);freopen(s".out","w",stdout);


template<class T> bool umin(T& a, const T& b) { return b<a?a=b, 1:0;}
template<class T> bool umax(T& a, const T& b) { return a<b?a=b, 1:0;} 

const int inf = 0x7ffffff;
const int d4i[] = {0,1,0,-1}, d4j[] = {1,0,-1,0};
const int d8i[] = {-1,-1,-1,0,0,1,1,1}, d8j[] = {-1,0,1,-1,1,-1,0,1};
const ll infll = 9223372036854775807;
const ll M = 1e9 + 7;
ll powmod(ll b, ll e, ll mod=M) {ll a=1; assert(e>=0); for (;e;e>>=1, b=b*b%mod) if(e&1) {a=a*b%mod;} return a;}
mt19937 mt_rng(random_device{}());
int rnd(int x) {return mt_rng() % x;}
// head
