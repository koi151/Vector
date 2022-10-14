/*
Cho N điểm trong hệ tọa độ Oxy, bạn hãy dùng vector

pair<int, int>

Để lưu tọa độ các điểm này. Sau đó duyệt vector và tính khoảng cách từ các điểm này về gốc tọa độ và lưu vào 1 
vector sau đó in ra các phần tử trong vector khoảng cách này lấy 2 số sau dấu phẩy.

Input Format

Dòng 1 là N : số lượng điểm. N dòng tiếp theo mỗi dòng gồm 2 số là tung độ và hoành độ.

Constraints

1<=N<=1000; Tọa độ là số nguyên có trị tuyệt đối không quá 100;

Output Format

In ra đáp án của bài toán.

Sample Input 0

13
5 27
69 84
92 51
12 70
26 70
76 47
36 94
55 2
26 20
85 97
17 31
33 88
10 75
Sample Output 0

27.46 108.71 105.19 71.02 74.67 89.36 100.66 55.04 32.80 128.97 35.36 93.98 75.66 
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=====================================================
int main ()
{
    FAST_IO;
    int n, x, y;
    cin >> n;
    vector <pair<int,int>> coord;


    for ( int i = 0; i < n; i ++)
    {
        cin >> x;
        cin >> y;
        coord.push_back({x, y});
    }

    for (auto &it : coord) printf("%.2f ", sqrt(pow(it.first,2) + pow(it.second,2)));
    return 0;
}

