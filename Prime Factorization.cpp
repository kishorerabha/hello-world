#include<bits/stdc++.h>
using namespace std;
 
int main(){

	cout<<"Enter a number : ";
	int n;
	cin>>n;
  cout<<"The prime factors are : ";
	for(int i=1;i<=n;i++){
		int count=0;
		if(n%i==0){
			for(int j=1;j<=i;j++){
				if(i%j==0)
					count++;
			}
			if(count==2){
				cout<<i<<" ";
			}
		}
	}
}
