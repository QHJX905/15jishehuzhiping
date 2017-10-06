#include <iostream.h>
void main()
{
int m,i,leap,n;
i=0,n=0;
for(m=2000;m<=3000;m++)
{
	leap=1;
	{
	if(m%400==0)
		leap=1;
	else
		if(m%4==0&&m%100!=0)
			leap=1;
		else
			leap=0;
	}
	if(leap)
	{  
		cout<<"\t"<<m;
		i++;
		if(i%10==0)
			cout<<endl;
	}
	
}
if(i%10!=0)
	cout<<endl;
cout<<"i="<<i<<endl;
}