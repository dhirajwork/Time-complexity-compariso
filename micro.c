/* Include all the relevant libraries*/

#include<stdio.h>
#include<time.h>
#include<malloc.h>
#include<stdlib.h>

//function declaration or prototype
void swap(int *, int *);
void insertionsort(int [], int );
void selectionsort(int [],int  );
void bubblesort(int [], int );
void sorts(int [], int );
void display(int a[], int);
int main(){
	FILE *fptr;
	fptr = fopen("/home/dhiraj/input.txt","r"); 		//enter the path for input
	if(fptr==NULL){
    printf("not found");
    exit(0);
	}
	int *a,i,n,multi,j=1;
	a=(int*)malloc(sizeof(int));
	printf("\n\nNAME OF ALGORITHM \t\t NO. OF DATA \t\t TIME REQUIRED \n\n");
 
do{
	printf(" ENTER NUMBER OF DATA OR ZERO TO EXIT"); 
	scanf("  %d", &n);
	if(n!=0)
	{
		a=(int*)realloc(a,n*sizeof(int));
		for(i=0;i<(n);i++)
			fscanf(fptr, "%d,", &a[i] );
  /*for(i=0;i<(j*10);i++)
    printf("%d ",a[i]);
   printf(" \n \n");*/
			sorts(a,n);
	}
}while(n!=0);
fclose(fptr);
return 0;
}


void sorts(int a[], int n){
    clock_t start, end;
	start= clock();
   	insertionsort(a,n);
    end=clock();
	start=end-start;
	printf("INSERTION SORT\t\t\t %d \t\t\t %.*f \n",n,7, (float)start/CLOCKS_PER_SEC);
	display(a,n);
    start=clock();
 	bubblesort(a,n);
	start=clock()-start;
	printf( "BUBBLE SORT\t\t\t %d \t\t\t %.*f \n",n,7,(float)start/CLOCKS_PER_SEC);
	display(a,n);
    start=clock();
    selectionsort(a,n);
    start=clock()-start;
    printf( "SELECTION SORT\t\t\t %d \t\t\t %.*f \n",n,7 ,(float)start/CLOCKS_PER_SEC);
    display(a,n);
}
void swap(int *a , int *b ){
	int temp= *a;
	*a=*b;
	*b=temp;
}

/*Implementing different sorts for comparison*/

void bubblesort(int a[], int n){
	int i,j, temp;
	for (i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
		}
	}
}
void insertionsort(int a[], int n){
	int i,j,temp;
	for(i=1;i<n;i++){
        j=i-1;
        temp=a[j+1];
        while((temp<a[j])&&(j>=0)){
			a[j+1]=a[j];
			j--;
        }
		a[j+1]=temp;
	}
}
void selectionsort(int a[], int n){
	int i,j,temp,k;
	for(i=0;i<n;i++){ 
		temp=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[temp])
			temp=j;
		}
		k=a[temp];
		a[temp]=a[i];
		a[i]=k;
	}
}
void display(int a[], int n){
    FILE *f;
    f=fopen("/home/dhiraj/output.txt","a+");
    int i;
    for(i=0;i<n;i++)
        fprintf(f," %d,", a[i]);
    fprintf(f,"\n \n \n");
    fclose(f);
}
