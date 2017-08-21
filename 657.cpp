#include <bits/stdc++.h>

using namespace std;

string moves;
int l,r,u,d;

int main()
{
    cin >> moves;
    for ( int ch = 0; ch < moves.length(); ch++ )
    {
        if( moves[ch] == 'R' )
            r++;
        else if( moves[ch] == 'L' )
            l++;
        else if( moves[ch] == 'D' )
            d++;
        else if( moves[ch] == 'U' )
            u++;
    }
    if( l==r && d==u )
        cout << "true";
    else
        cout << "false";
    return 0;
}
