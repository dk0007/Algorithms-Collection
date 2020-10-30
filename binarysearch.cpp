#include <bits/stdc++.h>
using namespace std;

#define _fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ll long long

ll binarysearch(vector<ll> a, ll low, ll high, ll x){
    ll mid = (low+high)/2;
    while(low<=high){
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}

void solve(){
    ll n,k,x;
    cin >> n >> k; // find if k is present in given array
    vector<ll> arr; // arr starts from 0th position
    for(ll i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    // given: array is already sorted
    ll findindex = binarysearch(arr,0,n-1,k);
    cout << findindex; // if not present then it return -1
}

int main(){
  _fast
  solve();	
}

/* 
Input
5 6
1 2 2 4 5
Output
-1

Input 
5 2
1 2 3 5 6
Output 
1
*/
