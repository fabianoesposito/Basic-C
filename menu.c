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
  │├−►Description:                  │
  └─────────────────────────────────┘*/
void clrscr(void){
	printf("\033[2J");
	printf("\033[0;0f");
}
/*┌─────────────────────────────────┐
  │BASIC                            │
  │├−►Description:                  │
  └─────────────────────────────────┘*/
void hello_world(){
	printf("HELLO WORLD!\n");
}

void var_sizes(){
	int c=sizeof(char), i=sizeof(int);
	int f=sizeof(float), d=sizeof(double);
	printf("Size of char: %d byte\n",c);
	printf("Size of int: %d byte\n",i);
	printf("Size of float: %d byte\n",f);
	printf("Size of double: %d byte\n",d);
}

void ascii_table(){
	printf("INT\tCHAR\t\tINT\tCHAR\t\tINT\tCHAR\n");
	for(int i=32; i<=63; i++){
		printf("%d\t%c\t\t%d\t%c\t\t%d\t%c\n", i, i, i+32, i+32, i+64, i+64);
	}
}
//...
/*┌─────────────────────────────────┐
  │FLOATING-POINT ARITHMETIC        │
  │├−►Description:                  │
  └─────────────────────────────────┘*/
float epsilon_macchina_singola_precisione (int b, float e1){
	float eps_sp, temp;
	while(temp!=1.0){ 
		eps_sp=e1;
		e1=e1/(float)b;
		temp=e1+1.0;
	}
	return eps_sp;
}

double epsilon_macchina_doppia_precisione (int b, double e2){
	double eps_dp, temp;
	while(temp!=1.0){
		eps_dp=e2;
		e2=e2/(double)b;
		temp=e2+1.0;
	}
	return eps_dp;
}

float minimo_rappresentabile_singola_precisione(float e1, int b){
	float rmin_s_p;

	while(e1!=0.){
		rmin_s_p=e1;
		e1=rmin_s_p/(float)b;
	}
	return rmin_s_p;
}

