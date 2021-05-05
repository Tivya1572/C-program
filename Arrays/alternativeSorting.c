#include<math.h>
void maxmin(int a[],int size)
{
	int i,j,temp;
	for(i=0; i<size-1; i++){
               for(j=0; j<size-i-1; j++){
                    if(a[j] < a[j+1]){
                        temp = a[j];
                         a[j] = a[j+1];
                         a[j+1] = temp;
                    }
               }
           }

	for(i=0,j=size-1;i<=ceil(size/2);i++,j--)
	{
		printf("%d ",a[i]);
		if(i!=j)
		printf("%d ",a[j]);
	}

}
void main()
{
	int size,p,i;
	printf("enter array size:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("enter array elements:");
		scanf("%d",&a[i]);
	}
	maxmin(a,size);
}
