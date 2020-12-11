#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define PI 3.1415926535897932384626
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
typedef vector<int>		vi;
typedef vector<ll>		vl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int mpow(int base, int exp);

//======================================================================
string findSum(string X,string Y){
	    reverse(X.begin(),X.end());
	    reverse(Y.begin(),Y.end());
	    int len_x = X.length();
	    int len_y = Y.length();
	    int i=0,j=0;
	    int carry = 0;
	    string ans = "";
	    while(i<len_x && j<len_y){
	        ans += to_string(((( X[i]-'0') + (Y[j] - '0')) + (carry))%10);
	        carry  = ((( X[i]-'0') + (Y[j] - '0')) + (carry))/10;
	        cout<<"ans = "<<ans<<"\n";
	        cout<<"carry = "<<carry<<'\n';
	        i++;j++;
	    }
	    while(i<len_x){
	        ans +=  to_string((( X[i]-'0') + (carry))%10);
	        carry  = (( X[i]-'0') + (carry))/10;
			cout<<"ans = "<<ans<<"\n";
	        cout<<"carry = "<<carry<<'\n';
	        //deb((( X[i]-'0') + (carry))/10);
	        i++;
	    }
	    while(j<len_y){
	        ans +=  to_string(((Y[j] - '0') + (carry))%10);
	        carry  = (( Y[j]-'0') + (carry))/10;
	        cout<<"ans = "<<ans<<"\n";
	        cout<<"carry = "<<carry<<'\n';
	        //deb((( Y[j]-'0') + (carry))/10);	        
	        j++;
	    }
	    if(carry >0)
	    ans += to_string(carry);
	    reverse(ans.begin(),ans.end());
	    ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
	    return ans;
	   //return "5";
	    
	}
	
void solve() {
string x,y;
cin>>x>>y;
cout<<findSum(x,y);
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
//	7
//	712594
//======================================================================

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
