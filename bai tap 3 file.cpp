#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*f;
	f=fopen("bt03.txt","w");
	if(f==NULL){
		printf("loi tao hoac mo file");
		exit(1);
	}
	int n;
	printf("nhap vao so luong don ma ban muon");
	scanf("%d",&n);
	char str1[1000];
	for(int i=0;i<n;i++){
		printf("nhap vao noi dung dong %d\n",i+1);
		fflush(stdin);
		gets(str1);
		fprintf(f,"%s",mang[i]);	
	}
	fclose(f);
	return 0;
}

