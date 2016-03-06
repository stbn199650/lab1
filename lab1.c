#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

	int a;

	cout << "enter a number a " ;
	cin >> a ;
	cout << a << endl;

	re:

	if(a==1){
		cout << endl << "a==1 exit" << endl;
		exit(0);
	}
	else if(a%2==1){
		a=a*3+1;
		cout << a << ' ';
	}
	else if(a%2==0){
		a=a/2;
		cout << a << ' ';
	}

	goto re;

return 0;
}
