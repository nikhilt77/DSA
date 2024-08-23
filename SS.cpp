
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


class Solution
{
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int min=i;
           for(int j=i;j<n;j++){
               if(arr[j]<arr[min]){
                   int temp=arr[j];
                   arr[j]=arr[min];
                   arr[min]=temp;
               }
           }
       }
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
