#include<iostream>
using namespace std;

int main()
{
    int n,i,j,temp;
	cout<<"Shifa Khan\n0832CS221187"<<endl;
    cout<<"Enter the size of array ";
	cin>>n;
    cout<<"Enter the elements of array :\n";
    int arr[n];
    for(i=0;i<n;i++)
	{
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
	{
        cout<<arr[i]<<" ";
    }
       
    for(i=0;i<n-1;i++)
	{
      
        for(j=0;j<n-1;j++)
		{
           if (arr[j]>arr[j+1])
		   {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           
           }
        }

    }
    cout<<endl;
     for(i=0;i<n;i++)
	{
        cout<<arr[i]<<"�";
	}

}

