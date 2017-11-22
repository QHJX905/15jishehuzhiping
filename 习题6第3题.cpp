#include<iostream.h>
#define M 4
#define N 4
void main()
{
   int a[M][N];
   int  i,j;
   int sum=0;
  cout<<"ÇëÊäÈë¸Ã 4*4 ¾ØÕó\n";
  for (i=0;i<4;i++)
  for (j=0;j<4;j++)
  cin>>a[i][j];
  for (i=0;i<4;i++)
  {
      sum+=a[i][i];
  }
  cout<<"sum="<<sum<<endl;
  for(i=0;i<M;i++)
  for(j=0;j<N;j++)
  {
	if(i<j)
	  a[i][j]=a[i][j]+1;
	else if(i==j)
		a[i][j]=a[i][j];
	else
	  a[i][j]=a[i][j]-1;
  }
	  for(i=0;i<M;i++)
	  {
		  for(j=0;j<N;j++)
			  cout<<a[i][j]<<"   ";
		  cout<<endl;
	  }
}