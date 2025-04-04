#include <stdio.h>
int main()
{
	int n,m,o,p,Z[o],X[n], Y[m]={99,88,77};//not cool
	int A[5]={10,20,30}, B[]={111,222,333}, i;
	
	for(i=0;i<7;i++)
	{
		printf("%d\t",A[i]);
	} //prints zero for garbage values upto its size, then garbage values
	printf("\nbreak\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",B[i]);
	} //it's printing A's initial values in place of its garbage values
	printf("\n");
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&X[i]);
	} 
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",X[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",Y[i]);
	} // for some reason it's copying X's elements; also provides garbage values if the m!=n
	//attempt2:can't initialize a variable size array
	
	Y[0]=11;
	Y[1]=22;
	Y[3]=44;
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",Y[i]);
	}//it's copying B's elements for the garbage values 
	printf("\n");
	printf("Enter the size of the array Z\n");
	scanf("%d",&o);
	printf("Enter elements:-\n");
	for(i=0;i<o;i++)
	{
		scanf("%d\t",&Z[i]);
	}
		for(i=0;i<o;i++)
	{
		printf("%d\t",&Z[i]);
	}
	printf("\n");
	printf("Enter the size of the array Z again\n");
	scanf("%d",&p);
	Z[0]=25;
	Z[1]=35;
	Z[4]=65;
		printf("\n");
	for(i=0;i<p;i++)
	{
		printf("%d\t",&Z[i]);
	}
}
