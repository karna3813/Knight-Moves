#include <bits/stdc++.h>
using namespace std;
#define test  \
    long long t;    \
    cin >> t; \
    while (t--)
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

vector<pair<int,int>>solve(int x,int y){
if(x<0 or y<0 or x>=8 or y>=8) return {};
   vector<int> dx = {2,2,-2,-2,1,1,-1,-1};
   vector<int> dy = {1,-1,1,-1,2,-2,2,-2};
    vector<pair<int,int>>ans;
   for(auto i=0;i<8;i++){
         int nx = x+dx[i];
         int ny = y+dy[i];
         if(nx<0 or ny<0 or nx>=8 or ny>=8) continue;
        ans.push_back({nx,ny});
   }
   return ans;
}

int main()
{
fast
int x,y;
cin>>x>>y;
vector<pair<int,int>>ans=solve(x,y);
for(auto i:ans) cout<<i.first<<" "<<i.second<<endl;
}
