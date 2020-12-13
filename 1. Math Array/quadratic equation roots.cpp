#include <bits/stdc++.h>
using namespace std;

    vector<int> quadraticRoots(int a, int b, int c) {
        int d = (b*b) - (4*a*c);
        if(d>=0){
        vector<int> ans(2);
        ans[0] = floor((-b + sqrt(d)) / (2*a));
        ans[1] = floor((-b - sqrt(d)) / (2*a));
        sort(ans.begin(), ans.end(), greater<int>());
        return ans; 
        }
        else
        {
            vector<int> ans(1);
            ans[0] = -1;
            return ans;
        }

    }

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	vector<int> results(2);
	results = quadraticRoots(a,b,c);
	
	
        
       cout<<results[0]<<" "<<results[1];
}
