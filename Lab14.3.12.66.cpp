/* LANG : C++ */
#include <iostream>

using namespace std;

int main(){
	int n,i,k;
	cin >> n;
	
		if(n<1||n>20){
			return 1;
		}
		for (i=0; i<n; i++){
			k=i%2;
			cout << (k == 0 ? "0" : "1");
		}
		return 0;
}
