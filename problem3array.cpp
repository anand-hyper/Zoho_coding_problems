/*Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.



Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.*/

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.

    int n = arr.size() ;
        
    vector<int> temp;
    int k_mod = k%n;
    for(int i=0;i<k_mod;i++)
    {
        temp.push_back(arr[i]);
            
    }
    for(int j=k;j<n;j++)
    {
        arr[j-k]=arr[j];

    }
    int i=0;
    for(int j=n-k;j<n;j++)
    {
             arr[j]=temp[j-(n-k)];
             i++;

    }
    return arr;


}

int main()
{

  vector<int>arr{3,4,5,1,2};
  int k=3;
  arr=rotateArray(arr,k);
  for(int i=0;i<arr.size();i++)
  { 
    cout<<arr[i];
  }

  return 0;



}
