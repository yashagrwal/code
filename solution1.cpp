#include<iostream>

using namespace std;

void print(int i,int limit, char s) {
	for(int j = i;j <= limit; j++) {
		cout<< s;
	}
}
int main() {
	int n;
	
	cin >> n;
	int x = n/2;
	int y = 1;
	
	for(int i = 1;i <= n;i++) {
		print(1,x,'_');
		print(x+1,n/2,'*');
		if(i%2 == 1) {
			cout<<"*";
		}
		else {
			cout<<"_";
		}
		print(x+1,n/2,'*');
		print(1,x,'_');
		y++;
		if(y == 2) {
			y = 0;
			x --;
		}
		cout<<endl;	
	}
}
