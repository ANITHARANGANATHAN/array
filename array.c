#include<stdio.h>
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int *ptr=&arr;
  int i,j,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      printf("%d",*((ptr+i*3)+j));
      printf("\n");
  }
  printf("\n\n");
  for(j=0;j<3;j++)
  {
    sum=sum+arr[i][i];
  }
  printf("\n the sum of diagonal elements of a matrix=%d",sum);
  return 0;
}
