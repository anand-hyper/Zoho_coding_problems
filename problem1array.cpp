/*Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
After doing so, return the array.


Example 1: 
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.

Example 2: 
Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0




*/

// CODE IN CPP(optimal approach)

 

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


vector<int> replaceElements(vector<int>& arr) 
{
        int n=arr.size();
        int maxv=-1,temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp=arr[i];
            arr[i]=maxv; 
            
            maxv=max(maxv,temp);
        }
        return arr;
}

int main()
{
    int n,num;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    { 
      
      cin>>arr[i];
      
    }
    
    vector<int> arr1=replaceElements(arr);
    for(int i=0;i<n;i++)
    { 
      if(i>0)
      {
          cout<<" ";
      }
      cout<<arr1[i];
    }
    cout<<endl;


    return 0;
}
