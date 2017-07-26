#include <iostream>
using namespace std;
bool isHero(string s)
{
	int l = s.length();
	bool found = true;
	string str = "man";
	if (l >= 3)
	{
		int j = 0;
		for (int i = l - 3; i < l; i++)
		{
			if (str[j++] != s[i])
			{
				found = false;
				break;
			}
		}
	}
	else
		return false;
	return found;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		int cntHero = 1;
		int cntVillian = 1;
		string ans = "";
		bool found = false;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			if (isHero(s))
			{
				cntHero++;
			}
			else
				cntVillian++;
			if (!found && cntHero - cntVillian >= 2)
			{
				ans = "superheroes";
				found = true;
			}
			else if (!found && cntVillian - cntHero >= 3)
			{
				ans = "villains";
				found = true;
			}
		}
		cout << (ans == "" ? "draw" : ans) << endl;
	}
	return 0;
}
