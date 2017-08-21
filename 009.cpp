#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x)
{
    int num = 0;
    int xx=x;
    while( x>0 )
    {
        num = num*10 + x%10;
        x/=10;
    }
    if (xx == num)
        return true;
    return false;
}

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}
