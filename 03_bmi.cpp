#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long double t; 
	cin>>t; 
	while (t>0){
	    long double mass, height; 
	    cin>>mass>> height; 
	    
	    long double bmi= (mass/ (height*height));
	    if (bmi<= 18){
	       // return 1; 
	       cout<<"1";
	       cout<<endl; 
	    }
	    else if (bmi>18 && bmi <= 24){
	         cout<<"2";
	          cout<<endl;
	        //return 2;
	        
	    }
	    else if (bmi>24 && bmi <=29){
	      cout<<"3";
	       cout<<endl;
	      //  return 3; 
	    }
	    else {
	        cout<<"4";
	         cout<<endl;
	      //  return 4; 
	    }
	    t--; 
	}
	return 0;
}