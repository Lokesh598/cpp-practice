#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int row, column, n;
	int t;
	cin>>t;
	while(t--) {
		cin>> n;
		int count = 1;
		for(row =1; row<=n; row++) {
			for(column = 1; column<=row; column++) {
				cout<<count<<" ";
				count++;
			}
			cout<<endl;
		}
		cout<<endl;
		count =1;
	}
	return 0;
}