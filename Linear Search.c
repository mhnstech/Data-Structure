/*Muhammed Muhnis T K
  Linear Search
  JEC21CS083*/
#include<stdio.h>
int read(int a[],int n);
int search(int a[],int n,int x);
int main()
{
	int a[100],n,x;
	printf("Enter the Limit of Array : ");
	scanf("%d",&n);
	read(a,n);
	printf("Enter the Element to be Searched in the Array : ");
	scanf("%d",&x);
	search(a,n,x);
	return 0;
}
int read(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("Enter the %d th Element of the Array : ",i+1);
		scanf("%d",&a[i]);
	}
	return 0;
}