#include <stdio.h>
//When array is not full
/*int add_at_end(int a[], int freePos, int data){
	a[freePos] = data;
    freePos++;
    return freePos;
}

int main() {
int a[10];
int i, n, freePos;
printf("Enter the number of elements:-\n");
scanf( "%d", &n);
printf("Enter the elements:-\n");
for(i=0; i<n; i++){
	scanf("%d", &a[i]);
}
freePos = n;
freePos = add_at_end(a, freePos, 65);
for(i=0; i<freePos; i++){
	printf("%d ", a[i]);
}
return 0;
}*/
//When array is full
int add_at_end(int a[], int b[], int n, int freePos,int data){
	int i;
for(i=0; i<n; i++){
	b[i] = a[i];
}
b[freePos] = data;
freePos++;
return freePos;
}

int main() {
int a[3];
int i, n, freePos;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements:-\n");
for(i=0; i<n; i++){
	scanf("%d", &a[i]);
}
/*for(i=0; i<n; i++){
	scanf ("%d ", &a[i]);
}
This one isn't working well for some reason and I have no clue what's going on
*/
int size = sizeof(a)/sizeof(a[0]);
freePos = n;
if(n == size){
	int b[size+2];
    freePos = add_at_end(a, b, size, freePos, 65);
    for(i=0; i<freePos; i++){
    	printf("%d ", b[i]);
	}
}
return 0;
}
