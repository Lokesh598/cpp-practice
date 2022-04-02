#include<iostream>

using namespace std;

int main()
{
	/* code */
	int row, column;
	cin>> row;
	cout<<"pyramid"<<endl;
	for(int i =1; i<=row; i++) {
			for(int space = 1; space<=row-i; space++) {
				cout<<"  ";
			
			}
			for(column = 1;column<=i;column++) {
				cout<<"* ";
			}
		cout<<endl;

	}
	return 0;
}
