#include <stdio.h>
#include <stdlib.h>
#define size 1000000
int main()
{
  int c, n, array[1000],d, t;
  FILE *f, *fw;
  f=fopen("unsorted.txt","w");
   for (c=1; c<=size; c++)
   {
    n=rand()%1000+1;
    printf("%d\n",n);
    fprintf(f,"%d\n",n);
   }
   fclose(f);
  f=fopen("unsorted.txt","r");
  for (int i=0;i<=c;i++)
  {
    fscanf(f,"%d", &array[i]);
  }
  fclose(f);

  for (c=1; c<=size;c++)
    {
    d=c;

    while (d>0 && array[d-1]>array[d])
    {
      t= array[d];
      array[d]= array[d-1];
      array[d-1]=t;

      d--;
    }
    }
    printf("Sorted:\n");
    f=fopen("sorted.txt","w");
    for (int c=0; c<=size;c++)
  {
    printf("%d\n",array[c]);
    fprintf(f,"%d\n",array[c]);
  }
  fclose(f);
    return 0;
}
