/*
Với vector V bạn có thể dùng hàm max_element để tìm phần tử lớn nhất, min_element để tìm phần tử nhỏ nhất, accumulate để tính tổng. Cú pháp (Đối với mảng các bạn dùng (a, a + n)) :

- cout << *min_element(V.begin(), V.end());
- cout << *max_element(V.begin(), V.end());
- cout << accumulate(V.begin(), V.end(), 0);
Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector.

Constraints

1<=N<=1000. Các phần tử của vector là số nguyên 32bit.

Output Format

Dòng 1 in ra phần tử nhỏ nhất, dòng 2 in ra phần tử lớn nhất, dòng 3 in ra tổng các phần tử.

Sample Input 0

10
2 2 2 7 6 6 6 9 5 7 
Sample Output 0

2
9
52
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==================================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    vector <int> v(n);
    for (auto &it : v) cin >> it;
    cout << *min_element(v.begin(), v.end()) << '\n';
    cout << *max_element(v.begin(), v.end()) <<'\n'; 
    cout << accumulate(v.begin(), v.end(),0);
    return 0;
}
