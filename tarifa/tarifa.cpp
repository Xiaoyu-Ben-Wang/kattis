// https://open.kattis.com/problems/tarifa
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int n;
    vector<int> spending;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        spending.push_back(temp);
    }
    int free = 0;
    for (auto &&i : spending)
    {
        free += x - i;
    }
    cout << free+x;

    return 0;
}