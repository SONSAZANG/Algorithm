#include <bits/stdc++.h>
using namespace std;
int N, M;
string name;
map<int, string> nameByNum;
map<string, int> numByName;
vector<string> answer;
int main() {
	cin >> N;
	cin >> M;
	
	for(int i = 1; i <= N; i++) {
		cin >> name;
		nameByNum[i] = name;
		numByName[name] = i; 
	}
	
	for(int i = 0; i < M; i++) {
		cin >> name;
		if(isdigit(name[0])) {
			answer.push_back(nameByNum[stoi(name)]);
		} else {
			answer.push_back(to_string(numByName[name]));	
		}
	}
	
	for(string i : answer) cout << i << "\n";
	
	return 0;	
} 