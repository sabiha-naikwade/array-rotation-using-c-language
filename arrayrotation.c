#include<stdio.h>
int main()
{
  int n,arr[1000],i,p,j,temp,dir;
  printf("Enter size\n");
  scanf("%d",&n);
  printf("Enter array elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the direction (0 for left and 1 for right)\n");
  scanf("%d",&dir);
  if(dir==0)
  {
    printf("Enter the position\n");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
      temp=arr[0];
      for(j=0;j<n;j++)
      {
       arr[j]=arr[j+1];
      }
      arr[n-1]=temp;
    }
    printf("Resulted array with left shift:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
  }
  else if(dir==1){
    printf("Enter the position\n");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
      temp=arr[n-1];
      for(j=n-1;j>=0;j--)
      {
       arr[j]=arr[j-1];
      }
      arr[0]=temp;
    }
    printf("Resulted array with right shift:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
  }
  else{
    printf("Please enter the values either 1 or 0 only!!!");
  }
}