#include<iostream>
#include<vector>
using namespace std;
int dis_num(int n, vector<int>& arr) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		bool found = false;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				found = true;
				break;
			}
		}
		if (!found)count++;
	}
	return count;
}
int main() {
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout<<dis_num(n, arr);
	return 0;
}
