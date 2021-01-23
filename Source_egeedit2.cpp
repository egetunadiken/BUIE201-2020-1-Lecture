#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map< pair<int, int>, int > Distance =
	{
		{{0, 1}, 5},
		{{1, 2}, 4},
		{{1, 3}, 2},
		{{2, 3}, 5},
		{{3, 4}, 4},
		{{3, 5}, 200},
		{{4, 5}, 1}
	};

	for (auto x : Distance) {pair <int, int> a; a = x.first;
	cout << a.first << "," << a.second << endl;
	}
	return 0;
}