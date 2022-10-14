/*
Cho N điểm trong hệ tọa độ Oxyz, bạn hãy dùng vector

pair<pair<int, int>, int>>
để lưu tọa độ các điểm này. Sau đó duyệt vector và in ra tổng của tung độ, hoành độ, cao độ.

Input Format

Dòng 1 là N : số lượng điểm. N dòng tiếp theo mỗi dòng gồm 3 số là tung độ, hoành độ, cao độ.

Constraints

1<=N<=1000; Tọa độ là số nguyên có trị tuyệt đối không quá 100;

Output Format

In ra đáp án của bài toán

Sample Input 0

12
65 91 53
64 70 15
50 9 57
69 37 11
31 35 66
73 55 50
63 40 38
33 5 41
67 39 29
85 78 6
67 49 83
41 34 88
Sample Output 0

209 149 116 117 132 178 141 79 135 169 199 163
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=============================================
int main ()
{
    FAST_IO;
    int n, x, y, z;
    cin >> n;
    vector <pair <pair<int,int> ,int>> coord;
    while (n--)
    {
        cin >> x >> y >> z;
        coord.push_back(make_pair(make_pair(x,y),z));
    }
    for (auto &it : coord) cout << it.first.first + it.first.second + it.second << ' ';

    return 0;
}