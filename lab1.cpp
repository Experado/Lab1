#include <iostream>
using namespace std;


int main()
{

	int n;
	int w=0;
	cout<<"Please input an number for n!";
	cin >> n;
	cout << n ;	
	while(w==0)
	{
		w++;
		if(n!=1 && (n%2)==1)	{n=(3*n)+1;			cout << " ";	cout << n;	w=0;}
		if(n!=1 && (n%2)==0)	{n=(n/2);		cout << " ";	cout << n;	w=0;}
		if(n==1)	break;
	}
	return 0;

}
