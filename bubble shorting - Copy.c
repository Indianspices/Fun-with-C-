#include<stdio.h>
void main()
{
	int i,j,n,swap,ar[200];
	cout<<"write the size of array : \n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"WRITE THE ELEMENT OF ARRAY : \n";
		cin>>ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				swap(a[i],a[j]);
			}
			
		}
	
	}
	for(i=0;i<n;i++){
		cout<<ar[i]);
		cout<<"\t";
	}
}
