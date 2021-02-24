#include <iostream> 
using namespace std; 

int main(){
    int n;
    cin>>n;
    int largestDivisor=0; 

    for (int i=1; i<=10; i++){
        if (n%i==0)
        {
            largestDivisor=i; 
        }
        
    }
    cout<<largestDivisor<<endl;
    return 0; 
}