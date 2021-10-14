#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        //sort(arr,arr+n);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
                cnt++;
        }
        for(int i=0; i<n; i++)
        {
            if(i<cnt)
            arr[i] = 0;
            if(i>=cnt)
            arr[i] = 1;
        }
       
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} 
