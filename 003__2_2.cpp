#include<iostream.h>
void main()
{
	int a,b;
		cout<<"please input :"<<endl;
	cin>>a;
		if(a<10)
		b=1;
		else
		if(a<100)
			b=2;
           else
	    	if(a<1000)
			b=3;
else
b=4;
switch(b)
{
case 1:cout<<"小于10"<<endl;break;
case 2:cout<<"10-99"<<endl;break;
case 3:cout<<"100-999"<<endl;break;
case 4:cout<<"1000以上"<<endl;break;
}
}