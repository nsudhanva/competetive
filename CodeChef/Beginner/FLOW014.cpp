#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		double a, b, c;
		cin >> a >> b >> c;

		if(a > 50 && b < 0.7 && c > 5600){
			cout << "10" << endl;
		} 
		else if(a > 50 && b < 0.7 && c <= 5600){
			cout << "9" << endl;
		}
		else if(a <= 50 && b < 0.7 && c > 5600){
			cout << "8" << endl;
		}
		else if(a > 50 && b >= 0.7 && c > 5600){
			cout << "7" << endl;
		}
		else if(a > 50 && b >= 0.7 && c <= 5600 || a <= 50 && b < 0.7 && c <= 5600 || a <= 50 && b >= 0.7 && c > 5600){
			cout << "6" << endl;
		}
		else if(a <= 50 && b >= 0.7 && c <= 5600){
			cout << "5" << endl;
		}
	}
}
