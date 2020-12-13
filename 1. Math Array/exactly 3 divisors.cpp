#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N){
    for(int i=2;i<=sqrt(N);i++){
        if(N%i == 0)
        return false;
    }
    return true;
}

int exactly3Divisors(int N)
{
    int threeCount = 0;
    for(int i=2;i<=sqrt(N);i++){
        if(isPrime(i) && (i*i)<=N)
        threeCount++;
        
    }
    return threeCount;
}

int main(){
std::ios_base::sync_with_stdio(false);
int n;
cin>>n;

cout<<"\n"<<exactly3Divisors(n);

return 0;
}
