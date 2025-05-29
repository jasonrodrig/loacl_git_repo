#include<stdio.h>
#include<stdlib.h>
int main(){
        char *pc =(char *)malloc(16*sizeof(char));
        printf("pc = %x\n",pc);
	
        pc[0] = 0x04;
	
	pc[1] = 0x04;
	
	pc[2] = 0x00;
        
        pc[3] = 0x00;
	
/*	pc[4] = 0x04;

        pc[5] = 0x04;

        pc[6] = 0x00;

        pc[7] = 0x00;
        
	pc[8] = 0x08;

        pc[9] = 0x08;

        pc[10] = 0X00;

        pc[11] = 0X00;

        pc[12] = 0x04;

        pc[13] = 0x40;

        pc[14] = 0X00;

        pc[15] = 0X00;

*/
	int *pi= (int*) pc;
	
	printf("pi = %x\n",pi);
        
	
	for(int i =0;i<4;i++){
	printf("%d\n",pi[i]);
	}
	
	return 0;

}
