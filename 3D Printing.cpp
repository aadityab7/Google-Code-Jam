#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int x = 1; x <= t; x++){
		int c, m, y, k;
		int cm = INT_MAX, mm = INT_MAX, ym = INT_MAX, km = INT_MAX;

		for(int i = 0; i < 3; i++){
			cin >> c >> m >> y >> k;

			if(c < cm) cm = c;
			if(m < mm) mm = m;
			if(y < ym) ym = y;
			if(k < km) km = k;
		}


		long sum = cm + ym + mm + km;
        long req = 1000000;
        long total = 0;
		if(sum < req){
			cout << "Case #" << x << ": "<< "IMPOSSIBLE" << endl;
		}
		else{
			cout << "Case #" << x << ": ";
			cout << cm << ' ';
			total = cm;
			if(req - (total + mm) >= 0){
				cout << mm << ' ';
			    total += mm;
			}
			else{
				cout << req - total << ' ';
				total = req;
			}
			
			if(req - (total + ym) >= 0){
				cout << ym << ' ';
				total += ym;
			}
			else{
				cout << req - total << ' ';
				total = req;
			}
			
			if(req - (total + km) >= 0){
				cout << km << ' ';
			}
			else{
				cout << req - total;
			}
			cout << endl;
		}
		
	}
	return 0;
}