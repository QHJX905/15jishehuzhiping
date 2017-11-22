#include<iostream.h>
void main()
{
	int a;
		cout<<"please input :"<<endl;
	cin>>a;
	if(a<10)
		cout<<"a 小于10"<<endl;
	else
		if(a<100)
		   cout<<"a 在10~99之间"<<endl;
        else
	    	if(a<1000)
			cout<<"a 在100~999之间"<<endl;
            else
            cout<<"a 在1000以上"<<endl;
}
