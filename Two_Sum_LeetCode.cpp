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
			cout << "Enter the number of test cases: " << endl;
			cin >> t;
			while(t--){
				solve();
			}
		}
		
		bool hasTwoSum(vi &arr, ll n, ll target){
			um mp;
			vi answer;
			rep(i, 0, n){
				mp[arr[i]]++;
			}
			rep(i, 0, n){
				if(mp.count(target - arr[i])){
					answer.pb(arr[i]);
					answer.pb(target - arr[i]);
					cout << "The values are " << answer[0] << " and " << answer[1] << endl;
					return true;
				}
			}
			return false;
		}

		void solve(){
			cout << "Enter the size of array: " << endl;
			inp;
			vi arr(n);
			cout << "Enter the values of array: " << endl;
			rep(i, 0, n){
				cin >> arr[i];
			}
			cout << "Enter the target to find: " << endl;
			ll target;
			cin >> target;
			if(hasTwoSum(arr, n, target)){
				cout << "The array contains a pair with the given sum." << endl;
			}
			else{
				cout << "The array does not contain a pair with the given sum." << endl;
			}
		}
};


int main() {
	Solution sol;
	sol.test_cases();
	return 0;
}
