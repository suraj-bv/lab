#include<stdio.h>
#define max 25
void main(){
	int frag[max],b[max],f[max],i,j,nb,nf,temp,highest=0;
	static int bf[max],ff[max];
	printf("\tMemory management system worstfit\n");
	printf("Enter the no. of blocks:\n");
	scanf("%d",&nb);
	printf("Enter the no. of files:\n");
	scanf("%d",&nf);
	printf("Enter the size of blocks:\n");
	for(i=1;i<=nb;i++){
		printf("block %d:",i);
		scanf("%d",&b[i]);
	}
	printf("Enter the size of the files:\n");
	for(i=1;i<=nf;i++){
		printf("File %d:",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++){
		for(j=1;j<=nb;j++){
			if(bf[i]!=1){
				temp=b[j]-f[i];
				if(temp>=0)
					if(highest<temp){
						ff[i]=j;
						highest=temp;
					}
			}
		}
		frag[i]=highest;
		bf[ff[i]]=1;
		highest=0;
	}
		printf("\nFile_no:\tFile_size:\tBlock_no:\tBlock_size:\tFragment:");
		for(i=1;i<=nf;i++)
			printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
		printf("\n");
	}
