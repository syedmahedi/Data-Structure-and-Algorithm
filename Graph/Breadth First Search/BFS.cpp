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
    template<typename T>

    class graph{
        map<int,list<int>>l;
    public:
        void addedge(int u,int v)
        {
            l[u].pb(v);
            l[v].pb(u);
        }
        void bfs(int srt)
        {
            queue<int>q;
            q.push(srt);
            map<int,int> visited;

            visited[srt]=true;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                cout<<"->"<<node;
                for(auto var:l[node])
                {
                    if(!visited[var])
                    {
                        q.push(var);
                        visited[var]=true;
                    }
                }
            }

        }
    };



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //here is my code start...
    int n;
    cin>>n;
    cout<<"Enter the vertex want to start for bfs: "<<endl;
    graph<int>g;
    g.addedge(0,1);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(3,2);
    g.addedge(3,4);
    g.addedge(4,5);



    g.bfs(n);


    return 0;
}
