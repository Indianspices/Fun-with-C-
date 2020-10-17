#include<stdio.h>
void main()
{
	int i,j,n,swap,ar[200];
	printf("write the size of array : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("WRITE THE ELEMENT OF ARRAY : \n");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				swap=ar[i];
				ar[i]=ar[j];
				ar[j]=swap;
			}
			
		}
	
	}
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
		printf("\t");
	}
}
