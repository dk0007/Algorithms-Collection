#include <bits/stdc++.h>
using namespace std;
 
#define _fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long
 
ll power(ll x, unsigned ll y, ll p) 
{ 
    ll res = 1;     
    x = x % p;
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
  
        y = y>>1;  
        x = (x*x) % p; 
    } 
    return res; 
} 
 
bool miillerTest(ll d, ll n) 
{ 
    ll a = 2 + rand() % (n - 4); 
    ll x = power(a, d, n); 
  
    if (x == 1  || x == n-1) 
       return true; 
  
    while (d != n-1) 
    { 
        x = (x * x) % n; 
        d *= 2; 
  
        if (x == 1)      
            return false; 
        if (x == n-1)    
            return true; 
    } 
 
    return false; 
} 
 
bool isPrime(ll n, ll k) 
{ 
    if (n <= 1 || n == 4)  
        return false; 
    if (n <= 3) 
        return true; 
  
    ll d = n - 1; 
    while (d % 2 == 0) 
        d /= 2; 
 
    for (ll i = 0; i < k; i++) 
         if (!miillerTest(d, n)) 
              return false; 
  
    return true; 
} 
 
void solve(){
    ll n;
    cin >> n;
    if(isPrime(n,2)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
 
int main(){
  _fast
  solve();
}

/*

Testcase-1
3
Yes

Testcase-2
9
No

*/