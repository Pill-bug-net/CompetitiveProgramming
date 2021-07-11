#include <iostream>
#include <vector>
using namespace std;
/*
Question and Answer format.
https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C&lang=en
*/


class building {
public:
	int room[3][10] = {{ 0,0,0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0,0,0 }};

};

int main()
{
	int n = 0;
	building univA[4];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int b, f, r, v = 0;
		cin >> b >> f >> r >> v;
		univA[b - 1].room[f - 1][r - 1] += v;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int ii = 0; ii < 3; ii++) {
			for (int iii = 0; iii < 10; iii++)
			{
				cout << " " << univA[i].room[ii][iii];
			}
			cout << endl;
		}
		if (i != 3) {
			cout << "####################";
			cout << endl;
		}
		
	}
	return 0;
}