double minimo_rappresentabile_doppia_precisione(double e2, int b){
	double rmin_d_p;
	while(e2!=0.){
		rmin_d_p=e2;
		e2=rmin_d_p/(double)b;
	}
	return rmin_d_p;
}
//...
void main(int argc, char const *argv[]){
	int scelta_menu=0;
	char torna='n';	
/*	┌─────────────────────────────────┐
	│├−► [●]: completato/funziona     │
	│├−► [○]: manca                   │
	│├−► [ ]: quasi finito            │
	│├−► [ ]: in sviluppo             │
	│├−► [ ]: pronto in un altro file │
	│└−► [ ]: da aggiustare           │
	└─────────────────────────────────┘
*/
	do{
		clrscr();
		printf("┌───────────────────────────┐\n");
		printf("│MAIN MENU                  │\n");
		printf("│├► 0.  EXIT             [●]│\n");
		printf("│├► 1.  MENU BASIC       [○]│\n");
		printf("│└► 2.  MENU DATA-STRUCT [○]│\n");
		printf("└───────────────────────────┘\n");
		printf("CHOICE MENU: ");
		scanf("%d", &scelta_menu);
		switch(scelta_menu){
			case 0:{ //exit
				clrscr();
				exit(0);
			}break; //case 0

			case 1:{ //basic
				int scelta_basic=0;
				do{
					clrscr();
					printf("┌────────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                       │\n");
					printf("│└► 1.  MENU BASIC                               │\n");
					printf("│       ├► 0.  BACK TO MAIN MENU              [●]│\n");
					printf("│       ├► 1.  HELLO WORLD                    [●]│\n");
					printf("│       ├► 2.  SIZES OF TYPE'S VARIABLES      [●]│\n");
					printf("│       ├► 3.  ASCII TABLE                    [●]│\n");
					printf("│       ├► 4.  MENU PATTERNS                  [○]│\n");
					printf("│       ├► 5.  MENU NUMBERS                   [○]│\n");
					printf("│       ├► 6.  MENU MATH FORMULA              [○]│\n");
					printf("│       ├► 7.  MENU FLOATING-POINT ARITHMETIC [●]│\n");
					printf("│       ├► 8.  MENU CONVERSIONS               [○]│\n");
					printf("│       └► 9.  MENU RANDPASS                  [○]│\n");
					printf("└────────────────────────────────────────────────┘\n");
					printf("CHOICE BASIC: ");
					scanf("%d", &scelta_basic);
					switch(scelta_basic){
						case 0:{
							clrscr();
							printf("┌────────────────────────────────┐\n");
							printf("│MAIN MENU                       │\n");
							printf("│└► 1.  MENU BASIC               │\n");
							printf("│       └► 0.  BACK TO MAIN MENU │\n");
							printf("└────────────────────────────────┘\n");
						}break;

						case 1:{
							do{	
								clrscr();
								printf("┌──────────────────────────┐\n");
								printf("│MAIN MENU                 │\n");
								printf("│└► 1.  MENU BASIC         │\n");
								printf("│       └► 1.  HELLO WORLD │\n");
								printf("└──────────────────────────┘\n");
								hello_world();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 2:{
							do{
								clrscr();
								printf("┌────────────────────────────────────────┐\n");
								printf("│MAIN MENU                               │\n");
								printf("│└► 1.  MENU BASIC                       │\n");
								printf("│       └► 2.  SIZES OF TYPE'S VARIABLES │\n");
								printf("└────────────────────────────────────────┘\n");
								var_sizes();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 3:{
							do{
								clrscr();
								printf("┌──────────────────────────┐\n");
								printf("│MAIN MENU                 │\n");
								printf("│└► 1.  MENU BASIC         │\n");
								printf("│       └► 3.  ASCII TABLE │\n");
								printf("└──────────────────────────┘\n");
								ascii_table();
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 4:{
							int scelta_patterns=0;
							do{
								clrscr();
								printf("┌───────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                  │\n");
								printf("│└► 1.  MENU BASIC                                          │\n");
								printf("│       └► 4.  MENU PATTERNS                                │\n");
								printf("│              ├► 0.  BACK BASIC MENU                    [●]│\n");
								printf("│              ├► 1.  BINARY PATTERN                     [○]│\n");
								printf("│              ├► 2.  DIAMOND PATTERN                    [○]│\n");
								printf("│              ├► 3.  DIAMOND STAR OUTLINE               [○]│\n");
								printf("│              ├► 4.  FLOYD'S TRIANGLE                   [○]│\n");
								printf("│              ├► 5.  HOLLOW DIAMOND                     [○]│\n");
								printf("│              ├► 6.  HOLLOW SQUARE                      [○]│\n");
								printf("│              ├► 7.  HOURGLASS PATTERN                  [○]│\n");
								printf("│              ├► 8.  NESTED STAR-HASH PYRAMID           [○]│\n");
								printf("│              ├► 9.  NUMBER ALPHABET PATTERN            [○]│\n");
								printf("│              ├► 10. NUMBER DIAMOND PATTERN             [○]│\n");
								printf("│              ├► 11. NUMBER PATTERN-1                   [○]│\n");
								printf("│              ├► 12. NUMBER PATTERN-2                   [○]│\n");
								printf("│              ├► 13. NUMBER PATTERN-3                   [○]│\n");
								printf("│              ├► 14. NUMBER PATTERN-4                   [○]│\n");
								printf("│              ├► 15. NUMBER PYRAMID                     [○]│\n");
								printf("│              ├► 16. PASCAL TRIANGLE                    [○]│\n");
								printf("│              ├► 17. PASCAL TRIANGLE-2                  [○]│\n");
								printf("│              ├► 18. PASCAL'S TRIANGLE WITHOUT FUNCTION [○]│\n");
								printf("│              ├► 19. PATTERN-1                          [○]│\n");
								printf("│              ├► 20. PATTERN-2                          [○]│\n");
								printf("│              ├► 21. PATTERN-3                          [○]│\n");
								printf("│              ├► 22. PATTERN-4                          [○]│\n");
								printf("│              ├► 23. PATTERN-5                          [○]│\n");
								printf("│              ├► 24. PATTERN-6                          [○]│\n");
								printf("│              ├► 25. PATTERN-7                          [○]│\n");
								printf("│              ├► 26. PATTERN-8                          [○]│\n");
								printf("│              ├► 27. PATTERN-9                          [○]│\n");
								printf("│              ├► 28. PATTERN-10                         [○]│\n");
								printf("│              ├► 29. PYRAMID                            [○]│\n");
								printf("│              ├► 30. RECTANGLE PATTERN                  [○]│\n");
								printf("│              ├► 31. RECTANGLE STAR PATTERN             [○]│\n");
								printf("│              ├► 32. REVERSE STAR TRIANGLE              [○]│\n");
								printf("│              ├► 33. RHOMBUS PATTERN                    [○]│\n");
								printf("│              ├► 34. SQUARE KITE PATTERN                [○]│\n");
								printf("│              ├► 35. SQUARE STAR PATTERN                [○]│\n");
								printf("│              ├► 36. TRIANGLE WITH ONLY BORDERS         [○]│\n");
								printf("│              └► 37. X PATTERN                          [○]│\n");
								printf("└───────────────────────────────────────────────────────────┘\n");
								printf("CHOICE PATTERNS: ");
								scanf("%d",&scelta_patterns);
								switch(scelta_patterns){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU BASIC                    │\n");
										printf("│       └► 4.  MENU PATTERNS          │\n");
										printf("│              └► 0.  BACK BASIC MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									//...
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 4.  MENU PATTERN                  │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 5:{
							int scelta_numbers=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                         │\n");
								printf("│└► 1.  MENU BASIC                                                 │\n");
								printf("│       └► 5.  MENU NUMBERS                                        │\n");
								printf("│              ├► 0.  BACK BASIC MENU                           [●]│\n");
								printf("│              ├► 1.  ADD 'n' NUMBERS                           [○]│\n");
								printf("│              ├► 2.  ARMSTRONG NUMBER                          [○]│\n");
								printf("│              ├► 3.  AVERAGE OF NUMBERS                        [○]│\n");
								printf("│              ├► 4.  SQUARE 'n' NUMBERS                        [○]│\n");
								printf("│              ├► 5.  SQUARE NUMBERS BY USER                    [○]│\n");
								printf("│              ├► 6.  SUM OF NATURAL NUMBERS (USING FOR)        [○]│\n");
								printf("│              ├► 7.  CHECK IF A NUMBER IS PRIME                [○]│\n");
								printf("│              ├► 8.  CHECK IF A NUMBER IS INTEGER OR FLOAT     [○]│\n");
								printf("│              ├► 9.  CHECK IF A NUMBER IS POSITIVE OR NEGATIVE [○]│\n");
								printf("│              ├► 10. PRIME NUMBERS BETWEEN INTERVAL            [○]│\n");
								printf("│              ├► 11. FACTORIAL OF A NUMBER                     [○]│\n");
								printf("│              ├► 12. FACTORS OF A NUMBER                       [○]│\n");
								printf("│              ├► 13. FIBONACCI SERIES                          [○]│\n");
								printf("│              ├► 14. EVEN OR ODD                               [○]│\n");
								printf("│              ├► 15. SUM OF TWO BINARY NUMBERS                 [○]│\n");
								printf("│              ├► 16. POWER OF NUMBERS (x^n)                    [○]│\n");
								printf("│              ├► 17. HARMONIC SEIRES                           [○]│\n");
								printf("│              ├► 18. HCF & LCM                                 [○]│\n");
								printf("│              ├► 19. LARGEST OF 'n' NUMBERS                    [○]│\n");
								printf("│              ├► 20. MULTIPLICATION TABLE                      [○]│\n");
								printf("│              ├► 21. CHECK IF NUMBER PALINDROME                [○]│\n");
								printf("│              ├► 22. PERFECT NUMBER                            [○]│\n");
								printf("│              ├► 23. PRIMES TILL 'n'                           [○]│\n");
								printf("│              ├► 24. REVERSE OF A NUMBER                       [○]│\n");
								printf("│              ├► 25. SQUARE ROOT OF A NUMBER                   [○]│\n");
								printf("│              ├► 26. SUM OF FACTORIAL SEIRES 1/1!, ..., 1/N!   [○]│\n");
								printf("│              ├► 27. SWAP WITH TEMP VARIABLE                   [○]│\n");
								printf("│              ├► 28. SWAP WITHOUT TEMP VARIABLE                [○]│\n");
								printf("│              └► 29. SWAP WITH POINTERS                        [○]│\n");
								printf("└──────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE NUMBERS: ");
								scanf("%d",&scelta_numbers);
								switch(scelta_numbers){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU BASIC                    │\n");
										printf("│       └► 5.  MENU NUMBERS           │\n");
										printf("│              └► 0.  BACK BASIC MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									//...
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 5.  MENU NUMBERS                  │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 6:{
							int scelta_math_formula=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                         │\n");
								printf("│└► 1.  MENU BASIC                                                 │\n");
								printf("│       └► 6.  MENU MATH FORMULA                                   │\n");
								printf("│              ├► 0.  BACK BASIC MENU                           [●]│\n");
								printf("│              ├► 1.  AREA OF CIRCLE                            [○]│\n");
								printf("│              ├► 2.  AREA OF TRIANGLE                          [○]│\n");
								printf("│              ├► 3.  AREA OF PARALLELOGRAM                     [○]│\n");
								printf("│              ├► 4.  AREA OF RHOMBUS                           [○]│\n");
								printf("│              ├► 5.  RIGHT ANGLED TRIANGLE                     [○]│\n");
								printf("│              ├► 6.  PROBABILITY DISTRIBUTION                  [○]│\n");
								printf("│              ├► 7.  SIN(x)                                    [○]│\n");
								printf("│              ├► 8.  COS(x)                                    [○]│\n");
								printf("│              ├► 9.  COS(x) SERIES                             [○]│\n");
								printf("│              ├► 10. SURFACE AREA VOLUME CUBE                  [○]│\n");
								printf("│              ├► 11. ROOTS OF A QUADR. EQUATION                [○]│\n");
								printf("│              ├► 12. GREATEST AMONG THREE NUMBER               [○]│\n");
								printf("│              ├► 13. LEAP YEAR                                 [○]│\n");
								printf("│              ├► 14. PERFECT SQUARE                            [○]│\n");
								printf("│              ├► 15. SIMPLE INTEREST                           [○]│\n");
								printf("│              ├► 16. SUM OF EVEN NUMBERS 1 TO N                [○]│\n");
								printf("│              ├► 17. SUM OF ARITHMETIC PROG. SERIES            [○]│\n");
								printf("│              ├► 18. SUM OF GEOMETRIC PROG. SERIES             [○]│\n");
								printf("│              ├► 19. SUM OF HARMONIC PROG. SERIES              [○]│\n");
								printf("│              ├► 20. VOLUME & SURFACE AREA CYLINDER            [○]│\n");
								printf("│              ├► 21. VOLUME & SURFACE AREA CUBOID              [○]│\n");
								printf("│              ├► 22. VOLUME & SURFACE AREA CONE                [○]│\n");
								printf("│              └► 23. VOLUME & SURFACE AREA SPHARE              [○]│\n");
								printf("└──────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE MATH FORMULA: ");
								scanf("%d",&scelta_math_formula);
								switch(scelta_math_formula){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU BASIC                    │\n");
										printf("│       └► 6.  MENU MATH FORMULA      │\n");
										printf("│              └► 0.  BACK BASIC MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									//...
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 6.  MENU MATH FORMULA             │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 7:{
							int scelta_eps_rmin=0, base=2;
							float e1=1.0, epsilon1, rmins;
							double e2=1.0, epsilon2, rmind;
							do{
								clrscr();
								printf("┌───────────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                          │\n");
								printf("│└► 1.  MENU BASIC                                                  │\n");
								printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                       │\n");
								printf("│              ├► 0.  BACK BASIC MENU                               │\n");
								printf("│              ├► 1.  MACHINE EPSILON (SINGLE/DOUBLE PRECISION)     │\n");
								printf("│              └► 2.  MINIMUM REAL NUMBER (SINGLE/DOUBLE PRECISION) │\n");
								printf("└───────────────────────────────────────────────────────────────────┘\n");
								printf("CHOICE MATH FORMULA: ");
								scanf("%d",&scelta_eps_rmin);
								switch(scelta_eps_rmin){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                    │\n");
										printf("│└► 1.  MENU MENU BASIC                       │\n");
										printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC │\n");
										printf("│              └► 0.  BACK BASIC MENU         │\n");
										printf("└─────────────────────────────────────────────┘\n");
									}break;

									case 1:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                      │\n");
											printf("│└► 1.  MENU BASIC                                              │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                   │\n");
											printf("│              └► 1.  MACHINE EPSILON (SINGLE/DOUBLE PRECISION) │\n");
											printf("└───────────────────────────────────────────────────────────────┘\n");
											epsilon1=epsilon_macchina_singola_precisione(base,e1);
											epsilon2=epsilon_macchina_doppia_precisione(base,e2);
											printf("Machine Epsilon (Single Precision): %.16f\n", epsilon1);
											printf("Machine Epsilon (Double Precision): %.32f\n", epsilon2);
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                          │\n");
											printf("│└► 1.  MENU BASIC                                                  │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC                       │\n");
											printf("│              └► 2.  MINIMUM REAL NUMBER (SINGLE/DOUBLE PRECISION) │\n");
											printf("└───────────────────────────────────────────────────────────────────┘\n");
											rmins=minimo_rappresentabile_singola_precisione(e1,base);
											rmind=minimo_rappresentabile_doppia_precisione(e2,base);
											printf("Minimum Real Number (Single Precision): %E\n", rmins);
											printf("Minimum Real Number (Double Precision): %E\n", rmind);
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									default:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                    │\n");
											printf("│└► 1.  MENU BASIC                            │\n");
											printf("│       └► 7.  MENU FLOATING-POINT ARITHMETIC │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE!  │\n");
											printf("└─────────────────────────────────────────────┘\n");
											printf("Do you want to back to FLOATING-POINT ARITHMETIC MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 8:{
							int scelta_conversions=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                             │\n");
								printf("│└► 1.  MENU BASIC                                     │\n");
								printf("│       └► 8.  MENU CONVERSIONS                        │\n");
								printf("│              ├► 0.  BACK BASIC MENU               [●]│\n");
								printf("│              ├► 1.  BINARY TO DECIMAL             [○]│\n");
								printf("│              ├► 2.  BINARY TO OCTAL               [○]│\n");
								printf("│              ├► 3.  BINARY TO HEXADECIMAL         [○]│\n");
								printf("│              ├► 4.  UPPERCASE TO LOWERCASE STRING [○]│\n");
								printf("│              ├► 5.  CHAR TO REVERSE CHAR          [○]│\n");
								printf("│              ├► 6.  NUMBER TO ROMAN NUMBER        [○]│\n");
								printf("│              ├► 7.  ROMAN NUMBER TO NUMBER        [○]│\n");
								printf("│              ├► 8.  DECIMAL TO HEXADECIMAL        [○]│\n");
								printf("│              ├► 9.  DECIMAL TO OCTAL              [○]│\n");
								printf("│              ├► 10. DECIMAL TO BINARY             [○]│\n");
								printf("│              ├► 11. OCTAL TO DECIMAL              [○]│\n");
								printf("│              ├► 12. OCTAL TO BINARY               [○]│\n");
								printf("│              ├► 13. CELSIUS TO FAHRENHEIT         [○]│\n");
								printf("│              └► 14. FAHRENHEIT TO CELSIUS         [○]│\n");
								printf("└──────────────────────────────────────────────────────┘\n");
								printf("CHOICE CONVERSIONS: ");
								scanf("%d",&scelta_conversions);
								switch(scelta_conversions){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU BASIC                    │\n");
										printf("│       └► 8.  MENU CONVERSIONS       │\n");
										printf("│              └► 0.  BACK BASIC MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									//...
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 8.  MENU CONVERSIONS              │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 9:{
							int scelta_randpass=0;
							do{
								clrscr();
								printf("┌──────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                     │\n");
								printf("│└► 1.  MENU BASIC                             │\n");
								printf("│       └► 9.  MENU RANDPASS                   │\n");
								printf("│              ├► 0.  BACK BASIC MENU       [●]│\n");
								printf("│              ├► 1.  C-U + C-L + NUM + SYM [○]│\n");
								printf("│              ├► 2.  C-U                   [○]│\n");
								printf("│              ├► 3.        C-L             [○]│\n");
								printf("│              ├► 4.              NUM       [○]│\n");
								printf("│              ├► 5.                    SYM [○]│\n");
								printf("│              ├► 6.  C-U + C-L             [○]│\n");
								printf("│              ├► 7.  C-U + C-L + NUM       [○]│\n");
								printf("│              ├► 8.  C-U + C-L       + SYM [○]│\n");
								printf("│              ├► 9.  C-U       + NUM       [○]│\n");
								printf("│              ├► 10. C-U             + SYM [○]│\n");
								printf("│              ├► 11.       C-L + NUM       [○]│\n");
								printf("│              ├► 12.       C-L       + SYM [○]│\n");
								printf("│              └► 13.             NUM + SYM [○]│\n");
								printf("└──────────────────────────────────────────────┘\n");
								printf("CHOICE RANDPASS: ");
								scanf("%d",&scelta_randpass);
								switch(scelta_randpass){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU BASIC                    │\n");
										printf("│       └► 9.  MENU RANDPASS          │\n");
										printf("│              └► 0.  BACK BASIC MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									//...
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 9.  MENU RANDPASS                 │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
						//...
						default:{
							do{
								clrscr();
								printf("┌─────────────────────────────────────┐\n");
								printf("│MAIN MENU                            │\n");
								printf("│└► 1.  MENU BASIC                    │\n");
								printf("│       └► X.  DEFAULT: ERROR CHOICE! │\n");
								printf("└─────────────────────────────────────┘\n");
								printf("Do you want to back to BASIC MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s", &torna);
				}while((torna == 'n')&&(torna != 'y'));
			}break; //case 1 (basic)

/*			case 2:{ //data-struct
				int scelta_datastruct=0;
				do{
					clrscr();
					printf(" ___________________\n");
					printf("_|MAIN MENU        |\n");
					printf("| |-> %d DATA-STRUCT|________________________________\n",scelta_menu);
					printf("|        |-> 0.  BACK TO MAIN MENU              |OK|\n");
					printf("|        |-> 1.  MENU ARRAY                     |  |\n");
					printf("|        |-> 2.  MENU STRING                    |  |\n");
					printf("|        |-> 3.  MENU MATRIX                    |  |\n");
					printf("|        |-> 4.  MENU STACK                     |  |\n");
					printf("|        |-> 5.  MENU QUEUE                     |  |\n");
					printf("|        |-> 6.  MENU LIST                      |  |\n");
					printf("|        |-> 7.  MENU TREE                      |  |\n");
					printf("|        |-> 8.  MENU BINARY TREE               |  |\n");
					printf("|__________________________________________________|\n");
					printf("CHOICE DATA-STRUCT: ");
					scanf("%d", &scelta_datastruct);
					switch(scelta_datastruct){
						case 0:{
							clrscr();
						}break;
						
						default:{
							do{
								clrscr();
								printf("|MENU DATA-STRUCT|-> |DEFAULT DATA-STRUCT|\n");
								printf("ERROR DATA-STRUCT CHOICE!! Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s", &torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
					}
					printf("Do you want to back to MAIN MENU?(y/n): ");
					scanf("%s", &torna);
				}while((torna == 'n')&&(torna != 'y'));
			}break; //case 2 (data-struct)
*/
			default:{ //default (main menu)
				do{
					clrscr();
					printf("┌──────────────────────────────┐\n");
					printf("│MAIN MENU                     │\n");
					printf("│└► X.  DEFAULT: ERROR CHOICE! │\n");
					printf("└──────────────────────────────┘\n");
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