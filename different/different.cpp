// https://open.kattis.com/problems/different
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    long long x;
    while(cin>>x) {
        long long y;
        cin >> y;
        cout << abs(x - y) << endl;
    }
    return 0;
}