#include <iostream.h>
#include <math.h>
void main()
{
	float a,b,c,s,area;
    cout<<"Please input a,b,c:";
    cin>>a>>b>>c;
    s=(a+b+c)/2.0;
	area=sqrt (s*(s-a)*(s-b)*(s-c));
	cout<<"Čý˝ÇĐÎľÄĂćťýĘÇŁş"<<"area="<<area<<endl;
}
