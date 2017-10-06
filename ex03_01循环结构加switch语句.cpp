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
     case 1:cout<<"a 小于10"<<endl;break;
     case 2:cout<<"a 在10~99之间"<<endl;break;
     case 3:cout<<"a 在100~999之间"<<endl;break;
	 default:cout<<"a 在1000以上"<<endl;break;
	}
}