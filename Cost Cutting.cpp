#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n,cnt,arr[3];

	cin >> n;

	cnt = 0;
	while(n--){
		cnt++;

		cin >> arr[0] >> arr[1] >> arr[2];
		vector<int> v(arr,arr+3);

		sort(v.begin(),v.end());

		cout << "Case " << cnt<< ": "<< v[1] << endl;
	}
	return 0;
}
