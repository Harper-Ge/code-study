#include<iostream>
#include <string>
using namespace std;
int main()
{
	string stu[1003][2], s1, s2;
	int n, row, m, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> row >> s2;
		stu[row][0] = s1;
		stu[row][1] = s2;
	}
	cin >> m;
	for (int i = 0; i < m; i++)	{
		cin >> x;
		cout << stu[x][0] << " " << stu[x][1] << endl;
	}
    return 0;
}

