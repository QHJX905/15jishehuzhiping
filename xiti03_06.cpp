
#include <iostream.h>
void main()
{
	int k;
	float r,s,l,pi;
    cout<<"Please input r,k:";
    cin>>r>>k;
	pi=3.14;
    s=pi*r*r;
    l=2*pi*r;
    switch(k)
	{
	 case 1:cout<<"s="<<s<<endl;break;
     case 2:cout<<"l="<<l<<endl;break;
     case 3:cout<<"s="<<s<<"l="<<l<<endl;break;
	}
}
