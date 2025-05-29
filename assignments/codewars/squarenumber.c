#include<stdio.h>
void square_digits (int n)
{
  int len = 0;
  int rem ; 
  int i,j;
  int temp=n;
  int result=0;

  if(n==0)
    len=1;
  while(temp!=0){
    temp=temp/10;
    len++;
  }
  
  int arr1[len],arr2[len];
  temp=n;
  
  for(i=0;i<len;i++){
    rem = temp%10;
    temp=temp/10;
    arr1[i]=rem;
  }
  
  for(i=0;i<len;i++){
    arr2[i]=arr1[i]*arr1[i];    
  }
  
  for(j=len-1;j>=0;j--){
    printf("%d",arr2[j]);
    }
  
  int multiplier=1;
  for(i=len-1;i>=0;i++){
    result+=arr2[i]*multiplier;
    multiplier*=10;
    }

  printf("result : %d",result);

}

int main(){
	int n = 9119;
	return 0;
}
