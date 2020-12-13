#include <bits/stdc++.h>
using namespace std;


void solve() {
	int N;
	cin>>N;
    if(N == 0){
			cout<<"1";
			return;
		}  
    double fact=0;
    for(int i=1;i<=N;i++){
        fact += log10(i);
   
    }
    
    
    fact = floor(fact);
    fact++;
    cout<<fact;
}

int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}

