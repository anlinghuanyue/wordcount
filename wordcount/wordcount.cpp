
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
 using   namespace  std;
 int countword(int strLenth,char str[]){
	int sum=1;
	char a=' ';
	for(int i=0;i<strLenth;i++){
		if((str[i]==' '&&str[i+1]!=' ')||str[i]==','&&str[i+1]!=','){
			sum++;
	}
	}
	//printf("%c",str[5]);
	printf("%d",sum);
	return sum;
}
int main(int argc, char *argv[])
{
//	printf("%s",argv[1]) ;
    
    FILE *file;
    
    
    file=fopen(argv[2],"r");

    char str[256];    int n(0);
    fscanf(file,"%[^\n]%s",str);
	int strLenth; //读入字符串个数为1，所以返回值为1    
	



	printf("%s\n",str);
	
    
    strLenth=strlen(str);
	if(strcmp(argv[1],"-w")==0) {
		countword(strLenth,str);
	}  
	else{
		printf("\n%d\n",strLenth);
   
	
	
	} 
	fclose(file); 
	system("pause");
	
}

