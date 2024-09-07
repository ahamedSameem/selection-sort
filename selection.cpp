#include<iostream>
#include<string>
using namespace std;
int swap(int arr[])
{

}
int main()
{
  int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
       int temp=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[temp])
            {
                temp=j;
            }
        }

              int temp1=arr[i];
        arr[i]=arr[temp];
        arr[temp]=temp1;

    }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
