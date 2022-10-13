/*
Cho vector và 2 thao tác. Thao tác 1 : Thêm 1 phần tử và cuối vector. Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng. Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra Emtpy, ngược lại in ra các phần tử trong vector trên 1 dòng.

Input Format

Dòng 1 là N : số thao tác được thực hiện. N dòng tiếp theo mỗi dòng mô tả thao tác, nếu thao tác là 1 sẽ có thêm phần tử được thêm vào cuối.

Constraints

1<=N, M<=200; Các phần tử thêm vào vector là số nguyên int 32bit.

Output Format

In ra EMPTY nếu vector rỗng, ngược lại in ra các phần tử trong vector trên 1 dòng.

Sample Input 0

7
1 58
2
2
1 52
1 81
1 12
1 2
Sample Output 0

52 81 12 2 
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(); cin.tie(0)

using namespace std;

//==========================================
int main ()
{
    FAST_IO;
    int n,t,e;
    vector <int> v;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t==1)
        {
            cin >> e;
            v.push_back(e);
        }
        if (t == 2 && v.size() != 0)
            v.pop_back();
    }
    if (!v.size()) cout << "EMPTY";
    else for (auto &it : v) cout << it << ' ';
    return 0; 
}