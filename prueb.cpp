#include<stdio.h>


int main(){
	
	int time;
	
	printf("What time is it? \t");
	scanf("%d",&time);
	
	if(time == 12){
		printf("\nnoon\n");
	}
	else if(time == 0){
		printf("good midnigh\n");
	}
	else if(time >= 0 && time < 12){
		printf("good morning\n");
	}
	else if(time > 12 && time < 18){
		printf("good evening\n");
	}
	else if(time >= 18 && time < 24){
		printf("good night\n");
	}	
	else {
		printf("system error: horario imcompatible\n");
	}
	
	return 0;
}
