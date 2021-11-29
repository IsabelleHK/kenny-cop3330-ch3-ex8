/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Isabelle Kenny
 */
 
 #include <stdio.h>
 int main(){
 	int n;
 	scanf("%d", &n);
 	
 	if(n%2 == 0){
 		printf("\nThe number %d is even", n);
	}
	else{
		printf("\nThe number %d is odd", n);
	}
	 
	return 0; 	
 }
