//思路：通过选择最大值的方法，依次将最大、、、挑选出来
#define N 10
main()
{
  int d[N+1];
  int i,j,t;
  printf("Input %d scores:\n",N);
  for(i=1;i<=N;j++)
  {
    scanf("%d",&d[i]);
   }
   printf("\n");
   for(i=1;i<N;i++)
   {
    for(j=i+1;j<=N;j++)
    {
      if(d[i]<d[j])
      {
        t = d[i];
        d[i] = d[j];
        d[j] = t;
       }
       printf("The sorted scores:\n");
       for(i = 1;i<=N;i++)
        printf("%4d",d[i]);
       printf("\n");
   }
        
    
