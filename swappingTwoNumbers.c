
#include <stdio.h>
int main(){
    int i,j;
 printf("Enter Two Numbers: ");
 scanf("%d %d",&i,&j);
  i = i +j;
    j = i-j;
    i = i -j;
 printf("After Swapping First Number i = %d\n",i);
    printf("After Swapping Second Number j = %d\n",j);

return 0;
}
