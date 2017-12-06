#include<iostream.h>
#include"string"
void main()
{
	static char a[100],b[50],c[50];
	cout<<"ÇëÊäÈë×Ö·û´®a,b:"<<endl;
	gets(a);
	gets(b);
	int n;
	cout<<"ÇëÊäÈë×Ö·û´®b²åÈëµ½×Ö·û´®aµÄÖ¸¶¨Î»ÖÃn:"<<endl;
	cin>>n;
	int lena,lenb;
	lena=strlen(a); 
	lenb=strlen(b);
    for(int i=0;i<(lena-n);i++) 
	{
		c[i]=a[n+i]; 
	}
	 for(int k=0;k<(lena-n);k++) 
	{
		*(a+n+lenb+k)=c[k]; 
	}
    for(int j=0;j<lenb;j++) 
	{ 
        *(a+n+j) = b[j]; 
	}
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	cout<<endl;
}
