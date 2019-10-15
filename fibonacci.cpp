// Simple fibonacci problem using C++ that prints fibonacci sequence upto the input number

#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	cout<<"Enter number upto which fibonacci sequence is to be printed : ";
	cin>>n;

	cout<<0<<"\t"<<1<<"\n";
	a=0,b=1;
	while(true){
		int temp;
		temp = b;
		b += a;
		a = temp;
		if(b>n)
			break;
		cout<<b<<"\t";
	}

}
