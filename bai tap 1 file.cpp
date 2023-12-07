#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f=fopen("bai_088.txt","w");
	if(f==NULL){
		printf("loi tao hoac mo file");
		exit(0);
	}
	int n;
	printf("\nnhap vao so n");
	scanf("%d",&n);
	fprintf(f,"%d",n);
	fclose(f);
	return(0);
}
