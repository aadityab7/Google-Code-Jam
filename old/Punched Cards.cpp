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
		int r, c;
		cin >> r >> c;
		cout << "Case #" << x << ": "<< endl;
            
        cout << '.' << '.';
        for(int j = 0; j < c - 1; j++){
				cout << '+' << '-';
		}
		cout << '+' << endl;
		
		for(int i = 0; i < r; i++){
			if(i == 0){
			    cout << '.';    
			}
			else{
			    cout << '|';
			}
			
			for(int j = 0; j < c; j++){
				cout << '.' << '|';
			}
			cout << endl;
			cout << '+';
			for(int j = 0; j < c; j++){
				cout << '-' << '+';
			}
			cout << endl;
		}

	}
	return 0;
}