#include<stdio.h>
#include<string.h>

main(){
	char email[100];
	char password[100];
	char valid_email[]= "admin@gmail.com";
	char valid_password[]="123456";
	printf("enter your email :-");
	gets(email);
	printf("enter your password:-");
	gets(password);
	
	if (strcmp(email, valid_email) == 0 && strcmp(password, valid_password) == 0) {
		printf("login succesfully");
	}
	else{
		printf("login failed please try again");
	}
}
	
