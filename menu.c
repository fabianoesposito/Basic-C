#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAXSIZE 100
#define MAX 1000
/*┌─────────────────────────────────┐
  │GLOBAL                           │
  │└► clrscr                        │
  │   └► Description:               │
  └─────────────────────────────────┘*/
void clrscr(void){
	printf("\033[2J");
	printf("\033[0;0f");
}
/*│     ├► STRING      - Description:             │*/
void concat(char s1[], char s2[]){
	int i, j;
	i=strlen(s1);
	for (j=0; s2[j] != '\0'; i++, j++){
		s1[i]=s2[j];
	}
	s1[i]='\0';
}

int check_vowel(char a){
	if(a >= 'A' && a <= 'Z'){
		a=a + 'a' - 'A';
	}
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
		return 1;
	}
	return 0;
}

int count_vowels(char a[]){
	int count=0, c=0, flag;
	char d;
	do{
		d=a[c];
		flag=check_vowel(d);
		if(flag == 1){
			count++;
		}
		c++;
	}while(d != '\0');
	return count;
}

int stringCompare(char str1[],char str2[]){
	int i=0,flag=0;
	while(str1[i]!='\0' && str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0 && str1[i]=='\0' && str2[i]=='\0'){
		return 1;
	}else{
		return 0;
	}
 
}

void stringCopy(char str1[],char str2[]){
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}

char *strrev(char *str){
	char *p1, *p2;
	if(! str || ! *str){
		return str;
	}
	for(p1=str, p2=str+strlen(str)-1; p2>p1; ++p1, --p2){
		*p1^=*p2;
		*p2^=*p1;
		*p1^=*p2;
	}
	return str;
}

void removeSpaces(char *str){
	int count = 0;
	for(int i = 0; str[i]; i++){
		if(str[i] != ' ')
			str[count++] = str[i];
	}
	str[count] = '\0';
}
//...
/*│     ├► TREE        - Description:             │*/
/*│     └► BINARY TREE - Description:             │
  └──────────────────────────────────────────────┘*/
