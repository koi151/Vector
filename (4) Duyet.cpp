/*
Cho vector V có N phần tử, nhiệm vụ của bạn in ra các phần tử từ chỉ số L tới chỉ số R sau đó in ra các phần tử từ chỉ số R tới chỉ số L bằng cách dùng iterator.

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector. Dòng 3 là L và R

Constraints

1<=N<=1000. 0<=L<=R

Output Format

Dòng 1 in ra vector từ L tới R, dòng 2 in ra vector từ R tới L.

Sample Input 0

10
8 1 8 3 8 5 3 5 9 7 
3 6
Sample Output 0

3 8 5 3 
3 5 8 3 
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=======================================
int main ()
{
    FAST_IO;
    int n, l, r;
    cin >> n;
    vector <int> v(n);
    for (auto &it : v) cin >> it;
    cin >> l >> r;
    for (int i = l; i <= r; ++i)
        cout << v.at(i) << ' ';
    cout << '\n';
    for (int i = r; i >= l; --i)
        cout << v.at(i) << ' ';

    return 0;
}