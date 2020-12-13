#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
    for(int i=2;i<=sqrt(N);i++)
    {
        if(N % i ==0)
           return false;
        
    }
    return true;
    
}

int main(){
std::ios_base::sync_with_stdio(false);
int n;
cin>>n;

cout<<"Is it prime: "<<((isPrime(n) == 1)?"True":"False");

return 0;
}