void main(int argc, char const *argv[]){
	int scelta_menu=0;
	char torna='n';	
  	do{
  		clrscr();
		printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
		printf("│MAIN MENU                                                                     │\n");
		printf("│├► 0.  EXIT                                                                [●]│\n");
		printf("│└► 2.  MENU DATA-STRUCT                                                    [○]│\n");
		printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
		printf("CHOICE MENU: ");
		scanf("%d", &scelta_menu);
		switch(scelta_menu){
			case 0:{ //exit
				clrscr();
				exit(0);
			}break; //case 0
			
			case 1:{ //data-struct
				int scelta_datastruct=0;
				do{
					clrscr();
					printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                                                     │\n");
					printf("│└► 2.  DATA-STRUCT                                                            │\n");
					printf("│        ├► 0.  BACK TO MAIN MENU                                           [●]│\n");
					printf("│        ├► 2.  MENU STRING                                                 [○]│\n");
					printf("│        ├► 7.  MENU TREE                                                   [○]│\n");
					printf("│        └► 8.  MENU BINARY TREE                                            [○]│\n");
					printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
					printf("CHOICE DATA-STRUCT: ");
					scanf("%d", &scelta_datastruct);
					switch(scelta_datastruct){
						case 0:{
							clrscr();
							printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
							printf("│MAIN MENU                                                                     │\n");
							printf("│└► 2.  DATA-STRUCT                                                            │\n");
							printf("│       └► 0.  BACK TO MAIN MENU                                               │\n");
							printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
						}break;

						case 2:{
							int scelta_string=0, dim=0, k, x, min=0, max=0;
							char Str[dim];
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 2.  MENU STRING                                                     │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  OPERATIONS                                               │\n");
								printf("│              ├► 3.  SORTING                                                  │\n");
								printf("│              ├► 4.  SEARCHING                                             [○]│\n");
								printf("│              └► 5.  CHECK                                                    │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE STRING: ");
								scanf("%d",&scelta_string);
								switch(scelta_string){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 2.  MENU STRING                                                     │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► 2.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK STRING MENU                                  │\n");
											printf("│                     ├► 1.  ADD STRING WITHOUT CONCAT()                       │\n");
											printf("│                     ├► 2.  CONCAT STRING                                     │\n");
											printf("│                     ├► 3.  CONVERSION UPPERCASE TO LOWERCASE STRING          │\n");
											printf("│                     ├► 4.  REMOVE SPACES IN STRING                           │\n");
											printf("│                     ├► 5.  REMOVE ALL CHARACTERS IN A STRING EXCEPT ALPHABET │\n");
											printf("│                     ├► 6.  REVERSE STRING USING POINTER                      │\n");
											printf("│                     ├► 7.  REVERSE THE STRING                                │\n");
											printf("│                     ├► 8.  COPY STRING WITHOUT STRCPY()                      │\n");
											printf("│                     └► 9.  COPY CHAR ARRAY                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 2.  MENU STRING                                                     │\n");
													printf("│              └► 2.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK STRING MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  ADD STRING WITHOUT CONCAT()                       │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  CONCAT STRING                                     │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  CONVERSION UPPERCASE TO LOWERCASE STRING          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  REMOVE SPACES IN STRING                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  REMOVE ALL CHARACTERS IN A STRING EXCEPT ALPHABET │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  REVERSE STRING USING POINTER                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 7.  REVERSE THE STRING                                │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 8.  COPY STRING WITHOUT STRCPY()                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 9:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 9.  COPY CHAR ARRAY                                   │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► 3.  SORTING                                                  │\n");
											printf("│                     ├► 0.  BACK STRING MENU                                  │\n");
											printf("│                     └► 1.  STRING SORTING                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SORT: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 2.  MENU STRING                                                     │\n");
													printf("│              └► 3.  SORTING                                                  │\n");
													printf("│                     └► 0.  BACK STRING MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 1.  STRING SORTING                                    │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										int scelta_search=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► 4.  SEARCHING                                                │\n");
											printf("│                     ├► 0.  BACK STRING MENU                                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SEARCHING: ");
											scanf("%d",&scelta_search);
											switch(scelta_search){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 2.  MENU STRING                                                     │\n");
													printf("│              └► 4.  SEARCHING                                                │\n");
													printf("│                     └► 0.  BACK STRING MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► 5.  CHECK                                                    │\n");
											printf("│                     ├► 0.  BACK STRING MENU                                  │\n");
											printf("│                     ├► 1.  CHECK VOWELS IN A STRING                          │\n");
											printf("│                     ├► 2.  COMPARE STRINGS WITHOUT STRCMP()                  │\n");
											printf("│                     ├► 3.  COMPARE TWO STRINGS                               │\n");
											printf("│                     ├► 4.  COUNT FREQUENCY OF CHARACTERS IN A STRING         │\n");
											printf("│                     ├► 5.  COUNT TOT NUMBER UPPER/LOWERCASE IN STRING        │\n");
											printf("│                     ├► 6.  LENGHT OF A STRING                                │\n");
											printf("│                     ├► 7.  LENGHT OF STRING WITHOUT STRLEN()                 │\n");
											printf("│                     ├► 8.  PALINDROME USING ARRAY                            │\n");
											printf("│                     └► 9.  PALINDROME OF STRING                              │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 2.  MENU STRING                                                     │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						default:{
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► X.  DEFAULT: ERROR CHOICE!                                          │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s", &torna);
				}while((torna == 'n')&&(torna != 'y'));
			}break; //case 2 (data-struct)

			default:{ //default (main menu)
				do{
					clrscr();
					printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                                                     │\n");
					printf("│└► X.  DEFAULT: ERROR CHOICE!                                                 │\n");
					printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s", &torna);
					if(torna == 'n'){
						clrscr();
						exit(0);
					}
				}while((torna == 'n')&&(torna != 'y'));
			}break; //default (main menu)
		}
	}while((scelta_menu >= 0)||(scelta_menu <= 10));
}
/*
========
 OUTPUT
========
Enter a 3x3 matrix :
2 5 6
5 6 9
2 4 6

2
5
6
5
6
9
2
4
6


2
5
0
0
0
0
2
0
6

Inversed matrix :                                                                                                           
-0.000  0.500 -0.750
 1.000  0.000 -1.000
-0.667 -0.167  1.083
*/
/*
			case 5:{
				int scelta_string=0;
				do{
					clrscr();
					printf("                      _____________                        \n");
					printf("______________________|MENU STRING|________________________\n");
					printf("|0.  BACK MAIN MENU                                    |OK|\n");
					printf("|1.  ADD STRING WITHOUT CONCAT()                      V|OK|\n");
					printf("|2.  CHECK VOWELS IN A STRING                         V|OK|\n");
					printf("|3.  COMPARE STRINGS WITHOUT STRCMP()                 V|OK|\n");
					printf("|4.  COMPARE TWO STRINGS                              V|OK|\n");
					printf("|5.  CONCAT STRING                                    V|OK|\n");
					printf("|6.  CONVERSION UPPERCASE TO LOWERCASE STRING         V|OK|\n");
					printf("|7.  COPY STRING WITHOUT STRCPY()                     V|OK|\n");
					printf("|8.  COPY CHAR ARRAY                                  V|OK|\n");
					printf("|9.  COUNT FREQUENCY OF CHARACTERS IN A STRING        V|OK|\n");
					printf("|10. COUNT TOT NUMBER UPPER/LOWERCASE IN STRING       V|OK|\n");
					printf("|11. LENGHT OF A STRING                               V|OK|\n");
					printf("|12. LENGHT OF STRING WITHOUT STRLEN()                V|OK|\n");
					printf("|13. PALINDROME USING ARRAY                           V|OK|\n");
					printf("|14. PALINDROME OF STRING                             V|OK|\n");
					printf("|15. REMOVE SPACES IN STRING                          V|OK|\n");
					printf("|16. REMOVE ALL CHARACTERS IN A STRING EXCEPT ALPHABETV|OK|\n");
					printf("|17. REVERSE STRING USING POINTER                     V|OK|\n");
					printf("|18. REVERSE THE STRING                               V|OK|\n");
					printf("|19. STRING SORTING                                   V|OK|\n");
					printf("|_________________________________________________________|\n");
					printf("CHOICE STRING: ");
					scanf("%d", &scelta_string);
					switch(scelta_string){
						case 0:{
							clrscr();
						}break;

						case 1:{
							char s1[MAXSIZE], s2[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 1. ADD STRING WITHOUT CONCAT()\n");
								printf("Enter the first String: ");
								scanf("%s", s1);
								printf("Enter the second String: ");
								scanf("%s", s2);
								concat(s1, s2);
								printf("Resulting string is: %s\n", s1);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 2:{
							char array[MAXSIZE];
							int c;
							do{
								clrscr();
								printf("|STRING|-> 2. CHECK VOWELS IN A STRING\n");
								printf("Enter a string to check for vowels: ");
								scanf("%s", array);
								c=count_vowels(array);
								printf("Number of vowels in the string %s: are %d\n",array, c);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 3:{
							char str1[MAXSIZE], str2[MAXSIZE];
							int compare;
							do{
								clrscr();
								printf("|STRING|-> 3. COMPARE STRINGS WITHOUT STRCMP()\n");
								printf("Enter first string : ");
								scanf("%s",str1);
								printf("Enter second string : ");
								scanf("%s",str2);
								compare=stringCompare(str1,str2);
								if(compare == 1){
									printf("Strings are equal\n");
								}else{
									printf("Strings are not equal\n");
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 4:{
							char str1[MAXSIZE], str2[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 4. COMPARE TWO STRINGS\n");
								printf("Enter the first string: ");
								scanf("%s", str1);
								printf("Enter the second string: ");
								scanf("%s", str2);
								if(strcmp(str1,str2) == 0){
									printf("Strings are equal\n");
								}else{
									printf("Strings are not equal\n");
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 5:{
							char str1[MAXSIZE], str2[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 5. CONCAT STRING\n");
								printf("Enter the first string: ");
								scanf("%s", str1);
								printf("Enter the second string: ");
								scanf("%s", str2);
								strcat(str1,str2);
								printf("String after concatenation is: %s\n",str1);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 6:{
							char str[MAXSIZE];
							int i;
							do{
								clrscr();
								printf("|STRING|-> 6. CONVERSION UPPERCASE TO LOWERCASE STRING\n");
								printf("Enter string: ");
								scanf("%s", str);
								for(i=0; i<=strlen(str); i++){
									if(str[i] >= 65 && str[i] <= 90){
										str[i]=str[i]+32;
									}
								}
								printf("String in lowercase: %s\n",str);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 7:{
							char str1[MAXSIZE], str2[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 7. COPY STRING WITHOUT STRCPY()\n");
								printf("Enter any string: ");
								scanf("%s",str1);
								stringCopy(str1,str2);
								printf("After copying: %s\n",str2);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 8:{
							char source[]="C program", destination[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 8. COPY CHAR ARRAY\n");
								strcpy(destination, source);
								printf("Source string: %s\n", source);
								printf("Destination string: %s\n", destination);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 9:{
							char str[MAXSIZE];
							int c=0, count[26]={0};
							do{
								clrscr();
								printf("|STRING|-> 9. COUNT FREQUENCY OF CHARACTERS IN A STRING\n");
								printf("Enter a string : ");
								scanf("%s", str);
								while(str[c] != '\0'){
									if(str[c] >= 'a' && str[c] <= 'z'){
										count[str[c]-'a']++;
									}
									c++;
								}
								for(c=0; c<26; c++){
									if(count[c] != 0){
										printf("%c occurs %d times in the string\n",c+'a',count[c]);
									}
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 10:{
							int upper=0, lower=0, i;
							char ch[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 10. COUNT TOT NUMBER UPPER/LOWERCASE IN STRING\n");
								printf("Enter a string: ");
								scanf("%s", ch);
								//gets(ch);
								i=0;
								while(ch[i] != '\0'){
									if(ch[i] >= 'A' && ch[i] <= 'Z'){
										upper++;
									}
									if(ch[i] >= 'a' && ch[i] <= 'z'){
										lower++;
									}
									i++;
								}
								printf("Uppercase Letters: %d\n", upper);
								printf("Lowercase Letters: %d\n", lower);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 11:{
							char a[MAXSIZE];
							int length;
							do{
								clrscr();
								printf("|STRING|-> 11. LENGHT OF A STRING\n");
								printf("Enter a string to calculate it's length: ");
								scanf("%s", a);
								length=strlen(a);
								printf("Length of entered string is: %d\n",length);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 12:{
							char s[MAXSIZE], i;
							int length;
							do{
								clrscr();
								printf("|STRING|-> 12. LENGHT OF STRING WITHOUT STRLEN()\n");
								printf("Enter a string: ");
								scanf("%s",s);
								for(i=0; s[i]!='\0'; ++i);
								printf("Length of string: %d\n",i);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 13:{
							char word[MAXSIZE];
							int length, counter;
							do{
								clrscr();
								printf("|STRING|-> 13. \n");
								printf("Please enter a string: ");
								scanf("%s",word);
								length=strlen(word);
								int flag=1;
								for(counter = 0; counter < length/2 && flag; counter++){
									if(word[counter] != word[length-counter-1]){
										flag = 0;
										break;
									}
								}
								if(flag){
									printf("%s is a palindrome\n", word);
								}else{
									printf("%s is not a palindrome\n", word);
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 14:{
							char text[MAXSIZE];
							int begin, middle, end, length=0;
							do{
								clrscr();
								printf("|STRING|-> 14. PALINDROME OF STRING\n");
								printf("Enter the string to check if it is a palindrome or not: ");
								scanf("%s", text);
								while(text[length] != '\0'){
									length++;
								}
								end=length - 1;
								middle=length/2;
								for(begin=0; begin<middle; begin++){
									if(text[begin] != text[end]){
										printf("Entered String is not a palindrome string\n");
										break;
									}
									end--;
								}
								if(begin == middle){
									printf("Entered String is a palindrome string\n");
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 15:{
							int i=0, j=0, len;
							char buff[MAXSIZE];
							char str[] = "g  eeks   for ge  eeks  ";
							do{
								clrscr();
								printf("|STRING|-> 15. REMOVE WHITE SPACE IN STRING\n");
								printf("String before remove spaces is: %s\n", str);
								removeSpaces(str);
								printf("String after removing spaces is: %s\n", str);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 16:{
							char line[MAXSIZE];
							int i, j;
							do{
								clrscr();
								printf("|STRING|-> 16. REMOVE ALL CHARACTERS IN A STRING EXCEPT ALPHABET\n");
								printf("Enter a string: ");
								scanf("%s", line);
								for(i=0; line[i]!='\0'; ++i){
									while(!((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&& line[i]<='Z')|| line[i]=='\0')){
										for(j=i; line[j]!='\0'; ++j){
											line[j]=line[j+1];
										}
										line[j]='\0';
									}
								}
								printf("Output String: ");
								puts(line);
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 17:{
							char str_array[MAX], *ptr;
							int i, len;
							do{
								clrscr();
								printf("|STRING|-> 17. REVERSE STRING USING POINTER\n");
								printf("Enter a string: ");
								scanf("%s", str_array);
								ptr=str_array;
								for(i=0; i<MAX; i++){
									if(*ptr == '\0'){
										break;
									}
									ptr++;
								}
								len=i;
								ptr--;
								printf("Reversed String is: ");
								for(i=len; i>0; i--){
									printf("%c",*ptr--);
								}
								printf("\n");
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
						
						case 18:{
							char arr[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 18. REVERSE THE STRING\n");
								printf("Enter a string: ");
								scanf("%s", arr);
								printf("Reversed String is: %s\n",strrev(arr));
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 19:{
							int n;
							char str[MAXSIZE][MAXSIZE],temp[MAXSIZE];
							do{
								clrscr();
								printf("|STRING|-> 19. STRING SORTING\n");
								printf("Enter the no. of string to be sorted: ");
								scanf("%d",&n);
								for(int i=0; i<n; i++){
									scanf("%s", str[i]);
								}
								for(int i=0; i<n; i++){
									for(int j=i; j<n; j++){
										if(strcmp(str[i],str[j]) > 0){
											strcpy(temp,str[i]);
											strcpy(str[i],str[j]);
											strcpy(str[j],temp);
										}
									}
								}
								printf("\nThe sorted string:\n");
								for(int i=0; i<=n; i++){
									puts(str[i]);
								}
								printf("Do you want to back to STRING MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s", &torna);
				}while((torna == 'n')&&(torna != 'y'));
			}break; //case 5
*/