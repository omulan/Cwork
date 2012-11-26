#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int x; //x= number of students
int y; //y=number of students/group
int j;
int temp;// temporary variable for a number

int main()
{ printf(" Write the number of students \n ");
  scanf("%d", &x );
 printf(" Write the number of students per group \n");
  scanf("%d", &y);
  int i;
  int a[x];
srand(time(NULL));	
	for(i=0;i<x;i++)
        a[i]=i+1;
	for(i=0;i<x;i++)	  
		printf ("  %d", a[i]); 
	
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0;i<x;i++)
		{ j=((rand()%x));
		  temp=a[i];	  
		  a[i]=a[j];
		  a[j]=temp; 
		}	
 int count=0;
		
		
 for(i=1;i<=(x/y);i++)
 { printf("*");
   for(j=count; j<count+y;j++)
	{printf ("  %d", a[j]);
     
	}
	count=count+y;
	printf("\n"); 
}
 printf("you have to chose a group");
	if(count<x)
	{	for(i=count;i<x;i++)
	printf("  %d", a[i]);
	}
	return 0; 
}
