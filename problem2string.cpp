//Check whether the given string is palindrome or not , only check for alphanumeric characters not other characters in string 


#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool ispal(vector<char> arr1,int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        
        if(tolower(arr1[i])==tolower(arr1[j]))
        {  
           i++;
           j--;
        }
        else 
           return false;
    }
    return true;
}
int main()
{
    string str = "Mo3454367M";
    int n= str.size();
    vector<char> arr; 
    
    for(int i=0;i<n;i++)
    {
        if( isalnum(str[i]) || str[i]==' ')
        {
            arr.push_back(str[i]);
        }
    }
    
    
    bool ans = ispal(arr,arr.size());
    cout<<ans;
    return 0;
}
