//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int n){
        if(n==2 || n==3) return 1;
        if(n<=1 || n%2==0 || n%3==0) return 0;
        for(int i = 5 ; i*i <= n ; i+=6){
            if(n%i==0 || n%(i+2)==0) return 0;
        }
        return 1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends