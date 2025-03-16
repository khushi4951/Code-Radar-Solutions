// Your code here...  
int fibonacciSeries(int n)    
{    
 int n1=0,n2=1,n3,i;
 printf("%d %d",n1,n2); 
 if (n==1) printf("0");
 for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
 }