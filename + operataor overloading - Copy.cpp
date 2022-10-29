//Importing library
#include<bits/stdc++.h>
using namespace std;
 class goal
 {
	 //private key for making the variavle private
 	private :
 		int a,b;
	 //public defines can be acceible by any one
 		public :
 			void setdata(int x,int y)
 			{
 				a=x; b=y;
 				
			 }
			 void showdata()
			 {
			 	cout<<"The value of 'a' is"<<" "<<a<<" and the value of 'b' is "<<" "<<b<<".";
			 }
			 friend goal operator +(goal);
 };

//Operator overloading of + for further use in different form
 goal operator +(goal g)
 {
 	goal temp;
 	temp.a=g.a;
 	temp.b=g.b;
 	return (temp);
 }
 int main()
 {
 	goal g1,g2;
 	g1.setdata(44,57);
 	g2=+g1;//g2=operator +(g1) 
	g2.showdata();//Here we are calling the show function using object of goal
 	
 	
 }
 
//Operator overloading allows to overload any operator and change its functionality

