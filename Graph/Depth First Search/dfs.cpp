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

    vector<int>v[1000];
    int visited[1000];

    void bfs(int n)
    {
        visited[n]=1;
        cout<<"->"<<n;
        vector<int>:: iterator it;
        for(it=v[n].begin();it!=v[n].end();it++)
        {
            if(!visited[*it])
            {
                bfs(*it);
            }
        }
    }



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //here is my code start...

    int n,m;
    cin>>n>>m;


    int x,y;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    bfs(4);

/*
input:

6 7
1 2
1 3
2 4
2 5
2 6
2 7
7 8

Output:
->4->2->1->3->5->6->7->8

*/

    return 0;
}
