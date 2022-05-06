//https://open.kattis.com/problems/aboveaverage
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char const *argv[])
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        vector<int> grades;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            grades.push_back(temp);
        }
        double avg = (double)accumulate(grades.begin(), grades.end(), 0) / (double)grades.size();
        int aboveavg = 0;
        for (auto &&i : grades)
        {
            if (i > avg)
            {
                aboveavg++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << ((float)aboveavg / (float)grades.size()) * 100 << "%" << endl;
    }
    return 0;
}