
#include<bits/stdc++.h>
using namespace std ; 
const long long MOD = 1e9 + 7 ; 

int main() {
long long  n = 0 ; 
cin >> n ; 
pair <int,int> a = fastDoubling(n) ; 
cout << (a.first)%MOD ;
}