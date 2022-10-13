/*
Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator.

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector.

Constraints

1<=N<=1000. Các phần tử của vector là số nguyên 32bit.

Output Format

Dòng 1 in ra vector tăng dần, dòng 2 in ra vector giảm dần.

Sample Input 0

8
992 763 670 344 67 268 298 852 
Sample Output 0

67 268 298 344 670 763 852 992 
992 852 763 670 344 298 268 67 
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=========================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    vector <int> v(n);
    for (auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    for (auto it : v) cout << it << ' ';
    cout << '\n';
    sort(v.begin(), v.end(), greater <int>());
    for (auto it : v) cout << it << ' ';
    return 0;
}