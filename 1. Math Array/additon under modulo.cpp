//Given two numbers a and b,
//find the sum of a and b.
//Since the sum can be very large,
 //find the sum modulo 10^9+7.


#include <bits/stdc++.h>
using namespace std;

int main(){

const int mod = 1000000007;

long long a,b;
cin>>a>>b;

long long sum = ((a%mod)+(b%mod))%mod;
cout<<"sum = "<<sum;

return 0;
}
