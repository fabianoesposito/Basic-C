#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAXSIZE 1000
/*┌─────────────────────────────────┐
  │GLOBAL                           │
  │└► clrscr                        │
  │   └► Description:               │
  └─────────────────────────────────┘*/
void clrscr(void){
	printf("\033[2J");
	printf("\033[0;0f");
}
#include "basic.h"
#include "data_struct.h"

void main(int argc,char const *argv[]){
	int scelta_menu=0;
	char torna='n';	
/*┌────────────────────────────────┐
  │├► [●]: completato/funziona     │
  │├► [ ]: manca                   │
  │├► [○]: in sviluppo             │
  └────────────────────────────────┘*/
  	do{
  		clrscr();
		printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
		printf("│MAIN MENU                                                                     │\n");
		printf("│├► 0.  EXIT                                                                [●]│\n");
		printf("│├► 1.  MENU BASIC                                                          [●]│\n");
		printf("│└► 2.  MENU DATA-STRUCT                                                    [○]│\n");
		printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
		printf("CHOICE MENU: ");
		scanf("%d",&scelta_menu);
		switch(scelta_menu){
			case 0:{ //exit
				clrscr();
				exit(0);
			}break; //case 0

			case 1:{ //basic
				int scelta_basic=0;
				do{
					clrscr();
					printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                                                     │\n");
					printf("│└► 1.  MENU BASIC                                                             │\n");
					printf("│       ├► 0.  BACK TO MAIN MENU                                               │\n");
					printf("│       ├► 1.  HELLO WORLD                                                     │\n");
					printf("│       ├► 2.  SIZES OF TYPE'S VARIABLES                                       │\n");
					printf("│       ├► 3.  ASCII TABLE                                                     │\n");
					printf("│       ├► 4.  MENU PATTERNS                                                   │\n");
					printf("│       ├► 5.  MENU NUMBERS                                                    │\n");
					printf("│       ├► 6.  MENU MATH FORMULA                                               │\n");
					printf("│       ├► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
					printf("│       ├► 8.  MENU CONVERSIONS                                                │\n");
					printf("│       └► 9.  MENU RANDPASS                                                   │\n");
					printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
					printf("CHOICE BASIC: ");
					scanf("%d",&scelta_basic);
					switch(scelta_basic){
						case 0:{
							clrscr();
							printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
							printf("│MAIN MENU                                                                     │\n");
							printf("│└► 1.  MENU BASIC                                                             │\n");
							printf("│       └► 0.  BACK TO MAIN MENU                                               │\n");
							printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
						}break;

						case 1:{
							do{	
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 1.  HELLO WORLD                                                     │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								hello_world();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 2:{
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 2.  SIZES OF TYPE'S VARIABLES                                       │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								var_sizes();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 3:{
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 3.  ASCII TABLE                                                     │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								ascii_table();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 4:{
							int scelta_patterns=0,n=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 4.  MENU PATTERNS                                                   │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  BINARY PATTERN                                           │\n");
								printf("│              ├► 2.  DIAMOND PATTERN                                          │\n");
								printf("│              ├► 3.  DIAMOND STAR OUTLINE                                     │\n");
								printf("│              ├► 4.  FLOYD'S TRIANGLE                                         │\n");
								printf("│              ├► 5.  HOLLOW DIAMOND                                           │\n");
								printf("│              ├► 6.  HOLLOW SQUARE                                            │\n");
								printf("│              ├► 7.  HOURGLASS PATTERN                                        │\n");
								printf("│              ├► 8.  NESTED STAR-HASH PYRAMID                                 │\n");
								printf("│              ├► 9.  NUMBER ALPHABET PATTERN                                  │\n");
								printf("│              ├► 10. NUMBER DIAMOND PATTERN                                   │\n");
								printf("│              ├► 11. NUMBER PATTERN-1                                         │\n");
								printf("│              ├► 12. NUMBER PATTERN-2                                         │\n");
								printf("│              ├► 13. NUMBER PATTERN-3                                         │\n");
								printf("│              ├► 14. NUMBER PATTERN-4                                         │\n");
								printf("│              ├► 15. NUMBER PYRAMID                                           │\n");
								printf("│              ├► 16. PASCAL TRIANGLE                                          │\n");
								printf("│              ├► 17. PASCAL TRIANGLE-2                                        │\n");
								printf("│              ├► 18. PASCAL'S TRIANGLE WITHOUT FUNCTION                       │\n");
								printf("│              ├► 19. PATTERN-1                                                │\n");
								printf("│              ├► 20. PATTERN-2                                                │\n");
								printf("│              ├► 21. PATTERN-3                                                │\n");
								printf("│              ├► 22. PATTERN-4                                                │\n");
								printf("│              ├► 23. PATTERN-5                                                │\n");
								printf("│              ├► 24. PATTERN-6                                                │\n");
								printf("│              ├► 25. PATTERN-7                                                │\n");
								printf("│              ├► 26. PATTERN-8                                                │\n");
								printf("│              ├► 27. PATTERN-9                                                │\n");
								printf("│              ├► 28. PATTERN-10                                               │\n");
								printf("│              ├► 29. PYRAMID                                                  │\n");
								printf("│              ├► 30. RECTANGLE PATTERN                                        │\n");
								printf("│              ├► 31. RECTANGLE STAR PATTERN                                   │\n");
								printf("│              ├► 32. REVERSE STAR TRIANGLE                                    │\n");
								printf("│              ├► 33. RHOMBUS PATTERN                                          │\n");
								printf("│              ├► 34. SQUARE KITE PATTERN                                      │\n");
								printf("│              ├► 35. SQUARE STAR PATTERN                                      │\n");
								printf("│              ├► 36. TRIANGLE WITH ONLY BORDERS                               │\n");
								printf("│              └► 37. X PATTERN                                                │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE PATTERNS: ");
								scanf("%d",&scelta_patterns);
								switch(scelta_patterns){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU BASIC                                                             │\n");
										printf("│       └► 4.  MENU PATTERNS                                                   │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;

									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 1.  BINARY PATTERN                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											binary_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 2.  DIAMOND PATTERN                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											diamond_patter(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 3.  DIAMOND STAR OUTLINE                                     │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											diamond_star_outline(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 4.  FLOYD'S TRIANGLE                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											floyds_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 5.  HOLLOW DIAMOND                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											hollow_diamond(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 6.  HOLLOW SQUARE                                            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											hollow_square(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 7.  HOURGLASS PATTERN                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											hourglass_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 8.  NESTED STAR-HASH PYRAMID                                 │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											nested_star_hash_pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 9.  NUMBER ALPHABET PATTERN                                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_aplphabet_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 10. NUMBER DIAMOND PATTERN                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row[min 1,max 5]: ");
											scanf("%d",&n);
											number_diamond_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 11:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 11. NUMBER PATTERN-1                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_pattern_1(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 12:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 12. NUMBER PATTERN-2                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_pattern_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 13. NUMBER PATTERN-3                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_pattern_3(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 14:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 14. NUMBER PATTERN-4                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_pattern_4(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 15:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 15. NUMBER PYRAMID                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											number_pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 16:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 16. PASCAL TRIANGLE                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pascal_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 17:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 17. PASCAL TRIANGLE-2                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pascal_triangle_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 18:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 18. PASCAL'S TRIANGLE WITHOUT USING FUNCTION                 │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pascals_triangle_without_function(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 19:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 19. PATTERN-1                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_1(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 20:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 20. PATTERN-2                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 21:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 21. PATTERN-3                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_3(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 22:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 22. PATTERN-4                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_4(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 23:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 23. PATTERN-5                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_5(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 24:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 24. PATTERN-6                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_6(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 25:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 25. PATTERN-7                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_7(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 26:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 26. PATTERN-8                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_8(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 27:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 27. PATTERN-9                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_9(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 28:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 28. PATTERN-10                                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pattern_10(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 29:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 29. PYRAMID                                                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 30:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 30. RECTANGLE PATTERN                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											rectangle_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 31:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 31. RECTANGLE STAR PATTERN                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											int m=n;
											retangle_star_pattern(n,m);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 32:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 32. REVERSE STAR TRIANGLE                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											reverse_star_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 33:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 33. RHOMBUS PATTERN                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											rhombus_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 34:{
										
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 34. SQUARE KITE PATTERN                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											square_kite_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 35:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 35. SQUARE STAR PATTERN                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											square_star_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 36:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 36. TRIANGLE WITH ONLY BORDERS                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											triangle_borders('*',' ',n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 37:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                                   │\n");
											printf("│              └► 37. X PATTERN                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d",&n);
											x_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 4.  MENU PATTERN                                                    │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 5:{
							int a,b,scelta_numbers=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 5.  MENU NUMBERS                                                    │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  ADD 'n' NUMBERS                                          │\n");
								printf("│              ├► 2.  ARMSTRONG NUMBER                                         │\n");
								printf("│              ├► 3.  AVERAGE OF NUMBERS                                       │\n");
								printf("│              ├► 4.  SQUARE 'n' NUMBERS                                       │\n");
								printf("│              ├► 5.  SQUARE NUMBERS BY USER                                   │\n");
								printf("│              ├► 6.  SUM OF NATURAL NUMBERS (USING FOR)                       │\n");
								printf("│              ├► 7.  CHECK IF A NUMBER IS PRIME                               │\n");
								printf("│              ├► 8.  CHECK IF A NUMBER IS INTEGER OR FLOAT                    │\n");
								printf("│              ├► 9.  CHECK IF A NUMBER IS POSITIVE OR NEGATIVE                │\n");
								printf("│              ├► 10. PRIME NUMBERS BETWEEN INTERVAL                           │\n");
								printf("│              ├► 11. FACTORIAL OF A NUMBER                                    │\n");
								printf("│              ├► 12. FACTORS OF A NUMBER                                      │\n");
								printf("│              ├► 13. FIBONACCI SERIES                                         │\n");
								printf("│              ├► 14. EVEN OR ODD                                              │\n");
								printf("│              ├► 15. SUM OF TWO BINARY NUMBERS                                │\n");
								printf("│              ├► 16. POWER OF NUMBERS (x^n)                                   │\n");
								printf("│              ├► 17. HARMONIC SEIRES                                          │\n");
								printf("│              ├► 18. HCF & LCM                                                │\n");
								printf("│              ├► 19. LARGEST OF 'n' NUMBERS                                   │\n");
								printf("│              ├► 20. MULTIPLICATION TABLE                                     │\n");
								printf("│              ├► 21. CHECK IF NUMBER PALINDROME                               │\n");
								printf("│              ├► 22. PERFECT NUMBER                                           │\n");
								printf("│              ├► 23. PRIMES TILL 'n'                                          │\n");
								printf("│              ├► 24. REVERSE OF A NUMBER                                      │\n");
								printf("│              ├► 25. SQUARE ROOT OF A NUMBER                                  │\n");
								printf("│              ├► 26. SUM OF FACTORIAL SEIRES 1/1!,...,1/N!                    │\n");
								printf("│              ├► 27. SWAP WITH TEMP VARIABLE                                  │\n");
								printf("│              ├► 28. SWAP WITHOUT TEMP VARIABLE                               │\n");
								printf("│              └► 29. SWAP WITH POINTERS                                       │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE NUMBERS: ");
								scanf("%d",&scelta_numbers);
								switch(scelta_numbers){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU BASIC                                                             │\n");
										printf("│       └► 5.  MENU NUMBERS                                                    │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 1.  ADD 'n' NUMBERS                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											add_n_numbers();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 2:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 2.  ARMSTRONG NUMBER                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a Number to check if it is an Armstrong number or not: ");
											scanf("%d",&n);
											armstrong_number(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 3. AVERAGE OF NUMBERS                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf ("Enter a digit you want take average of : ");
											scanf("%d",&n);
											average_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 4. SQUARE 'n' NUMBERS                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the range of numbers: ");
											scanf("%d",&n);
											square_n(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										int n,sqr;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 5.  SQUARE NUMBERS BY USER                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											sqr=n*n;
											printf("Square of %d is %d\n",n,sqr);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 6.  SUM OF NATURAL NUMBERS (USING FOR)                       │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											sum_natural(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 7:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 7.  CHECK IF A NUMBER IS PRIME                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											check_prime(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 8:{
										char n[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 8.  CHECK IF A NUMBER IS INTEGER OR FLOAT                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%s",n);
											check_intfloat(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 9:{
										double n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 9.  CHECK IF A NUMBER IS POSITIVE OR NEGATIVE                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%lf",&n);
											check_posneg(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 10:{
										int n1,n2;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 10. PRIME NUMBERS BETWEEN INTERVAL                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter two numbers: ");
											scanf("%d %d",&n1,&n2);
											prime_interval(n1,n2);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 11:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 11. FACTORIAL OF A NUMBER                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d",&n);
											printf("Factorial of %d is: %ld\n",n,factorial(n));
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 12:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 12. FACTORS OF A NUMBER                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d",&n);
											Factors_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 13. FIBONACCI SERIES                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											fibonacci();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 14:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 14. EVEN OR ODD                                              │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											even_or_odd();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 15:{
										long binary1,binary2;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 15. SUM OF TWO BINARY NUMBERS                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the first binary number: ");
											scanf("%ld",&binary1);
											printf("Enter the second binary number: ");
											scanf("%ld",&binary2);
											sum_binarynumbs(binary1,binary2);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 16:{
										int base,exponent;
										do{
											clrscr();

											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 16. POWER OF NUMBERS (x^n)                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a base number: ");
											scanf("%d",&base);
											printf("Enter an exponent: ");
											scanf("%d",&exponent);
											power_numb(base,exponent);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 17:{
										double n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 17. HARMONIC SEIRES                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Please Enter a value for 'n': ");
											scanf("%lf",&n);
											harmonic_series(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 18:{
										int x,y;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 18. HCF & LCM                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter two integers: ");
											scanf("%d%d",&x,&y);
											hcf_lcm(x,y);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 19:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 19. LARGEST OF 'n' NUMBERS                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the values of n: ");
											scanf("%d",&n);
											largest_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 20:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 20. MULTIPLICATION TABLE                                     │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter n: ");
											scanf("%d",&n);
											mult_table(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 21:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 21. CHECK IF NUMBER PALINDROME??                             │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number to check if it is a palindrome or not: ");
											scanf("%d",&n);
											palindrome(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 22:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 22. PERFECT NUMBER                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number to check if it is an perfect number or not: ");
											scanf("%d",&n);
											perfect_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 23:{
										int a,b,c;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 23. PRIMES TILL 'n'                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter 3 numbers:");
											scanf("%d %d %d",&a,&b,&c);
											int big=( a>b && a>c ? a:b>c ? b:c);
											printf("The biggest number is: %d\n",big);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 24:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 24. REVERSE OF A NUMBER                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number to reverse: ");
											scanf("%d",&n);
											reverse_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 25:{
										double num;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 25. SQUARE ROOT OF A NUMBER (MATH.H)?                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter number to find square root: ");
											scanf("%lf",&num);
											double result=sqrt(num);
											printf("The square root of %lf is : %lf\n",num,result);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 26:{
										double n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 26. SUM OF FACTORIAL SEIRES 1/1!,...,1/N!                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the value : ");
											scanf("%lf",&n);
											double sum=sumseries(n);
											printf("\nSum of the above series: %lf\n",sum);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 27:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 27. SWAP WITH TEMP VARIABLE                                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d",&a);
											printf("b: ");
											scanf("%d",&b);
											swap1(a,b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 28:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 28. SWAP WITHOUT TEMP VARIABLE                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d",&a);
											printf("b: ");
											scanf("%d",&b);
											swap2(a,b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 29:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► 29. SWAP WITH POINTERS                                       │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d",&a);
											printf("b: ");
											scanf("%d",&b);
											swap3(&a,&b);
											printf("a:%d b:%d\n",a,b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 5.  MENU NUMBERS                                                    │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 6:{
							int scelta_math_formula=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  AREA OF CIRCLE                                           │\n");
								printf("│              ├► 2.  AREA OF TRIANGLE                                         │\n");
								printf("│              ├► 3.  AREA OF PARALLELOGRAM                                    │\n");
								printf("│              ├► 4.  AREA OF RHOMBUS                                          │\n");
								printf("│              ├► 5.  RIGHT ANGLED TRIANGLE                                    │\n");
								printf("│              ├► 6.  PROBABILITY DISTRIBUTION                                 │\n");
								printf("│              ├► 7.  SIN(x)                                                   │\n");
								printf("│              ├► 8.  COS(x)                                                   │\n");
								printf("│              ├► 9.  COS(x) SERIES                                            │\n");
								printf("│              ├► 10. SURFACE AREA VOLUME CUBE                                 │\n");
								printf("│              ├► 11. ROOTS OF A QUADR. EQUATION                               │\n");
								printf("│              ├► 12. GREATEST AMONG THREE NUMBER                              │\n");
								printf("│              ├► 13. LEAP YEAR                                                │\n");
								printf("│              ├► 14. PERFECT SQUARE                                           │\n");
								printf("│              ├► 15. SIMPLE INTEREST                                          │\n");
								printf("│              ├► 16. SUM OF EVEN NUMBERS 1 TO N                               │\n");
								printf("│              ├► 17. SUM OF ARITHMETIC PROG. SERIES                           │\n");
								printf("│              ├► 18. SUM OF GEOMETRIC PROG. SERIES                            │\n");
								printf("│              ├► 19. SUM OF HARMONIC PROG. SERIES                             │\n");
								printf("│              ├► 20. VOLUME & SURFACE AREA CYLINDER                           │\n");
								printf("│              ├► 21. VOLUME & SURFACE AREA CUBOID                             │\n");
								printf("│              ├► 22. VOLUME & SURFACE AREA CONE                               │\n");
								printf("│              └► 23. VOLUME & SURFACE AREA SPHARE                             │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE MATH FORMULA: ");
								scanf("%d",&scelta_math_formula);
								switch(scelta_math_formula){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU BASIC                                                             │\n");
										printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int radius;
										float area;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 1.  AREA OF CIRCLE                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											area_circle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 2.  AREA OF TRIANGLE                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											area_triangle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 3.  AREA OF PARALLELOGRAM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											area_parallelogram();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 4.  AREA OF RHOMBUS                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											area_rhombus();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 5.  AREA OF RIGHT ANGLED TRIANGLE                            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											area_right_angled_triangle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 6.  PROBABILITY DISTRIBUTION                                 │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											probability_distribution();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 7.  SIN(x)                                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											sin_x();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 8.  COS(x)                                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											cos_x();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 9.  COS(x) SERIES                                            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											cosx_series();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 10. SURFACE AREA VOLUME CUBE                                 │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											surface_area_volume_cube();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 11:{
										float a,b,c;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 11. ROOTS OF A QUADR. EQUATION                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter coefficients a,b and c: ");
											scanf("%f%f%f",&a,&b,&c);
											roots_quadr_equation(a,b,c);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 12:{
										float a,b,c;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 12. GREATEST AMONG THREE NUMBER                              │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter three numbers: ");
											scanf("%f %f %f",&a,&b,&c);
											greatest_three_number(a,b,c);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 13. LEAP YEAR                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											leap_year();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 14:{
										int i,number;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 14. PERFECT SQUARE                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number to check for perfect square: ");
											scanf("%d",&number);
											perfect_square(number);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 15:{
										float principal_amt,rate,simple_intt;
										int time;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 15. SIMPLE INTEREST                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the values of Principal amount,rate and time: ");
											scanf("%f %f %d",&principal_amt,&rate,&time);
											simple_interest(principal_amt,rate,time);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 16:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 16. SUM OF EVEN NUMBERS 1 TO N                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d",&n);
											int sum=((n/2)*((n/2)+1));
											printf("Sum of even numbers between 1 to %d: %d\n",n,sum);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 17:{
										int a,d,n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 17. SUM OF ARITHMETIC PROG. SERIES                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the first term value of the A.P. series: ");
											scanf("%d",&a);
											printf("Enter the total numbersin the A.P. series: ");
											scanf("%d",&n);
											printf("Enter the common difference of A.P. series: ");
											scanf("%d",&d);
											sum_aps(a,n,d);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 18:{
										float a,r,last_term,sum =0;
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 18. SUM OF GEOMETRIC PROG. SERIES                            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the first term of the G.P. series: ");
											scanf("%f",&a);
											printf("Enter the total numbersin the G.P. series: ");
											scanf("%d",&n);
											printf("Enter the common ratio of G.P. series: ");
											scanf("%f",&r);
											sum_gps(a,n,r);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 19:{
										int n;
										float sum;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 19. SUM OF HARMONIC PROG. SERIES                             │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("1 + 1/2 + 1/3 + ... + 1/n\n");
											printf("Enter the value of n: ");
											scanf("%d",&n);
											printf("the Sum of H.P Series is = %f\n",sum_hps(n,sum));
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 20:{
										float radius,height;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 20. VOLUME & SURFACE AREA CYLINDER                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter value for radius and height of a cylinder: ");
											scanf("%f%f",&radius,&height);
											vol_sur_cylinder(radius,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 21:{
										float width,height,length;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 21. VOLUME & SURFACE AREA CUBOID                             │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter value of width,length & height of the cuboids: ");
											scanf("%f%f%f",&width,&length,&height);
											vol_sur_cuboid(width,length,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 22:{
										float radius,height;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 22. VOLUME & SURFACE AREA CONE                               │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter value of radius and height of a cone: ");
											scanf("%f%f",&radius,&height);
											vol_sur_cone(radius,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 23:{
										float radius;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► 23. VOLUME & SURFACE AREA SPHARE                             │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter radius of the sphere: ");
											scanf("%f",&radius);
											vol_sur_sphare(radius);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA                                               │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 7:{
							int scelta_eps_rmin=0,base=2;
							float e1=1.0,epsilon1,rmins;
							double e2=1.0,epsilon2,rmind;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  MACHINE EPSILON (SINGLE/DOUBLE PRECISION)                │\n");
								printf("│              └► 2.  MINUMUM REAL NUMBER (SINGLE/DOUBLE PRECISION)            │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE MATH FORMULA: ");
								scanf("%d",&scelta_eps_rmin);
								switch(scelta_eps_rmin){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU MENU BASIC                                                        │\n");
										printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;

									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
											printf("│              └► 1.  MACHINE EPSILON (SINGLE/DOUBLE PRECISION)                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											epsilon1=epsilon_macchina_singola_precisione(base,e1);
											epsilon2=epsilon_macchina_doppia_precisione(base,e2);
											printf("Machine Epsilon (Single Precision): %.16f\n",epsilon1);
											printf("Machine Epsilon (Double Precision): %.32f\n",epsilon2);
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
											printf("│              └► 2.  MINUMUM REAL NUMBER (SINGLE/DOUBLE PRECISION)            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											rmins=minimo_rappresentabile_singola_precisione(e1,base);
											rmind=minimo_rappresentabile_doppia_precisione(e2,base);
											printf("Minimum Real Number (Single Precision): %E\n",rmins);
											printf("Minimum Real Number (Double Precision): %E\n",rmind);
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                                  │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 8:{
							int scelta_conversions=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  BINARY TO DECIMAL                                        │\n");
								printf("│              ├► 2.  BINARY TO OCTAL                                          │\n");
								printf("│              ├► 3.  BINARY TO HEXADECIMAL                                    │\n");
								printf("│              ├► 4.  UPPERCASE TO LOWERCASE STRING                            │\n");
								printf("│              ├► 5.  CHAR TO REVERSE CHAR                                     │\n");
								printf("│              ├► 6.  NUMBER TO ROMAN NUMBER                                   │\n");
								printf("│              ├► 7.  ROMAN NUMBER TO NUMBER                                   │\n");
								printf("│              ├► 8.  DECIMAL TO HEXADECIMAL                                   │\n");
								printf("│              ├► 9.  DECIMAL TO OCTAL                                         │\n");
								printf("│              ├► 10. DECIMAL TO BINARY                                        │\n");
								printf("│              ├► 11. OCTAL TO DECIMAL                                         │\n");
								printf("│              ├► 12. OCTAL TO BINARY                                          │\n");
								printf("│              ├► 13. CELSIUS TO FAHRENHEIT                                    │\n");
								printf("│              └► 14. FAHRENHEIT TO CELSIUS                                    │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE CONVERSIONS: ");
								scanf("%d",&scelta_conversions);
								switch(scelta_conversions){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU BASIC                                                             │\n");
										printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int n=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 1.  BINARY TO DECIMAL                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in decimal: ");
											scanf("%d",&n);
											printf("%d in binary = %d in decimal\n",n,binary_decimal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										long int n=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 2.  BINARY TO OCTAL                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in octal: ");
											scanf("%ld",&n);
											printf("%lo in binary = %lo in octal\n",n,binary_octal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										long int n=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 3.  BINARY TO HEXADECIMAL                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in hexadecimal: ");
											scanf("%ld",&n);
											printf("%lo in binary = %lX in hexadecimal\n",n,binary_hexadecimal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 4:{
										char str[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 4.  UPPERCASE TO LOWERCASE STRING                            │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter string: ");
											scanf("%s",str);
											printf("%s in uppercase = ",str);
											uppercase_lowercase(str);
											printf("%s in lowercase\n",str);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										char strn[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 5.  CHAR TO REVERSE CHAR                                     │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter string: ");
											scanf("%s",strn);
											printf("%s not reversed = ",strn);
											reverse_char(strn);
											printf(" reversed\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										int j;
										long number;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 6.  NUMBER TO ROMAN NUMBER                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%ld",&number);
											printf("%ld number = ",number);
											if(number <= 0){
												printf("Invalid number");
											}
											while (number != 0){
												if(number >= 1000){
													postdigit('M',number/1000);
													number=number-(number/1000)*1000;
												}else if(number >= 500){
													if(number < (500+4*100)){
														postdigit('D',number/500);
														number=number-(number/500)*500;
													}else{
														predigit('C','M');
														number=number-(1000-100);
													}
												}else if(number >= 100){
													if(number < (100+3*100)){
														postdigit('C',number/100);
														number=number-(number/100)*100;
													}else{
														predigit('L','D');
														number=number-(500-100);
													}
												}else if(number >= 50 ){
													if(number < (50+4*10)){
														postdigit('L',number/50);
														number=number-(number/50)*50;
													}else{
														predigit('X','C');
														number=number-(100-10);
													}
												}else if(number >= 10){
													if(number < (10+3*10))
																	{
														postdigit('X',number/10);
														number=number-(number/10)*10;
													}else{
														predigit('X','L');
														number=number-(50-10);
													}
												}else if(number >= 5){
													if(number < (5+4*1)){
														postdigit('V',number/5);
														number=number-(number/5)*5;
													}else{
														predigit('I','X');
														number=number-(10-1);
													}
												}else if(number >= 1){
													if(number < 4){
														postdigit('I',number/1);
														number=number-(number/1)*1;
													}else{
														predigit('I','V');
														number=number-(5-1);
													}
												}
											}
											for(j=0; j < i; j++){
												printf("%c",romanval[j]);
											}
											printf(" roman number\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 7:{
										char str[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 7.  ROMAN NUMBER TO NUMBER                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the roman number: ");
											scanf("%s",str);
											printf("%s roman number = %d decimal\n",str,romanToDecimal(str));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 8:{
										long decimal=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 8.  DECIMAL TO HEXADECIMAL                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a decimal number to convert in hexadecimal: ");
											scanf("%ld",&decimal);
											printf("%ld decimal =",decimal);
											decimal_hexadecimal(decimal);
											printf(" hexadecimal\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 9:{
										long int decimal=0;
										int octal[MAXSIZE],i=1;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 9.  DECIMAL TO OCTAL                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a decimal number to convert in octal: ");
											scanf("%ld",&decimal);
											printf("%ld decimal = ",decimal);
											decimal_octal(decimal,octal);
											printf(" octal\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 10:{
										int n=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 10. DECIMAL TO BINARY                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter decimal number to convert in binary: ");
											scanf("%d",&n);
											printf("%d decimal = ",n);
											decimal_binary(n);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 11:{
										long int octal=0,decimal=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 11. OCTAL TO DECIMAL?                                        │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter a octal number to convert in decimal: ");
											scanf("%ld",&octal);
											printf("%ld octal = ",octal);
											printf("%d decimal\n",octal_decimal(octal,decimal));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									case 12:{
										char octal[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 12. OCTAL TO BINARY                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter octal number to convert in binary: ");
											scanf("%s",octal);
											printf("%s in octal = ",octal);
											octal_binary(octal);
											printf(" binary\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 13:{
										float fahrenheit,celsius;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 13. CELSIUS TO FAHRENHEIT                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter temperature in degrees celsius: ");
											scanf("%f",&celsius);
											fahrenheit=celsius_fahrenheit(celsius,fahrenheit);
											printf("%f°C = %f°F\n",celsius,fahrenheit);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 14:{
										int fahrenheit;
										double celsius;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► 14. FAHRENHEIT TO CELSIUS                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter temperature in degrees fahrenheit: ");
											scanf("%d",&fahrenheit);
											celsius=fahrenheit_celsius(fahrenheit,celsius);
											printf("%d°F = %lf°C\n",fahrenheit,celsius);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 8.  MENU CONVERSIONS                                                │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 9:{
							int scelta_randpass=0,length=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► 9.  MENU RANDPASS                                                   │\n");
								printf("│              ├► 0.  BACK BASIC MENU                                          │\n");
								printf("│              ├► 1.  C-U + C-L + NUM + SYM                                    │\n");
								printf("│              ├► 2.  C-U                                                      │\n");
								printf("│              ├► 3.        C-L                                                │\n");
								printf("│              ├► 4.              NUM                                          │\n");
								printf("│              ├► 5.                    SYM                                    │\n");
								printf("│              ├► 6.  C-U + C-L                                                │\n");
								printf("│              ├► 7.  C-U + C-L + NUM                                          │\n");
								printf("│              ├► 8.  C-U + C-L       + SYM                                    │\n");
								printf("│              ├► 9.  C-U       + NUM                                          │\n");
								printf("│              ├► 10. C-U             + SYM                                    │\n");
								printf("│              ├► 11.       C-L + NUM                                          │\n");
								printf("│              ├► 12.       C-L       + SYM                                    │\n");
								printf("│              └► 13.             NUM + SYM                                    │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE RANDPASS: ");
								scanf("%d",&scelta_randpass);
								switch(scelta_randpass){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU BASIC                                                             │\n");
										printf("│       └► 9.  MENU RANDPASS                                                   │\n");
										printf("│              └► 0.  BACK BASIC MENU                                          │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 1.  C-U + C-L + NUM + SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 2.  C-U                                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass(length,65,90);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 3.        C-L                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass(length,97,122);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 4.              NUM                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass(length,48,57);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 5.                    SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 6.  C-U + C-L                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cl_cu(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 7.  C-U + C-L + NUM                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cl_cu_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 8.  C-U + C-L       + SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cl_cu_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 9.  C-U       + NUM                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cu_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 10. C-U             + SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cu_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 11:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 11.       C-L + NUM                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cl_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 12:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 12.       C-L       + SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_cl_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► 13.             NUM + SYM                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d",&length);
											randpass_num_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU BASIC                                                             │\n");
											printf("│       └► 9.  MENU RANDPASS                                                   │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						default:{
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU BASIC                                                             │\n");
								printf("│       └► X.  DEFAULT: ERROR CHOICE!                                          │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s",&torna);
				}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
			}break; //case 1 (basic)

			case 2:{ //data-struct
				int scelta_datastruct=0;
				do{
					clrscr();
					printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                                                     │\n");
					printf("│└► 2.  DATA-STRUCT                                                            │\n");
					printf("│       ├► 0.  BACK TO MAIN MENU                                               │\n");
					printf("│       ├► 1.  MENU ARRAY                                                      │\n");
					printf("│       ├► 2.  MENU STRING                                                  [○]│\n");
					printf("│       ├► 3.  MENU MATRIX                                                     │\n");
					printf("│       ├► 4.  MENU STACK                                                      │\n");
					printf("│       ├► 5.  MENU QUEUE                                                      │\n");
					printf("│       ├► 6.  MENU LIST                                                       │\n");
					printf("│       ├► 7.  MENU TREE                                                    [ ]│\n");
					printf("│       └► 8.  MENU BINARY TREE                                             [ ]│\n");
					printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
					printf("CHOICE DATA-STRUCT: ");
					scanf("%d",&scelta_datastruct);
					switch(scelta_datastruct){
						case 0:{
							clrscr();
							printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
							printf("│MAIN MENU                                                                     │\n");
							printf("│└► 2.  DATA-STRUCT                                                            │\n");
							printf("│       └► 0.  BACK TO MAIN MENU                                               │\n");
							printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
						}break;

						case 1:{
							int scelta_array=0,dim=0,A[dim],k,x,min=0,max=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 1.  MENU ARRAY                                                      │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  OPERATIONS                                               │\n");
								printf("│              ├► 3.  SORTING                                                  │\n");
								printf("│              ├► 4.  SEARCHING                                                │\n");
								printf("│              └► 5.  CHECK                                                 [ ]│\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE ARRAY: ");
								scanf("%d",&scelta_array);
								switch(scelta_array){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 1.  MENU ARRAY                                                      │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Enter array dim: ");
											scanf("%d",&dim);
											ins_array(dim,A);
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► 2.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU                                   │\n");
											printf("│                     ├► 1.  k+A                                               │\n");
											printf("│                     ├► 2.  k*A                                               │\n");
											printf("│                     ├► 3.  A+A                                               │\n");
											printf("│                     ├► 4.  A*A                                               │\n");
											printf("│                     ├► 5.  REVERSE                                           │\n");
											printf("│                     └► 6.  MAX/MIN                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 1.  MENU ARRAY                                                      │\n");
													printf("│              └► 2.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK ARRAY MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  k+A                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Enter k value: ");
														scanf("%d",&k);
														cost_piu_array(k,A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  k*A                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Enter k value: ");
														scanf("%d",&k);
														cost_per_array(k,A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  A+A                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														A_piu_A(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  A*A                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														A_per_A(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  REVERSE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														inversione_array(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  MAX/MIN                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														max=massimo(A,dim,max);
														min=minimo(A,dim,min);
														printf("MAX(A[%d])=%d,min(A[%d])=%d\n",dim,max,dim,min);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► 3.  SORTING                                                  │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU                                   │\n");
											printf("│                     ├► 1.  BUBBLE    IT                                      │\n");
											printf("│                     ├► 2.  SELECTION IT                                      │\n");
											printf("│                     ├► 3.  INSERTION IT                                      │\n");
											printf("│                     ├► 4.  MERGE     IT                                      │\n");
											printf("│                     ├► 5.  QUICK     IT                                      │\n");
											printf("│                     ├► 6.  SHELL     IT                                   [ ]│\n");
											printf("│                     ├► 7.  BUBBLE    RE                                      │\n");
											printf("│                     ├► 8.  SELECTION RE                                      │\n");
											printf("│                     ├► 9.  INSERTION RE                                      │\n");
											printf("│                     ├► 10. MERGE     RE                                      │\n");
											printf("│                     ├► 11. QUICK     RE                                      │\n");
											printf("│                     └► 12. SHELL     RE                                   [ ]│\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SORT: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 1.  MENU ARRAY                                                      │\n");
													printf("│              └► 3.  SORTING                                                  │\n");
													printf("│                     └► 0.  BACK ARRAY MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 1.  BUBBLE IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														bubble_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 2.  SELECTION IT                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														sel_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 3.  INSERTION IT                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														ins_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 4.  MERGE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														merge_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 5.  QUICK IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														quick_I(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 6.  SHELL IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														//shell sort it
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 7.  BUBBLE RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														bubble_R(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 8.  SELECTION RE                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														sel_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 9:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 9.  INSERTION RE                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														ins_R(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 10:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 10. MERGE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														merge_R(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 11:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 11. QUICK RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														quick_R(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 12:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► 12. SHELL RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														//shell sort re
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 3.  SORTING                                                  │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										int scelta_search=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► 4.  SEARCHING                                                │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU                                   │\n");
											printf("│                     ├► 1.  LINEAR IT                                         │\n");
											printf("│                     ├► 2.  BINARY IT                                         │\n");
											printf("│                     ├► 3.  LINEAR RE                                      [ ]│\n");
											printf("│                     └► 4.  BINARY RE                                      [ ]│\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SEARCHING: ");
											scanf("%d",&scelta_search);
											switch(scelta_search){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 1.  MENU ARRAY                                                      │\n");
													printf("│              └► 4.  SEARCHING                                                │\n");
													printf("│                     └► 0.  BACK ARRAY MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► 1.  LINEAR IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Enter value for search: ");
														scanf("%d",&x);
														int result=linear_I(A,dim,x);
														if(result == -1){
															printf("Value %d is not in array!\n",x);
														}else{
															printf("Value %d is in %d° position!!!\n",x,result+1);
														}
														print_array(dim,A);
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► 2.  BINARY IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Enter value for search: ");
														scanf("%d",&x);
														int result=binary_I(A,0,dim-1,x);
														if(result == -1){
															printf("Value %d is not in array!\n",x);
														}else{
															printf("Value %d is in %d° position!!!\n",x,result+1);
														}
														print_array(dim,A);
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► 3.  LINEAR RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► 4.  BINARY RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 1.  MENU ARRAY                                                      │\n");
														printf("│              └► 4.  SEARCHING                                                │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► 5.  CHECK                                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 1.  MENU ARRAY                                                      │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;
						
						case 2:{
							int scelta_string=0,dim=0,k,x,min=0,max=0;
							char Str1[MAXSIZE], Str2[MAXSIZE], Str3[MAXSIZE][MAXSIZE];
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
								printf("│              ├► 4.  SEARCHING                                             [ ]│\n");
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
											ins_string(1,Str1,Str2,0,Str3);
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														ins_string(2,Str1,Str2,0,Str3);
														printf("Before concat():\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														concat(Str1,Str2);
														printf("After concat():\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														ins_string(2,Str1,Str2,0,Str3);
														printf("Before strcat():\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														strcat(Str1,Str2);
														printf("After strcat():\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														printf("Before conversion:\n");
														print_string(1,Str1,Str2,0,Str3);
														conversion_upper_lower_string(Str1);
														printf("After conversion:\n");
														print_string(1,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														char Str1[]="g  eeks   for ge  eeks  .";
														printf("Before remove spaces:\n");
														print_string(1,Str1,Str2,0,Str3);
														removeSpaces(Str1);
														printf("After remove spaces:\n");
														print_string(1,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													int j=0;
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  REMOVE ALL CHARACTERS IN A STRING EXCEPT ALPHABET │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Before remove characters:\n");
														print_string(1,Str1,Str2,0,Str3);
														remove_characters_string(Str1);
														printf("After remove characters:\n");
														print_string(1,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														printf("Before reverse:\n");
														print_string(1,Str1,Str2,0,Str3);
														reverse_string_pointer(1,Str1);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														printf("Before reverse:\n");
														print_string(1,Str1,Str2,0,Str3);
														strrev(Str1);
														printf("After reverse:\n");
														print_string(1,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														printf("Before copy:\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														copy_string_without_strcpy(Str1,Str2);
														printf("After copy:\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														ins_string(2,Str1,Str2,0,Str3);
														printf("Before copy:\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														strcpy(Str1,Str2);
														printf("After copy:\n");
														print_string(1,Str1,Str2,0,Str3);
														print_string(2,Str1,Str2,0,Str3);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														sort_string(3,Str1,Str2,Str3);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										int scelta_check=0;
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
											printf("│                     ├► 6.  PALINDROME USING ARRAY                            │\n");
											printf("│                     └► 7.  PALINDROME OF STRING                              │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE CHECK: ");
											scanf("%d",&scelta_check);
											switch(scelta_check){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 2.  MENU STRING                                                     │\n");
													printf("│              └► 4.  CHECK                                                    │\n");
													printf("│                     └► 0.  BACK STRING MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													int c;
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 1.  CHECK VOWELS IN A STRING                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_string(1,Str1,Str2,0,Str3);
														c=count_vowels(Str1);
														printf("Number of vowels in the string %s: are %d\n",Str1,c);
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													int compare;
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 2.  COMPARE STRINGS WITHOUT STRCMP()                  │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														ins_string(2,Str1,Str2,0,Str3);
														print_string(1,Str1,Str2,0,Str3);
														compare=stringCompare(Str1,Str2);
														if(compare == 1){
															printf("Strings are equal\n");
														}else{
															printf("Strings are not equal\n");
														}
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 3.  COMPARE TWO STRINGS                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														ins_string(2,Str1,Str2,0,Str3);
														print_string(1,Str1,Str2,0,Str3);
														if(strcmp(Str1,Str2) == 0){
															printf("Strings are equal\n");
														}else{
															printf("Strings are not equal\n");
														}
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 4.  COUNT FREQUENCY OF CHARACTERS IN A STRING         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_string(1,Str1,Str2,0,Str3);
														count_freq_characters_string(Str1);
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 5.  COUNT TOT NUMBER UPPER/LOWERCASE IN STRING        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_string(1,Str1,Str2,0,Str3);
														count_upper_lower_characters_string(Str1);
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 6.  PALINDROME USING ARRAY                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_string(1,Str1,Str2,0,Str3);
														palindrome_string_array(Str1);
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► 7.  PALINDROME OF STRING                              │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_string(1,Str1,Str2,0,Str3);
														palindrome_string(Str1);
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 2.  MENU STRING                                                     │\n");
														printf("│              └► 4.  CHECK                                                    │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STRING MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
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
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 3:{
							int scelta_matrix=0,r=0,c=0,max=0,min=0,M[r][c];
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 3.  MENU MATRIX                                                     │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  OPERATIONS                                               │\n");
								printf("│              ├► 3.  SORTING                                               [ ]│\n");
								printf("│              ├► 4.  SEARCHING                                             [ ]│\n");
								printf("│              └► 5.  CHECK                                                    │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE MATRIX: ");
								scanf("%d",&scelta_matrix);
								switch(scelta_matrix){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 3.  MENU MATRIX                                                     │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Insert row: ");
											scanf("%d",&r);
											printf("Insert column: ");
											scanf("%d",&c);
											ins_matrix(r,c,M);
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► 2.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK MATRIX MENU                                  │\n");
											printf("│                     ├► 1.  k+M                                               │\n");
											printf("│                     ├► 2.  k*M                                               │\n");
											printf("│                     ├► 3.  M+M                                               │\n");
											printf("│                     ├► 4.  M*M                                               │\n");
											printf("│                     ├► 5.  INVERSE                                           │\n");
											printf("│                     ├► 6.  MAX/MIN                                           │\n");
											printf("│                     └► 7.  TRASPOSITION                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 3.  MENU MATRIX                                                     │\n");
													printf("│              └► 2.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK MATRIX MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  k+M                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE k+M:\n");
														print_matrix(r,c,M);
														k_piu_M(r,c,M);
														printf("MATRIX AFTER k+M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  k*M                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE k*M:\n");
														print_matrix(r,c,M);
														k_x_M(r,c,M);
														printf("MATRIX AFTER k*M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  M+M                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE M+M:\n");
														print_matrix(r,c,M);
														M_piu_M(r,c,M);
														printf("MATRIX AFTER M+M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  M*M                                               │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE M*M:\n");
														print_matrix(r,c,M);
														M_x_M(r,c,M);
														printf("MATRIX AFTER M*M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  INVERSE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														inverse_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  MAX/MIN                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														max=max_matrix(r,c,M,max);
														min=min_matrix(r,c,M,min);
														printf("MAX(M[%d][%d])=%d,min(M[%d][%d])=%d\n",r,c,max,r,c,min);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► 7.  TRASPOSITION                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE TRASPOSITION:\n");
														print_matrix(r,c,M);
														trasp_matrix(r,c,M);
														printf("MATRIX AFTER TRASPOSITION:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 2.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► 3.  SORTING                                                  │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► 4.  SEARCHING                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										int scelta_check=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► 5.  CHECK                                                    │\n");
											printf("│                     ├► 0.  BACK MATRIX MENU                                  │\n");
											printf("│                     ├► 1.  DETERMINANT                                       │\n");
											printf("│                     ├► 2.  SPARSE                                            │\n");
											printf("│                     └► 3.  IDENTIFY OR NOT                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE CHECK: ");
											scanf("%d",&scelta_check);
											switch(scelta_check){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 3.  MENU MATRIX                                                     │\n");
													printf("│              └► 5.  CHECK                                                    │\n");
													printf("│                     └► 0.  BACK MATRIX MENU                                  │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 5.  CHECK                                                    │\n");
														printf("│                     └► 1.  DETERMINANT                                       │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_matrix(r,c,M);
														printf("Determinant of %dX%d matrix is: %d\n",r,c,det(r,c,M));
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 5.  CHECK                                                    │\n");
														printf("│                     └► 2.  SPARSE                                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_matrix(r,c,M);
														sparse_matrix(r,c,M);
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 5.  CHECK                                                    │\n");
														printf("│                     └► 3.  IDENTIFY OR NOT                                   │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														isIdentity(r,c,M)? printf("Yes!\n") : printf("No!\n");
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 3.  MENU MATRIX                                                     │\n");
														printf("│              └► 5.  CHECK                                                    │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 3.  MENU MATRIX                                                     │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 4:{
							int scelta_stack=0,val=0,length=0,x=0,y=0,n=0,upper=10,lower=0;
							struct S *head=NULL;
							char scelta_random='n';
							srand(time(NULL));
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 4.  MENU STACK                                                      │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  DELETE                                                   │\n");
								printf("│              ├► 3.  OPERATIONS                                               │\n");
								printf("│              ├► 4.  SORTING                                                  │\n");
								printf("│              ├► 5.  SEARCHING                                             [ ]│\n");
								printf("│              └► 6.  CHECK                                                 [ ]│\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE STACK: ");
								scanf("%d",&scelta_stack);
								switch(scelta_stack){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 4.  MENU STACK                                                      │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int scelta_insert=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("│                     ├► 0.  BACK STACK MENU                                   │\n");
											printf("│                     ├► 1.  HEAD IT                                           │\n");
											printf("│                     └► 2.  HEAD RE                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE INSERT: ");
											scanf("%d",&scelta_insert);
											switch(scelta_insert){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 4.  MENU STACK                                                      │\n");
													printf("│              └► 1.  INSERT                                                   │\n");
													printf("│                     └► 0.  BACK STACK MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 1.  HEAD IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_stack_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_stack_head_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_stack_head_it(&head,val);
														}
														print_stack_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 2.  HEAD RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_stack_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_stack_head_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_stack_head_re(&head,val);
														}
														print_stack_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										int scelta_delete=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 2.  DELETE                                                   │\n");
											printf("│                     ├► 0.  BACK STACK MENU                                   │\n");
											printf("│                     ├► 1.  HEAD IT                                           │\n");
											printf("│                     └► 2.  HEAD RE                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE DELETE: ");
											scanf("%d",&scelta_delete);
											switch(scelta_delete){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 4.  MENU STACK                                                      │\n");
													printf("│              └► 2.  DELETE                                                   │\n");
													printf("│                     └► 0.  BACK STACK MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 1.  HEAD IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_stack_it(&head);
														pop_stack_head_it(&head);
														printf("-After delete head:\n");
														print_stack_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 2.  HEAD RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_stack_it(&head);
														pop_stack_head_re(&head);
														printf("-After delete head:\n");
														print_stack_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 3.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK STACK MENU                                   │\n");
											printf("│                     ├► 1.  PRINT STACK IT                                    │\n");
											printf("│                     ├► 2.  REVERSE     IT                                    │\n");
											printf("│                     ├► 3.  SEARCH      IT                                    │\n");
											printf("│                     ├► 4.  SWAP        IT                                    │\n");
											printf("│                     ├► 5.  PRINT STACK RE                                    │\n");
											printf("│                     ├► 6.  REVERSE     RE                                    │\n");
											printf("│                     ├► 7.  SEARCH      RE                                    │\n");
											printf("│                     └► 8.  SWAP        RE                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 4.  MENU STACK                                                      │\n");
													printf("│              └► 3.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK STACK MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  PRINT STACK IT                                    │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_stack_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  REVERSE IT                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_stack_it(&head);
														reverse_stack_it(&head);
														printf("-After reverse:\n");
														print_stack_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  SEARCH IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_stack_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_stack_it(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  SWAP IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_stack_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_stack_it(&head,x,y);
														printf("-After swap:\n");
														print_stack_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  PRINT LIST RE                                     │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("L: { ");
														print_stack_re(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  REVERSE RE                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_stack_it(&head);
														reverse_stack_re(&head);
														printf("-After reverse:\n");
														print_stack_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 7.  SEARCH RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_stack_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_stack_re(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 8.  SWAP RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_stack_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_stack_re(&head,x,y);
														printf("-After swap:\n");
														print_stack_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 4.  SORTING                                                  │\n");
											printf("│                     ├► 0.  BACK STACK MENU                                   │\n");
											printf("│                     ├► 1.  BUBBLE    IT                                      │\n");
											printf("│                     ├► 2.  INSERTION IT                                      │\n");
											printf("│                     ├► 3.  MERGE     IT                                      │\n");
											printf("│                     ├► 4.  QUICK     IT                                   [ ]│\n");
											printf("│                     ├► 5.  BUBBLE    RE                                   [ ]│\n");
											printf("│                     ├► 6.  INSERTION RE                                   [ ]│\n");
											printf("│                     ├► 7.  MERGE     RE                                   [ ]│\n");
											printf("│                     └► 8.  QUICK     RE                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SORTING: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 4.  MENU STACK                                                      │\n");
													printf("│              └► 4.  SORTING                                                  │\n");
													printf("│                     └► 0.  BACK STACK MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 1.  BUBBLE IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before bubble sort:\n");
														print_stack_it(&head);
														bubble_stack_struct_it(&head);
														printf("-After bubble sort:\n");
														print_stack_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 2.  INSERTION IT                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before insertion sort:\n");
														print_stack_it(&head);
														insertion_struct_stack_it(&head);
														printf("-After insertion sort:\n");
														print_stack_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 3.  MERGE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before merge sort:\n");
														print_stack_it(&head);
														MergeSort_atack(&head);
														printf("-After merge sort:\n");
														print_stack_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 4.  QUICK IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 5.  BUBBLE RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 6.  INSERTION RE                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 7.  MERGE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 8.  QUICK RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before quick sort:\n");
														print_stack_it(&head);
														quickSort_stack(&head);
														printf("-After quick sort:\n");
														print_stack_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 4.  MENU STACK                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 5.  SEARCHING                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► 6.  CHECK                                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 4.  MENU STACK                                                      │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 5:{
							int scelta_queue=0,val=0,length=0,x=0,y=0,n=0,upper=10,lower=0;
							struct Q *head=NULL;
							char scelta_random='n';
							srand(time(NULL));
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 5.  MENU QUEUE                                                      │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  DELETE                                                   │\n");
								printf("│              ├► 3.  OPERATIONS                                               │\n");
								printf("│              ├► 4.  SORTING                                               [ ]│\n");
								printf("│              ├► 5.  SEARCHING                                             [ ]│\n");
								printf("│              └► 6.  CHECK                                                 [ ]│\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE QUEUE: ");
								scanf("%d",&scelta_queue);
								switch(scelta_queue){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 5.  MENU QUEUE                                                      │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int scelta_insert=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("│                     ├► 0.  BACK QUEUE MENU                                   │\n");
											printf("│                     ├► 1.  HEAD IT                                           │\n");
											printf("│                     └► 2.  HEAD RE                                           │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE INSERT: ");
											scanf("%d",&scelta_insert);
											switch(scelta_insert){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 5.  MENU QUEUE                                                      │\n");
													printf("│              └► 1.  INSERT                                                   │\n");
													printf("│                     └► 0.  BACK QUEUE MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 1.  HEAD IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_queue_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_queue_head_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_queue_head_it(&head,val);
														}
														print_queue_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 2.  HEAD RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_queue_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_queue_head_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_queue_head_re(&head,val);
														}
														print_queue_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										int scelta_delete=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 2.  DELETE                                                   │\n");
											printf("│                     ├► 0.  BACK QUEUE MENU                                   │\n");
											printf("│                     ├► 1.  QUEUE IT                                          │\n");
											printf("│                     └► 2.  QUEUE RE                                          │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE DELETE: ");
											scanf("%d",&scelta_delete);
											switch(scelta_delete){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 5.  MENU QUEUE                                                      │\n");
													printf("│              └► 2.  DELETE                                                   │\n");
													printf("│                     └► 0.  BACK QUEUE MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 1.  QUEUE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_queue_it(&head);
														pop_queue_queue_it(&head);
														printf("-After delete queue:\n");
														print_queue_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 2.  QUEUE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_queue_it(&head);
														pop_queue_queue_re(&head);
														printf("-After delete queue:\n");
														print_queue_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 3.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK QUEUE MENU                                   │\n");
											printf("│                     ├► 1.  PRINT QUEUE IT                                    │\n");
											printf("│                     ├► 2.  REVERSE     IT                                    │\n");
											printf("│                     ├► 3.  SEARCH      IT                                    │\n");
											printf("│                     ├► 4.  SWAP        IT                                    │\n");
											printf("│                     ├► 5.  PRINT QUEUE RE                                    │\n");
											printf("│                     ├► 6.  REVERSE     RE                                    │\n");
											printf("│                     ├► 7.  SEARCH      RE                                    │\n");
											printf("│                     └► 8.  SWAP        RE                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 5.  MENU QUEUE                                                      │\n");
													printf("│              └► 3.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK QUEUE MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  PRINT QUEUE IT                                    │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_queue_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  REVERSE IT                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_queue_it(&head);
														reverse_queue_it(&head);
														printf("-After reverse:\n");
														print_queue_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  SEARCH IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_queue_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_queue_it(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  SWAP IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_queue_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_queue_it(&head,x,y);
														printf("-After swap:\n");
														print_queue_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  PRINT QUEUERE                                     │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("L: { ");
														print_queue_re(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  REVERSE RE                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_queue_it(&head);
														reverse_queue_re(&head);
														printf("-After reverse:\n");
														print_queue_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 7.  SEARCH RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_queue_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_queue_re(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 8.  SWAP RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_queue_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_queue_re(&head,x,y);
														printf("-After swap:\n");
														print_queue_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 4.  SORTING                                                  │\n");
											printf("│                     ├► 0.  BACK QUEUE MENU                                   │\n");
											printf("│                     ├► 1.  BUBBLE    IT                                      │\n");
											printf("│                     ├► 2.  INSERTION IT                                      │\n");
											printf("│                     ├► 3.  MERGE     IT                                      │\n");
											printf("│                     ├► 4.  QUICK     IT                                   [ ]│\n");
											printf("│                     ├► 5.  BUBBLE    RE                                   [ ]│\n");
											printf("│                     ├► 6.  INSERTION RE                                   [ ]│\n");
											printf("│                     ├► 7.  MERGE     RE                                   [ ]│\n");
											printf("│                     └► 8.  QUICK     RE                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SORTING: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 5.  MENU QUEUE                                                      │\n");
													printf("│              └► 4.  SORTING                                                  │\n");
													printf("│                     └► 0.  BACK QUEUE MENU                                   │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 1.  BUBBLE IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before bubble sort:\n");
														print_queue_it(&head);
														bubble_struct_queue_it(&head);
														printf("-After bubble sort:\n");
														print_queue_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 2.  INSERTION IT                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before insertion sort:\n");
														print_queue_it(&head);
														insertion_struct_queue_it(&head);
														printf("-After insertion sort:\n");
														print_queue_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 3.  MERGE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before merge sort:\n");
														print_queue_it(&head);
														MergeSort_queue(&head);
														printf("-After merge sort:\n");
														print_queue_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 4.  QUICK IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 5.  BUBBLE RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 6.  INSERTION RE                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 7.  MERGE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 8.  QUICK RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before quick sort:\n");
														print_queue_it(&head);
														quickSort_queue(&head);
														printf("-After quick sort:\n");
														print_queue_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 5.  MENU QUEUE                                                      │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 5.  SEARCHING                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► 6.  CHECK                                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 5.  MENU QUEUE                                                      │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;

						case 6:{
							int scelta_list=0,val=0,length=0,x=0,y=0,n=0,upper=10,lower=0;
							struct L *head=NULL;
							char scelta_random='n';
							srand(time(NULL));
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► 6.  MENU LIST                                                       │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU                                    │\n");
								printf("│              ├► 1.  INSERT                                                   │\n");
								printf("│              ├► 2.  DELETE                                                   │\n");
								printf("│              ├► 3.  OPERATIONS                                               │\n");
								printf("│              ├► 4.  SORTING                                               [ ]│\n");
								printf("│              ├► 5.  SEARCHING                                             [ ]│\n");
								printf("│              └► 6.  CHECK                                                 [ ]│\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE LIST: ");
								scanf("%d",&scelta_list);
								switch(scelta_list){
									case 0:{
										clrscr();
										printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                                                     │\n");
										printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
										printf("│       └► 6.  MENU LIST                                                       │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU                                    │\n");
										printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int scelta_insert=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 1.  INSERT                                                   │\n");
											printf("│                     ├► 0.  BACK LIST MENU                                    │\n");
											printf("│                     ├► 1.  SORTED IT                                         │\n");
											printf("│                     ├► 2.  HEAD   IT                                         │\n");
											printf("│                     ├► 3.  MIDDLE IT                                         │\n");
											printf("│                     ├► 4.  QUEUE  IT                                         │\n");
											printf("│                     ├► 5.  SORTED RE                                         │\n");
											printf("│                     ├► 6.  HEAD   RE                                         │\n");
											printf("│                     ├► 7.  MIDDLE RE                                         │\n");
											printf("│                     └► 8.  QUEUE  RE                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE INSERT: ");
											scanf("%d",&scelta_insert);
											switch(scelta_insert){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 6.  MENU LIST                                                       │\n");
													printf("│              └► 1.  INSERT                                                   │\n");
													printf("│                     └► 0.  BACK LIST MENU                                    │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 1.  SORTED IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_sort_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_sort_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 2.  HEAD IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_head_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_head_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 3.  MIDDLE IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_middle_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_middle_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 4.  QUEUE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_queue_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_queue_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 5.  SORTED RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_sort_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_sort_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 6.  HEAD RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_head_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_head_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 7.  MIDDLE RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_middle_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_middle_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► 8.  QUEUE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s",&scelta_random);
														if((scelta_random == 'y') && (scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d",&n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n",val);
																push_queue_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d",&val);
															printf("pushing: %d\n",val);
															push_queue_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 1.  INSERT                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 2:{
										int scelta_delete=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 2.  DELETE                                                   │\n");
											printf("│                     ├► 0.  BACK LIST MENU                                    │\n");
											printf("│                     ├► 1.  HEAD   IT                                         │\n");
											printf("│                     ├► 2.  BY VAL IT                                         │\n");
											printf("│                     ├► 3.  QUEUE  IT                                         │\n");
											printf("│                     ├► 4.  ALL    IT                                         │\n");
											printf("│                     ├► 5.  HEAD   RE                                         │\n");
											printf("│                     ├► 6.  BY VAL RE                                         │\n");
											printf("│                     ├► 7.  QUEUE  RE                                         │\n");
											printf("│                     └► 8.  ALL    RE                                         │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE DELETE: ");
											scanf("%d",&scelta_delete);
											switch(scelta_delete){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 6.  MENU LIST                                                       │\n");
													printf("│              └► 2.  DELETE                                                   │\n");
													printf("│                     └► 0.  BACK LIST MENU                                    │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 1.  HEAD IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_list_it(&head);
														pop_head_it(&head);
														printf("-After delete head:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 2.  BY VAL IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Push value to delete: ");
														scanf("%d",&val);
														printf("-Before delete by val:\n");
														print_list_it(&head);
														pop_val_it(&head,val);
														printf("-After delete by val:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 3.  QUEUE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_list_it(&head);
														pop_queue_it(&head);
														printf("-After delete queue:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 4.  ALL IT                                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete all:\n");
														print_list_it(&head);
														pop_all_it(&head);
														printf("-After delete all:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 5.  HEAD RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_list_it(&head);
														pop_head_re(&head);
														printf("-After delete head:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 6.  BY VAL RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Push value to delete: ");
														scanf("%d",&val);
														printf("-Before delete by val:\n");
														print_list_it(&head);
														pop_val_re(&head,val);
														printf("-After delete by val:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 7.  QUEUE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_list_it(&head);
														pop_queue_re(&head);
														printf("-After delete queue:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► 8.  ALL RE                                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before delete all:\n");
														print_list_it(&head);
														pop_all_re(&head);
														printf("-After delete all:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 2.  DELETE                                                   │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 3:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 3.  OPERATIONS                                               │\n");
											printf("│                     ├► 0.  BACK LIST MENU                                    │\n");
											printf("│                     ├► 1.  PRINT LIST IT                                     │\n");
											printf("│                     ├► 2.  REVERSE    IT                                     │\n");
											printf("│                     ├► 3.  SEARCH     IT                                     │\n");
											printf("│                     ├► 4.  SWAP       IT                                     │\n");
											printf("│                     ├► 5.  PRINT LIST RE                                     │\n");
											printf("│                     ├► 6.  REVERSE    RE                                     │\n");
											printf("│                     ├► 7.  SEARCH     RE                                     │\n");
											printf("│                     └► 8.  SWAP       RE                                     │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 6.  MENU LIST                                                       │\n");
													printf("│              └► 3.  OPERATIONS                                               │\n");
													printf("│                     └► 0.  BACK LIST MENU                                    │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 1.  PRINT LIST IT                                     │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 2.  REVERSE IT                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_list_it(&head);
														reverse_it(&head);
														printf("-After reverse:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 3.  SEARCH IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_it(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 4.  SWAP IT                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_list_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_it(&head,x,y);
														printf("-After swap:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 5.  PRINT LIST RE                                     │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("L: { ");
														print_list_re(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 6.  REVERSE RE                                        │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_list_it(&head);
														reverse_re(&head);
														printf("-After reverse:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 7.  SEARCH RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Enter value to search: ");
														scanf("%d",&val);
														search_re(&head,val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► 8.  SWAP RE                                           │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_list_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d",&x,&y);
														swapNodes_re(&head,x,y);
														printf("-After swap:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 3.  OPERATIONS                                               │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 4:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 4.  SORTING                                                  │\n");
											printf("│                     ├► 0.  BACK LIST MENU                                    │\n");
											printf("│                     ├► 1.  BUBBLE    IT                                      │\n");
											printf("│                     ├► 2.  INSERTION IT                                      │\n");
											printf("│                     ├► 3.  MERGE     IT                                      │\n");
											printf("│                     ├► 4.  QUICK     IT                                   [ ]│\n");
											printf("│                     ├► 5.  BUBBLE    RE                                   [ ]│\n");
											printf("│                     ├► 6.  INSERTION RE                                   [ ]│\n");
											printf("│                     ├► 7.  MERGE     RE                                   [ ]│\n");
											printf("│                     └► 8.  QUICK     RE                                      │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("CHOICE SORTING: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                                                     │\n");
													printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
													printf("│       └► 6.  MENU LIST                                                       │\n");
													printf("│              └► 4.  SORTING                                                  │\n");
													printf("│                     └► 0.  BACK LIST MENU                                    │\n");
													printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 1.  BUBBLE IT                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before bubble sort:\n");
														print_list_it(&head);
														bubble_struct_it(&head);
														printf("-After bubble sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 2.  INSERTION IT                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before insertion sort:\n");
														print_list_it(&head);
														insertion_struct_it(&head);
														printf("-After insertion sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 3.  MERGE IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before merge sort:\n");
														print_list_it(&head);
														MergeSort(&head);
														printf("-After merge sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 4.  QUICK IT                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 5.  BUBBLE RE                                         │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 6.  INSERTION RE                                      │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 7.  MERGE RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► 8.  QUICK RE                                          │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("-Before quick sort:\n");
														print_list_it(&head);
														quickSort(&head);
														printf("-After quick sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;

												default:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                                                     │\n");
														printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
														printf("│       └► 6.  MENU LIST                                                       │\n");
														printf("│              └► 4.  SORTING                                                  │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE!                            │\n");
														printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s",&torna);
													}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 5.  SEARCHING                                                │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► 6.  CHECK                                                    │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                                                       │\n");
											printf("│       └► 6.  MENU LIST                                                       │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!                                   │\n");
											printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s",&torna);
										}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;
						//...
						default:{
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                                     │\n");
								printf("│└► 2.  MENU DATA-STRUCT                                                       │\n");
								printf("│       └► X.  DEFAULT: ERROR CHOICE!                                          │\n");
								printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s",&torna);
				}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
			}break; //case 2 (data-struct)

			default:{ //default (main menu)
				do{
					clrscr();
					printf("┌──────────────────────────────────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                                                     │\n");
					printf("│└► X.  DEFAULT: ERROR CHOICE!                                                 │\n");
					printf("└──────────────────────────────────────────────────────────────────────────────┘\n");
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s",&torna);
					if((torna == 'n')||(torna == 'N')){
						clrscr();
						exit(0);
					}
				}while((((torna == 'n')&&(torna == 'N')))||((torna != 'y')&&(torna != 'Y')));
			}break; //default (main menu)
		}
	}while((scelta_menu >= 0) || (scelta_menu <= 10));
}