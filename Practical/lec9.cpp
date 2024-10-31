#include<iostream>
using namespace std;
 void PrintArray(int arr[],int size)
 {
     cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
 }

 int Max(int arr[],int size)
 {
    
    int maxn=INT32_MIN;
    for(int i=0;i<size;i++)
    {
       maxn= max(maxn,arr[i]);
    }
    return maxn;

 }
 int Min(int arr[],int size)
 {
  int minn=INT32_MAX;
    for(int i=0;i<size;i++)
    {
       minn= min(minn,arr[i]);
    }
    return minn;
 }
 int LinearSearch(int arr[],int size,int key)
 {
    for(int i=0;i<size;i++)
    {
       if(arr[i]==key)
       {
            return i;
       }
    }
    return -1;
 }
 void swap(int arr[],int start,int end)
 {
    int c=arr[start];
    arr[start]=arr[end];
    arr[end]=c;
 }
 int Reverse(int arr[],int size)
 {
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr,start,end);
        start++;
        end--;
    }
 }
 
 int GetLength(int arr[])
 {
    int length=sizeof(arr);
    return length;
 }
int main()
{
    int arr[5];
    cout<<arr[3]<<endl;//will print random garbage value

    arr[3]=23;//assigned some value 
    cout<<arr[3];

    int arr2[5]={0};//initialize all element of array with 0
    PrintArray(arr2,5);

    int arr3[5]={1};//initialize first element with 1 and rest with 0
    PrintArray(arr3,5);

     int arr4[5]={1,2};//initialize first element with 1,second with 2  and rest with 0
     PrintArray(arr4,5);

     int arr5[9]={5,4,3,2,1,-1,-2,-3,0};

     cout <<"Length="<<GetLength(arr4)<<endl;

     cout <<"Max="<<Max(arr5,9)<<endl;

     cout <<"Min="<<Min(arr5,9)<<endl;

     cout <<"Search="<<LinearSearch(arr5,9,-2)<<endl;

    int oddarray[]={1,2,3,4,5};
    cout<<"Before Reverse";
    PrintArray(oddarray,5);
cout<<"After Reverse";
    Reverse(oddarray,5);

 PrintArray(oddarray,5);



 int even[]={1,2,3,4,5,6};
    cout<<"Before Reverse";
    PrintArray(even,6);
cout<<"After Reverse";
    Reverse(even,6);

 PrintArray(even,6);

    return 1;

}