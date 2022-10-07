#include<bits/stdc++.h>
int main()
{       #using vector that build on Singly linkedIn list
	vector<int> arr;
	cout<<"write the no of element of array \n";
	cin>>n;
	
	for(i=0;i<n;i++)
{
	cout<<"write the elments of array"<<i+1;
	int number;
	cin>>number;
	arr.push_back(number);
}
	
 #Taking the key element for search and doing linear search
	cout<<"write the number you want to search";
	cin>>key;
	for(i=0;i<n;i++)
 {
	 if(arr[i]==key)
 {
  	  cout<<"element is", key;}
  	   else
{	
        cout<<"code not found";
   
}
}
}
