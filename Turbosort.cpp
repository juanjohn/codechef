#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
        int n;
	int a[1000000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp,key;
	for(int i=1;i<n;i++)
	{
		for(int j=(i-1);j>=0;j--)
		{
			key=a[j+1];
			if(a[j+1]<=a[j])
			{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
			else
			{
			break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
	      printf("%d\n",a[i]);
	}
	t=clock()-t;
	printf("%f",((float)t)/CLOCKS_PER_SEC*10000);
	return 0;
}

