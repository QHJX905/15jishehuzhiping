#include<iostream.h>
void main()
{
	int a[10],i,j;
    cout<<"请输入10个整数："<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	int*p,*q;
	p=a;
	q=&a[9];
	int temp;
	while(p<q)
	{
	    temp=*p;
	    *p=*q;
	    *q=temp;
		p++;
		q--;
	}
    for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}