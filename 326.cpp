#include <bits/stdc++.h>

using namespace std;

 bool isPowerOfThree(int n) {
        if( n==0 )
            return false;
        while( n%3==0 ) 
            n/=3;
        if( n==1 )
            return true;
        return false;
    }

int main()
{

	return 0;
}