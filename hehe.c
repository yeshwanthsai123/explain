include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);

int main()
{
	int x=3,y=5;
	
	swap(x,y);
	printf("a is %d and b is %d\n",x,y);
	_swap(&x,&y);
	printf("a is %d and b is %d",x,y);
		
	return 0;
	
}
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("a is %d and b is %d\n",a,b);

}


void _swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
	printf("a is %d and b is %d\n",*a,*b);
}
