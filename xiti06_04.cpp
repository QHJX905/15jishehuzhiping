#include"iostream.h"  
int f(int n) 
 {   
	 if(n==1)    
       return 1; 
	else   if(n==2)  
	   return 1; 
	 else 
       return f(n-1)+f(n-2);
 }
void main()  
 {   
	int n,i;     
	n=20;
	cout<<"The fibonacci you want is:" <<endl;
	for(i=1;i<=n;i++)
	{
	cout<<f(i)<<"  ";  
	}
 } 
