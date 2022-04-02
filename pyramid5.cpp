#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int row, column, n;
	cin>> n;
	
	for(row =1; row<=n; row++) {
		for(column = 1; column<=row; column++) {
			cout<< (char)(row+64 );
		}
		cout<<endl;
	}
	return 0;
}