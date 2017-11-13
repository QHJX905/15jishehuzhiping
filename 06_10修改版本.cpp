#include<iostream.h>
#include<stdio.h>
float fun(double h)
{
  return(int)((h+0.005)*100)/(float)100;	
}
void main()
{
  float fun(double h);
  double x;
  cin>>x;
  fun((double) x) ;
  printf("%.2f",fun((double) x) );
  cout<<endl;
}

