#include <bits/stdc++.h>

using namespace std;

bool isUgly(int num)
{
    if( num == 1 )
        return true;
    if( num%2 != 0 && num%3 != 0 &&  num%5 != 0 )
        return false;
    //resheto ertosphen algorithm for finding all prime numbers in range
    vector<char> prime (num+1, true);
    prime[0] = prime[1] = false;
    for (int i=2; i<=num; ++i)
            if (prime[i])
                        if (i * 1ll * i <= num)
                                        for (int j=i*i; j<=num; j+=i)
                                                            prime[j] = false;
    //****
    for (int i=7;i<=num;i++)
    {
        if( prime[i] == true )
            if ( num%i == 0 )
                return false;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    cout<<isUgly(num);
    return 0;
}
