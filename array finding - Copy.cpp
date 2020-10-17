#include<iostream>
int main()
{
	int array[10],i,n,key;
	cout<<"write the no of element of array \n";
	cin>>n;
	cout<<"write the elments of arrat";
	for(i<n;i=0;i++)
{
	cin<<array[i];
}
	cout<<"write the number you want to search";
	cin>>key;
	for(i<10;i=0;i++)
 {
	 if(array[i]==key)
 {
  	  cout<<"element is", key;}
  	   else
{	
        cout<<"code not found";
   
}
}
}
