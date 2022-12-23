#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define   ll         long long int
#define   ull        unsigned long long int
#define   pb         push_back
#define   endl       "\n"
#define   mp         make_pair
#define   yes        cout<<"YES\n"
#define   no         cout<<"NO\n"
#define   tst        int t;cin>>t;
#define   all(x)     x.begin(),x.end()
#define   Read(x)    freopen(x,"r",stdin)
#define   Write(x)   freopen (x,"w",stdout
#define   erase_duplicates(x)     x.erase(unique(all(x)),x.end());
#define MAXL (ll)(1e18)
//check
bool   isPrime(ll n) {
	if (n <= 1)return false;
	if (n <= 3)return true; if (n % 2 == 0 | n % 3 == 0)return false;
	for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;
}

//mathmatics funtion
ll     gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll     lcm(ll a, ll b) {return (a / gcd(a, b) * b);}

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }



int main()
{


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// here is my code start...
	cout << "Enter number of vertex and edge: ";
	int n, m;
	cin >> n >> m;

	vector<vector<pair<int, int>>>graph(n + 1);
	vector<int>dis(n + 1, 1000);

	for (int i = 0; i < m; ++i)
	{
		int x, y, z;
		cin >> x >> y >> z;
		graph[x].pb({y, z});
		graph[y].pb({x, z});
	}
	int source;
	cout << "Enter the source node: ";
	cin >> source;
	dis[source] = 0;
	set<pair<int, int>>s;
	s.insert({0, source});

	while (!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		for (auto it : graph[x.second])
		{
			if (dis[it.first] > dis[it.second] + it.second)
			{
				s.erase({dis[it.first], it.first});
				dis[it.first] = dis[it.second] + it.second;
				s.insert({dis[it.first], it.first});

			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << dis[i] << " ";
	}
	cout << endl;





}
