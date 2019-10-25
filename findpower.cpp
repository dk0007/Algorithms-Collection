#include <bits/stdc++.h>
using namespace std;

#define _fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long

ll findpow(ll a, ll b){
    ll res = 1;
    while(a>0){
        if(b%2==1){
            res = res*a;
        a = a*a;
        b = b/2;
        }
    }
    return res;
}

void solve(){
   ll a,b;
   cin >> a >> b;
   ll ans = findpow(a,b);
   cout << ans;
}

int main(){
  _fast
  solve();
}

/*
Input
2 5
Output 
32
*/