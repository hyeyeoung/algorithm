#include<stdio.h>
int main(){
	int num,i,min=1000001,max=-1000001;
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++){
		scanf("%d",&array[i]);
		if(min>array[i])
			min=array[i];
		if(max<array[i])
			max=array[i];
	}
	printf("%d %d",min,max);
	return 0;
}