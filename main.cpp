#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> inputs;
	string text;
	while (getline(cin, text))
	{
		inputs.push_back(text);
	}
	cout << inputs.size();
    return 0;
}
