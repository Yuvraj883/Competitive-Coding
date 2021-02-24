#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t; 
	cin>>t; 
	while(t--)
	{
	    long long n,k; 
	    cin>>n>>k; 
	    vector<long long> v1(k); 
	    long long j; 
	    for(j=0;j<k;j++)
	    cin>>v1[j]; 
	    vector<string> v2(n); 
	    for(j=0;j<n;j++)
	    cin>>v2[j]; 
	    for(j=0;j<n;j++)
	    {
	        string str = v2[j]; 
	        long long sum=0; 
	        for(long long k=0;k<str.length();k++)
	        {
	            if(str[k]=='1')
	            {
	                sum+=v1[k]; 
	            }
	        } 
	        cout<<sum<<endl; 
	    }
	}
	return 0;
}