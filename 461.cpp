#include <bits/stdc++.h>

using namespace std;

int hamming_distance(unsigned int a, unsigned int b) {
    int val = a ^ b;
    int dist = 0;
    while(val != 0) {
	cout<<val<<' ';
        val = val & (val-1);
        dist++;
    }
    return dist;
}


int main()
{
	int a,b;
	cin>>a>>b;
	cout<<hamming_distance(a,b);
	return 0;
}
