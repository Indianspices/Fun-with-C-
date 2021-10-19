#include<iostream>
using namespace std;
 class goal
 {
 	private :
 		int a,b;
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
 


