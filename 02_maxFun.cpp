#include <iostream> 
using namespace std; 
#define ll long long ;

long long modulo (long long n){
    if(n<0){
        return (-1*n);
    }
    else {
        return (n);
    }
}
int main(){
    int testCases ;
    cin>>testCases; 
        long long size=testCases;
        long long bestSum[size];
        bestSum[0]=0;
        long long j=0;

     for(long long i=0; i<size; i++){
         bestSum[i]=0;
     }


    while (testCases>0){
        long long n; 
        cin >>n; 

        long long arr[n];
        for (long long i=0; i<n; i++){
            cin>>arr[i];
        }

        long long currentSum=0;
        long long x=0, y=1;
        for (long long z=2; z<n; z++){
            currentSum=(modulo(arr[x]-arr[y])+(modulo(arr[y]-arr[z]))+(modulo (arr[z]-arr[x])));
            if(currentSum>bestSum[j]){
                bestSum[j]=currentSum;
                
            }
            currentSum=0;
            x++;
            y++;
            
        }
       // cout<<bestSum<<endl;
       j++;
        testCases--;
    }
    for (int i=0; i<size; i++){
        cout<<bestSum[i]<<endl; 
    }
    return 0;
}