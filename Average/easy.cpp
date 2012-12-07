#include<stdio.h>
#include<stdlib.h>

float average(int n);

int main()
{int x,y,i;
float avg;
printf("Number of grades \n ");
scanf("%i",&x);
printf("Add first grade \n ");
for(i=1;i<=x;i++)
	{printf("Add ");printf("%i",i);printf("'nd grade: \n");
     scanf("%i",&y);
	 avg=average(y);
	}
printf("%f\n",avg);	
}

float average(int b)
{ static float sum=0;
  sum+=b;
  static int n=0;
  n=n+1;
  return sum/n;
}
