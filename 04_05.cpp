
#include <iostream.h>
void main()
{
	int m;
    cout << "1~99֮���ͬ����Ϊ:"<<endl;
	for(int i=99; i>=1; i--)
    {
        m = i*i;
        if( i<10 && i == m%10 ) 
            cout<< i << "    ͬ����   " << m << endl;
        else if( i>=10 && i == m%100 ) 
            cout<< i << "   ͬ����   " << m << endl;
    }
}
