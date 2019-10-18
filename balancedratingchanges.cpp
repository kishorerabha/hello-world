#include<bits/stdc++.h>
using namespace std;
int main()
{
    	int n;
    	cin>>n;
    	int num;
    	int t=1;
    	for(int i=0;i<n;i++)
    	{
    		cin>>num;
    		if(num%2==0) cout<<num/2<<endl;
    		else{
    			cout<<(num+t)/2<<endl;
    			if(t==1) t=-1;
    			else t=1;
    		}
    	}
    	
}
