#include<stdio.h>
int main()
{
	int array[10],i,n,key;
	printf("write the no of element of array \n");
	scanf("%d",&n);
	printf("write the elments of arrat");
	for(i<n;i=0;i++)
{
	scanf("%d",&array[i]);
}
	printf("write the number you want to search");
	scanf("%d",&key);
	for(i<10;i=0;i++)
 {
	 if(array[i]==key)
 {
  	  printf("element is %d",key);}
  	   else
{	
        printf("code not found");
   
}
}
}
