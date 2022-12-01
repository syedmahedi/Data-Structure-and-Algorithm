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



    graph_Imp(vector<int>v[],int a,int b)
    {
        v[a].pb(b);
        v[b].pb(a);
    }


    graph_print(vector<int>v[],int n)
    {
        for(ll i=0;i<n;i++)
        {
            for(auto x:v[i])
            {
                cout<<"->"<<x;
            }
            cout<<endl;
        }
    }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //here is my code start...

     cout<<"Enter number of vertex in graph:"<<endl;
     int n;
     cin>>n;
     vector<int>v[n];

     graph_Imp(v,0,1);
     graph_Imp(v,0,4);
     graph_Imp(v,1,2);
     graph_Imp(v,1,3);
     graph_Imp(v,1,4);
     graph_Imp(v,2,3);
     graph_Imp(v,3,4);
     graph_print(v,n);



    return 0;
}
