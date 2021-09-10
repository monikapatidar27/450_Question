#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       int i,c=0;
       int max=arr[0];
       for (i=0;i<n;i++) {
       if (max<arr[i])
        max=arr[i]; }
        int h[max+1]={0};
        for (i=0;i<n;i++) {
           if (k-arr[i]>0 && k-arr[i]<=max && h[k-arr[i]]>0)
           {
               c=c+h[k-arr[i]];
            }
                h[arr[i]]++;
        }
            return c; // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends