#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
 

    long long getSmallestDivNum(long long n){

    long long ans = 1; 
  
  
    for (long long i = 1; i <= n; i++) 
        ans = (((i * ans)) / 
                (gcd(i, ans))); 
  
    return ans; 
    
    }


int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int n;
    cin >> n;
    cout<<getSmallestDivNum(n);
    return 0;
}

