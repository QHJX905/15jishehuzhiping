#include <iostream.h>
void main()
{
	int a,b,i=0;
	cout<<"Please input a:";
    cin>>a;
	while(a!=0)
	{   
		i=i+1;
		b=a%10; 
		a=a/10;
	}
	    cout<<i<<endl;
	switch(i)
	{
     case 1:cout<<"a С��10"<<endl;break;
     case 2:cout<<"a ��10~99֮��"<<endl;break;
     case 3:cout<<"a ��100~999֮��"<<endl;break;
	 default:cout<<"a ��1000����"<<endl;break;
	}
}