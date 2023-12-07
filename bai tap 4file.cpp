#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*f;
	f=fopen("bt03.txt","r");
	if(f==NULL){
		printf("loi tao hoac mo file");
		exit(0);
	}
	char str[1000];
	int n=2;
	for(int i=0;i<n;i++){
	fscanf(f,"%[^\n]",str);
	printf("%s\n",str);
	}
	fclose(f);
	return(0);
}
