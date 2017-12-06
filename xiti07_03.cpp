#include<iostream.h>
void main()
{
	int a[10],l,max,min,m,n,i,j;
    cout<<"请输入10个整数："<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	int*p,*q;
	p=q=a;
	max=min=a[0];
	for(i=1;i<10;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
			m=i;
		}

	}
	for(j=1;j<10;j++)
	{
		if(*(q+j)<min)
		{
			min=*(q+j);
			n=j;
		}
	}
	int temp;
	temp=*(p+m);
	*(p+m)=*(q+n);
	*(q+n)=temp;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"  ";
	}

}
	