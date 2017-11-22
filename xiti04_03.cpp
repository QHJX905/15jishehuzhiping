#include <iostream.h>
void main()
{
	int n,i;
	cout<<"Please input n:"<<endl;
    cin>>n;
	i=0;
	for(;n!=1;)
	{	
		if(n%2==0)
		{
		   n=n/2;
	       i++;
		}
	    else
	    {
			n=3*n+1;
            i++;
		}
	}
	cout<<"该数的角谷猜想步骤数值为："<<i-1<<endl;
}
