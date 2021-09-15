#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<pair<string, string>> names;
	for (int i = 0; i < n; i++) {
		string name, ip;
		cin >> name >> ip;
		names.push_back(make_pair(name, ip));
	}
	// check if the ip address of the current command matches the ip address in the server
	// if yes, then store them in the format that was shown in the problem statement
	vector<string> commands;
	for (int i = 0; i < m; i++) {
		string command, ip;
		cin >> command >> ip;
		for (int j = 0; j < n; j++) {
			if (ip.substr(0, (int) ip.size() - 1) == names[j].second) {
				commands.push_back(command + " " + ip + " #" + names[j].first);
				break;
			}
		}
	}
	for (auto& e : commands) {
		cout << e << '\n';
	}
	return 0;
}
