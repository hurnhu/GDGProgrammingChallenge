#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
template <typename T1, typename T2>
struct greater_second {
	typedef pair<T1, T2> type;
	bool operator ()(type const& a, type const& b) const {
		return a.second > b.second;
	}
};
int main() {
	map<string, int> poll;
	string name;
	while (getline(cin, name))
	{
		if (name == "***")
		{
			break;
		}
		poll[name]++;
	}
	vector<pair<string, int>> mapcopy(poll.begin(), poll.end());
	sort(mapcopy.begin(), mapcopy.end(), greater_second<string, int>());
	if (mapcopy[0].second == mapcopy[1].second)
	{
		cout << "Runoff!" << endl;
	}
	else
	{
		cout << mapcopy[0].first << endl;
	}
	return 0;
}
