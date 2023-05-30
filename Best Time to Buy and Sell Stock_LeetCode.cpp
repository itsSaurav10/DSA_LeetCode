#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define vl vector<ll>
#define all(arr) arr.begin(), arr.end()
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repd(i, a, n) for(int i = n; i > a; i--)
#define reped(i, a, n) for(int i = n - 1; i >= a; i--)
#define feach(arr) for(auto it : arr)
#define inp ll n; cin >> n;
#define read(arr) rep(i, 0, n) cin >> arr[i]
#define print(arr) rep(i, 0, n) cout << arr[i] << " "
#define Arr arr

using namespace std;

class Solution {
	private:
		ll t;

	public:
		void test_cases(){
			cout << "Enter the number of testcases: " << endl;
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			cout << "Enter the size of array: " << endl;
			inp;
			cout << "Enter array elements: " << endl;
			vi arr(n);
			read(Arr);
			int maxProfit = 0, currentMinimum = INT_MAX;
			rep(i, 0, n){
				currentMinimum = min(currentMinimum, arr[i]);
				maxProfit = max(maxProfit, arr[i] - currentMinimum);
			}
			cout << "The maximum profit for the given stock prices is " << maxProfit << endl;
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}

