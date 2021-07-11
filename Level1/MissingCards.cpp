#include <iostream>
#include <vector>
using namespace std;

class card {
private:

public:
	card() :kind{ 'n' }, CardNumber{ -999 }{}
	card(char a, int b) :kind{ a }, CardNumber{ b } {}
	char kind;
	int CardNumber;
	bool operator == (const card& rhs) const {
		return (kind == rhs.kind) && (CardNumber == rhs.CardNumber);
	}
};

int main()
{
	int input = 0;
	cin >> input;
	vector<card> vec(input);
	vector<card> allvec(52);
	char kindArray[] = "SHCD";

	
	int arrayoffset = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int ii = 0; ii < 13; ii++)
		{
			allvec[arrayoffset + ii] = card(kindArray[i], ii+1);
		}
		arrayoffset += 13;
	}

	for (int i = 0; i < input; i++)
	{
		char i_kind;
		int i_number;
		cin >> i_kind >> i_number;
		vec[i] = card(i_kind, i_number);
	}

	for (int i = 0; i < 52; i++)
	{
		bool find = false;
		for (int ii = 0; ii < input; ii++)
		{
			if (allvec[i] == vec[ii])
			{
				find = true;
				break;
			}
		}
		if (!find)
		{
			cout << allvec[i].kind << " " << allvec[i].CardNumber << endl;
		}
	}

	return 0;
}