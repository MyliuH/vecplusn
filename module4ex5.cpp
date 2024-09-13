#include <iostream>
#include <vector>

using namespace std;

vector<int> vecplusn(vector<int> mus, int n) {
    for (int i = 0; i < mus.size(); i++) {
        mus[i] += n;
    }
    return mus;
}

int main()
{
    vector<int> mus = { 1, 2, 3, 4, 5 };
    vector<int> musresult;
    int n;
    cin >> n;
    musresult = vecplusn(mus, n);
    for (auto i : musresult) {
        cout << i << " ";
    }
}

