/*
realize a programm that return a sums from a sequence of
integers using the gauss formula to sum n numbers

ask the user enter the value of n
	n(n+1)/(2)	1+2+3+4+5+6+n
*/

#include<iostream>
#include <stdio.h>

using namespace std;

int gauss(int);

int main(){
	int n,sum;
	
	cout<<"Digite un numero: ";
	cin>>n;
	sum = gauss(n);
	cout<<"la suma de la secuencia "<<n<<"="<<sum;
	
	return 0;
}

int gauss(int n){
	if(n>1){
		return n + gauss(n-1);
	}else{
		return 1;
	}
}
