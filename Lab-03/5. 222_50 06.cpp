//poblem Number: 50A
//Povlem Name: Domino piling

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
 
    ll m, n, ans=0;
    cin >> m >> n;
    ans = (m*n)/2;
    cout << ans;
    return 0;
}