#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
ll mod=998244353;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,(a%b));
}
int isvalid(int xx,int kk)
{
    if(xx>=0 && xx<kk)
    {
        return true;
    }
    return false;
}
int n,m;
string s[1000+1];
bool col[1000][1000];
void DFS(int x,int y)
{
    col[x][y]=1;
       for(int i=0;i<4;i++)
       {
           if(isvalid(x+dx[i],n)==true && isvalid(y+dy[i],m)==true)
           {
               if(s[x+dx[i]][y+dy[i]]=='.' && col[x+dx[i]][y+dy[i]]==0)
               {
                   //col[x+dx[i]][y+dy[i]]=1;
                     DFS(x+dx[i],y+dy[i]);
               }
           }
       }
 
}
int main()
{
    Faster;

    
         cin>>n>>m;int cnt=0;
         for(int i=0;i<n;i++) cin>>s[i];
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(s[i][j]=='.' && col[i][j]==0)
                 {
                     cnt++;
                        DFS(i,j);
                 }
             }
         }
         cout<<cnt<<endl;
 
    
    return 0;
}
 
//joyed
