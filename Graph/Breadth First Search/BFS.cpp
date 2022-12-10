#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define   ll         long long int
#define   ull        unsigned long long int
#define   pd         push_back
#define   endl       "\n"
#define   mp         make_pair
#define   yes        cout<<"YES\n"
#define   no         cout<<"NO\n"
#define   tst        int t;cin>>t;
#define   all(x)     x.begin(),x.end()
#define   Read(x)    freopen(x,"r",stdin)
#define   Write(x)   freopen (x,"w",stdout
#define   erase_duplicates(x)     x.erase(unique(all(x)),x.end());



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> adj[100];
    int vis[100] = {0};


    int n, m;
    // cout << "Enter number of vertex & edge: " << endl;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int>q;
    q.push(1);
    vis[1] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;

        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                q.push(*it);
                vis[*it] = 1;
            }
        }

    }


    return 0;
}
