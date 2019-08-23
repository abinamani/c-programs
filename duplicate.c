#include <stdio.h>

int main(void) {
	// your code goes here
	char a[]="abina";
	int i,len=0;
	//finding length without using builtin function;
	for(i=0;a[i];i++,len++);
	printf("%d",len);
	//printing duplicate elements;
	for(int j=0;j<len;j++){
	    for(int k=j+1;k<len;k++){
	        if(a[j]==a[k]){
	            printf("%c",a[k]);
	        }
	    }
	}
	return 0;
}

