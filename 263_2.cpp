#include <bits/stdc++.h>

using namespace std;

bool isUgly(int num) {
    if(num == 0) return false;

    while(num%2 == 0) num/=2;
    while(num%3 == 0) num/=3;
    while(num%5 == 0) num/=5;

    return num == 1;

}

int main()
{
    int num;
    cin>>num;
    cout<<isUgly(num);
    return 0;
}
