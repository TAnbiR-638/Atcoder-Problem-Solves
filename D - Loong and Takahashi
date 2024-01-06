Problem Link: https://atcoder.jp/contests/abc335/tasks/abc335_d

Code:

  
#include <bits/stdc++.h>
using namespace std;
#define   ll    long long int

ll n,i,j,k,p,hi,lo;
string s,s2="";

void solve(){
    
    cin>>n;
    
    ll a[n+5][n+5];
    
    i=1,j=1,k=1,p=1,hi=n,lo=1;
    
   while(p<=n*n-1){
           
            while(j<=hi){
                a[i][j]=p; 
                if(j==hi){break;}
                j++; p++;
            } 
          
            while(i<=hi){
                a[i][j]=p;
                if(i==hi){break;}
                i++; p++; 
            }
            hi--;
            
            
            while(j>=lo){
                a[i][j]=p;
                if(j==lo){break;}
                j--; p++;
            } 
          
            while(i>=lo+1){
                a[i][j]=p;
                if(i==lo+1){break;}
                i--; p++; 
            }
    
            lo++;
    
   }
    
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            
            if(i==j && i==((n/2)+1)){
                cout<<"T"<<" ";
            }
            else{ cout<<a[i][j]<<" "; }
        }
        
        cout<<endl;
    }
    
    cout<<endl;
    
    
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(0);
    
    ll t=1;

    while (t--){
        solve();
    }

    return 0;
}
