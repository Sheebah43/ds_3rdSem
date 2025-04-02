 #include <stdio.h>

int main() {
	int i,n,X[100];

	printf("Enter the size of the array\n");
	scanf("%d",&n);

	printf("Enter elements:-\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&X[i]);
	} 
	for(i=0;i<n;i++)
	{
		printf("%d\t",X[i]);
	}
     
    return 0;
    //cannot have arr[n] and then use n as size, has to be constant->arr[constant]
}