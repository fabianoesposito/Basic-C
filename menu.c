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
  │├−► Description:                 │
  └─────────────────────────────────┘*/
void clrscr(void){
	printf("\033[2J");
	printf("\033[0;0f");
}
/*┌─────────────────────────────────┐
  │BASIC                            │
  │├−► Description:                 │
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
/*┌─────────────────────────────────┐
  │PATTERNS                         │
  │├−► Description:                 │
  └─────────────────────────────────┘*/
void binary_pattern(int n){
	int count=1;
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("%d", count++%2);
			if(j == i){
				printf("\n");
			}
		}
		if(i%2 == 0){
			count=1;
		}else{
			count=0;
		}
	}
}

void diamond_patter(int n){
	int space=n-1;
	for(int k=1; k<=n; k++){
		printf("%d: ", k);
		for(int c=1; c<=space; c++){
			printf(" ");
		}
		space--;
		for(int c=1; c<=2*k-1; c++){
			printf("*");
		}
		printf("\n");
	}
	space=1;
	for(int k=1; k<=n-1; k++){
		printf("%d: ", n-k);
		for(int c=1; c<=space; c++){
			printf(" ");
		}
		space++;
		for(int c=1; c<=2*(n-k)-1; c++){
			printf("*");
		}
		printf("\n");
	}
}

void diamond_star_outline(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=n; j>i; j--){
			printf(" ");
		}
		printf("*");
		for(int j=1; j<(i-1)*2; j++){
			printf(" ");
		}
		if(i == 1){
			printf("\n");
		}else{
			printf("*\n");
		}
	}
	for(int i=n-1; i>=1; i--){
		printf("%d: ", i);
		for(int j=n; j>i; j--){
			printf(" ");
		}
		printf("*");
		for(int j=1; j<(i-1)*2; j++){
			printf(" ");
		}
		if(i == 1){
			printf("\n");
		}else{
			printf("*\n");
		}
	}
}

void floyds_triangle(int n){
	int a=1;
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int c=1; c<=i; c++){
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
}

void hollow_diamond(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=(n+1)-i; j++){
			printf("*");
		}
		for(int k=1; k<i; k++){
			printf("  ");
		}
		for (int j=1; j<=(n+1)-i; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2; i<=n; i++){
		printf("%d: ", (n+1)-i);
		for(int j=1; j<=i; j++){
			printf("*");
		}
		for(int k=1; k<=n-i; k++){
			printf("  ");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}

void hollow_square(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=n; j++){
			if((i != 1)&&(i != n)&&(j != 1)&&(j != n)){
				printf(" ");
			}else{
				printf("*");
			}
		}
		printf("\n");
	}
}

void hourglass_pattern(int n){
	int l=n;
	for(int r=1; r<=l; r++){
		printf("%d: ", r);
		for(int sp=1; sp<=r; sp++){
			printf(" ");
		}
		for(int c=1; c<=n; c++){
			printf("*");
		}
		for(int c=l-r; c>=1; c--){
			printf("*");
		}
		n--;
		printf("\n");
	}
	for(int r=2; r<=l; r++){
		printf("%d: ", (l+1)-r);
		for(int sp=l-r+1; sp>=1; sp--){
			printf(" ");
		}
		for(int c=1; c<=r; c++){
			printf("*");
		}
		for(int c=r-1; c>=1; c--){
			printf("*");
		}
		printf("\n");
	}
}

void nested_star_hash_pyramid(int n){
	for(int r=1; r<=(n+r)-1; r++,n--){
		printf("%d: ", r);
		for(int c=1; c<=n; c++){
			printf(" #");
		}
		for(int c=1; c<=r; c++){
			if(c == 1){
				printf(" *");
			}else{
				printf(" #");
			}
		}
		for(int c=r; c>1; c--){
			if(c == 2){
				printf(" *");
			}else{
				printf(" #");
			}
		}
		for(int c=n; c>=1; c--){
			printf(" #");
		}
		printf("\n");
	}
}

void number_aplphabet_pattern(int n){
	char ch='A';
	int i=1;
	for(int r=1; r<n; r++){
		printf("%d: ", r);
		for(int c=1; c<=r; c++){
			if((r%2) == 0){
				printf("%c  ", ch++);
			}else{
				if(i<=9){
					printf("%d  ", i++);
				}else{
					printf("%d ", i++);
				}
			}
		}
		printf("\n");
	}
}

void number_diamond_pattern(int n){
	if((n >= 1)&&(n <= 5)){
		for(int i=1; i<=n; i++){
			printf("%d: ", i);
			for(int j=i; j<n; j++){
				printf(" ");
			}
			for(int k=1; k<(i*2); k++){
				printf("%d", k);
			}
			printf("\n");
		}
		for(int i=n-1; i>=1; i--){
			printf("%d: ", i);
			for(int j=n; j>i; j--){
				printf(" ");
			}
			for(int k=1; k<(i*2); k++){
				printf("%d", k);
			}
			printf("\n");
		}
	}
}

void number_pattern_1(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=n; j>=1; j--){
			if(j <= i){
				printf("%d",j);
			}else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void number_pattern_2(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=n; j++){
			if(j <= i){
				printf("%d",j);
			}else{
				printf(" ");
			}
		}
		for(int j=n-1; j>=1; j--){
			if(j <= i){
				printf("%d",j);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void number_pattern_3(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=i; j>=1; j--){
			printf("%d",j);
		}
		printf("\n");
	}
}

void number_pattern_4(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

void number_pyramid(int n){
	int num=1, space=n-1;
	if((n>=1) && (n<=6)){
		for(int d=1; d<=n; d++){
			printf("%d: ", d);
			num=d;
			for(int c=1; c<=space; c++){
				printf(" ");
			}
			space--;
			for(int c=1; c<=d; c++){
				printf("%d", num);
				num++;
			}
			num=num-2;
			for(int c=1; c<d; c++) {
				printf("%d", num);
				num--;
			}
			printf("\n");
		}
	}
}

long fact(int n){
	long f=1;
	int i=1;
	while(i <= n){
		f=f*i;
		i++;
	}
	return f;
}

void pascal_triangle(int n){
	if(( n>= 1)&&(n <= 6)){
		for(int i=1; i<=n; i++){
			printf("%d: ", i);
			for(int j=1; j<=n-i-1; j++){
				printf(" ");
			}
			for(int j=1; j<=i; j++){
				printf("%ld ", fact(i)/(fact(j)*fact(i-j)));
			}
			printf("\n");
		}
	}
}

void pascal_triangle_2(int n){
	int space=n, number=1;
	for(int c=1; c<=n; c++){
		for(int k=n; k>1; k--){
			printf(" ");
		}
		n--;
		for(int k=1; k<=2*c-1; k++){
			if(k <= c){
				printf("%d", number);
				if(k < c){
					number++;
				}
			}else{
				number--;
				printf("%d", number);
			}
		}
		number=1;
		printf("\n");
	}
}

void pascals_triangle_without_function(int n){
	int s=n, a;
	for(int x=0; x<=n; x++){
		printf("%d: ", x);
		a=1;
		for(int z=s; z>=0; z--){
			printf(" ");
		}
		s--;
		for(int y=0; y<=x; y++){
			printf("%d ", a);
			a=(a*(x-y)/(y+1));
		}
		printf("\n");
	}
}

void pattern_1(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}

void pattern_2(int n){
	int space=n, count;
	for(int c=1; c<=n; c++){
		printf("%d: ", c);
		for(int k=1; k<space; k++){
			printf(" ");
		}
		for(int k=1; k<=c; k++){
			printf("*");
			if((c > 1)&&(count < c)){
				printf("A");
				count++;
			}
		}
		printf("\n");
		space--;
		count=1;
	}
}

void pattern_3(int n){
	int c='A';
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("%c", c);
			c=c+1;
		}
		printf("\n");
	}
}

void pattern_4(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("%d",j);
		}
		for(int j=i-1; j>=1; j--){
			printf("%d",j);
		}
		printf("\n");
	}
}

void pattern_5(int n){
	for(int i=n; i>=1; i--){
		printf("%d: ", (n+1)-i);
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}

void pattern_6(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf ("*");
		}
		for(int k=i; k<=i; k++){
			printf(" ");
		}
		for(int l=1; l<=i; l++){
			printf ("*");
		}
		printf ("\n");
	}
}

void pattern_7(int n){
	int a,j;
	for(int j=1; j<=n; j++){
		printf("%d: ", j);
		for(int i=1; i<=n; i++){
			if(j == i){
				printf("%d ", a);
			}else{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}

void pattern_8(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void pattern_9(int n){
	int no_of_spaces=n-1;
	char ch='*';
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int spaceCount=no_of_spaces; spaceCount>=1; spaceCount--){
			printf("  ");
		}
		for(int j=1; j<=i; j++){
			printf("%2c", ch);
		}
		printf("\n");
		no_of_spaces--;
	}
}

void pattern_10(int n){
	for(int i=n; i>=1; i--){
		printf("%d: ", (n+1)-i);
		for(int j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}

void pyramid(int n){
	int temp=n;
	for(int row=1; row<=n; row++){
		printf("%d: ", row);
		for(int c=1; c<temp; c++){
			printf(" ");
		}
		temp--;
		for(int c=1; c<=2*row-1; c++){
			printf("*");
		}
		printf("\n");
	}
}

void rectangle_pattern(int n){
	int r=1;
	for(; n>=1; n--,r++){
		printf("%d: ", r);
		for(int c=1; c<=n; c++){
			printf("%d",c);
		}
		for(int sp=r; sp>1; sp--){
			printf("_");
		}
		for(int sp=r; sp>1; sp--){
			printf("_");
		}
		for(int c=n; c>=1; c--){
			printf("%d",c);
		}
		printf("\n");
	}
}

void retangle_star_pattern(int n, int m){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=m; j++){
			printf("*");
		}
		printf("\n");
	}
}

void reverse_star_triangle(int n){
	for(int i=n; i>=1; i--){
		printf("%d: ", i);
		for(int j=n; j>i; j--){
			printf(" ");
		}
		for(int k=1; k<(i*2); k++){
			printf("*");
		}
		printf("\n");
	}
}

void rhombus_pattern(int n){
	for(int r=1; r<=n; r++){
		printf("%d: ", r);
		for(int sp=n-r; sp>=1; sp--){
			printf(" ");
		}
		printf("%d", r);
		for(int sp=r*2; sp>1; sp--){
			printf(" ");
		}
		printf("%d\n", r);
	}
	for(int r=1,n=n-1; r<n; r++,n--){
		for(int sp=r; sp>=1; sp--){
			printf(" ");
		}
		printf("%d",n);
		for(int sp=n*2; sp>1; sp--){
			printf(" ");
		}
		printf("%d\n", n);
	}
}

void square_kite_pattern(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=n; j>=i-1; j--){
			printf(" ");
		}
		printf("%d", i);
		for(int j=i+1; j<=(i-1)*3; j++){
			printf(" ");
		}
		if(i > 1){
			printf("%d", i);
		}
		printf("\n");
	}
	for(int i=n-1; i>=1; i--){
		printf("%d: ", i);
		for(int j=n; j>=i-1; j--){
			printf(" ");
		}
		printf("%d", i);
		for(int j=i+1; j<=(i-1)*3; j++){
			printf(" ");
		}
		if(i > 1){
			printf("%d",i);
		}
		printf("\n");
	}
}

void square_star_pattern(int n){
	for(int i=1; i<=n; i++){
		printf("%d: ", i);
		for(int j=1; j<=n; j++){
			printf("*");
		}
		printf("\n");
	}
}

void triangle_borders(char border, char filler, int n){
	int start=2, base=4, length=n;
	for(int i=start; i<=length; i++){
		printf("%d: ", (i-start)+1);
		for(int sp=0; sp<=length-i; sp++){
			printf(" ");
		}
		if(i>start){
			printf("%c ", border);
		}
		if(i>start){
			for(int b=base; b<=i; b++){
				printf("%c ", filler);
			}
		}
		printf("%c \n", border);
	}
	printf("%d: ", length);
	for(int j=base; j<length+base; j++){
		printf("%c ", border);
	}
	printf("\n");
}

void x_pattern(int n){
	int k=1, m[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m[i][j]=0;
			if((j == i)||((n-1)-i == j)){
				m[i][j]=k;
			}
		}
		if(i < n){
			k++;
		}else{
			--k;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(m[i][j] == 0){
				printf(" ");
			}else{
				printf("%d", m[i][j]);
			}
		}
		printf("\n");
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
					printf("│       ├► 4.  MENU PATTERNS                  [●]│\n");
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
							int scelta_patterns=0, n=0;
							do{
								clrscr();
								printf("┌────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                               │\n");
								printf("│└► 1.  MENU BASIC                                       │\n");
								printf("│       └► 4.  MENU PATTERNS                             │\n");
								printf("│              ├► 0.  BACK BASIC MENU                    │\n");
								printf("│              ├► 1.  BINARY PATTERN                     │\n");
								printf("│              ├► 2.  DIAMOND PATTERN                    │\n");
								printf("│              ├► 3.  DIAMOND STAR OUTLINE               │\n");
								printf("│              ├► 4.  FLOYD'S TRIANGLE                   │\n");
								printf("│              ├► 5.  HOLLOW DIAMOND                     │\n");
								printf("│              ├► 6.  HOLLOW SQUARE                      │\n");
								printf("│              ├► 7.  HOURGLASS PATTERN                  │\n");
								printf("│              ├► 8.  NESTED STAR-HASH PYRAMID           │\n");
								printf("│              ├► 9.  NUMBER ALPHABET PATTERN            │\n");
								printf("│              ├► 10. NUMBER DIAMOND PATTERN             │\n");
								printf("│              ├► 11. NUMBER PATTERN-1                   │\n");
								printf("│              ├► 12. NUMBER PATTERN-2                   │\n");
								printf("│              ├► 13. NUMBER PATTERN-3                   │\n");
								printf("│              ├► 14. NUMBER PATTERN-4                   │\n");
								printf("│              ├► 15. NUMBER PYRAMID                     │\n");
								printf("│              ├► 16. PASCAL TRIANGLE                    │\n");
								printf("│              ├► 17. PASCAL TRIANGLE-2                  │\n");
								printf("│              ├► 18. PASCAL'S TRIANGLE WITHOUT FUNCTION │\n");
								printf("│              ├► 19. PATTERN-1                          │\n");
								printf("│              ├► 20. PATTERN-2                          │\n");
								printf("│              ├► 21. PATTERN-3                          │\n");
								printf("│              ├► 22. PATTERN-4                          │\n");
								printf("│              ├► 23. PATTERN-5                          │\n");
								printf("│              ├► 24. PATTERN-6                          │\n");
								printf("│              ├► 25. PATTERN-7                          │\n");
								printf("│              ├► 26. PATTERN-8                          │\n");
								printf("│              ├► 27. PATTERN-9                          │\n");
								printf("│              ├► 28. PATTERN-10                         │\n");
								printf("│              ├► 29. PYRAMID                            │\n");
								printf("│              ├► 30. RECTANGLE PATTERN                  │\n");
								printf("│              ├► 31. RECTANGLE STAR PATTERN             │\n");
								printf("│              ├► 32. REVERSE STAR TRIANGLE              │\n");
								printf("│              ├► 33. RHOMBUS PATTERN                    │\n");
								printf("│              ├► 34. SQUARE KITE PATTERN                │\n");
								printf("│              ├► 35. SQUARE STAR PATTERN                │\n");
								printf("│              ├► 36. TRIANGLE WITH ONLY BORDERS         │\n");
								printf("│              └► 37. X PATTERN                          │\n");
								printf("└────────────────────────────────────────────────────────┘\n");
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

									case 1:{
										do{
											clrscr();
											printf("┌────────────────────────────────────┐\n");
											printf("│MAIN MENU                           │\n");
											printf("│└► 1.  MENU BASIC                   │\n");
											printf("│       └► 4.  MENU PATTERNS         │\n");
											printf("│              └► 1.  BINARY PATTERN │\n");
											printf("└────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											binary_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 4.  MENU PATTERNS          │\n");
											printf("│              └► 2.  DIAMOND PATTERN │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											diamond_patter(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                 │\n");
											printf("│└► 1.  MENU BASIC                         │\n");
											printf("│       └► 4.  MENU PATTERNS               │\n");
											printf("│              └► 3.  DIAMOND STAR OUTLINE │\n");
											printf("└──────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											diamond_star_outline(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 4.  MENU PATTERNS           │\n");
											printf("│              └► 4.  FLOYD'S TRIANGLE │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											floyds_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌────────────────────────────────────┐\n");
											printf("│MAIN MENU                           │\n");
											printf("│└► 1.  MENU BASIC                   │\n");
											printf("│       └► 4.  MENU PATTERNS         │\n");
											printf("│              └► 5.  HOLLOW DIAMOND │\n");
											printf("└────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											hollow_diamond(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌───────────────────────────────────┐\n");
											printf("│MAIN MENU                          │\n");
											printf("│└► 1.  MENU BASIC                  │\n");
											printf("│       └► 4.  MENU PATTERNS        │\n");
											printf("│              └► 6.  HOLLOW SQUARE │\n");
											printf("└───────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											hollow_square(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 4.  MENU PATTERNS            │\n");
											printf("│              └► 7.  HOURGLASS PATTERN │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											hourglass_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                     │\n");
											printf("│└► 1.  MENU BASIC                             │\n");
											printf("│       └► 4.  MENU PATTERNS                   │\n");
											printf("│              └► 8.  NESTED STAR-HASH PYRAMID │\n");
											printf("└──────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											nested_star_hash_pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                    │\n");
											printf("│└► 1.  MENU BASIC                            │\n");
											printf("│       └► 4.  MENU PATTERNS                  │\n");
											printf("│              └► 9.  NUMBER ALPHABET PATTERN │\n");
											printf("└─────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_aplphabet_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 4.  MENU PATTERNS                 │\n");
											printf("│              └► 10. NUMBER DIAMOND PATTERN │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter number of row[min 1, max 5]: ");
											scanf("%d", &n);
											number_diamond_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 11:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 4.  MENU PATTERNS           │\n");
											printf("│              └► 11. NUMBER PATTERN-1 │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_pattern_1(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 12:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 4.  MENU PATTERNS           │\n");
											printf("│              └► 12. NUMBER PATTERN-2 │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_pattern_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 4.  MENU PATTERNS           │\n");
											printf("│              └► 13. NUMBER PATTERN-3 │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_pattern_3(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 14:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 4.  MENU PATTERNS           │\n");
											printf("│              └► 14. NUMBER PATTERN-4 │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_pattern_4(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 15:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 4.  MENU PATTERNS          │\n");
											printf("│              └► 15. NUMBER PYRAMID │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											number_pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 16:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 4.  MENU PATTERNS          │\n");
											printf("│              └► 16. PASCAL TRIANGLE │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pascal_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 17:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 4.  MENU PATTERNS            │\n");
											printf("│              └► 17. PASCAL TRIANGLE-2 │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pascal_triangle_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 18:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                     │\n");
											printf("│└► 1.  MENU BASIC                                             │\n");
											printf("│       └► 4.  MENU PATTERNS                                   │\n");
											printf("│              └► 18. PASCAL'S TRIANGLE WITHOUT USING FUNCTION │\n");
											printf("└──────────────────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pascals_triangle_without_function(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 19:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 19. PATTERN-1 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_1(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 20:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 20. PATTERN-2 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_2(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 21:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 21. PATTERN-3 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_3(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 22:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 22. PATTERN-4 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_4(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 23:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 23. PATTERN-5 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_5(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 24:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 24. PATTERN-6 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_6(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 25:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 25. PATTERN-7 │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_7(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 26:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 26. PATTERN-8 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_8(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 27:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 27. PATTERN-9 │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_9(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 28:{
										do{
											clrscr();
											printf("┌────────────────────────────────┐\n");
											printf("│MAIN MENU                       │\n");
											printf("│└► 1.  MENU BASIC               │\n");
											printf("│       └► 4.  MENU PATTERNS     │\n");
											printf("│              └► 28. PATTERN-10 │\n");
											printf("└────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pattern_10(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 29:{
										do{
											clrscr();
											printf("┌─────────────────────────────┐\n");
											printf("│MAIN MENU                    │\n");
											printf("│└► 1.  MENU BASIC            │\n");
											printf("│       └► 4.  MENU PATTERNS  │\n");
											printf("│              └► 29. PYRAMID │\n");
											printf("└─────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											pyramid(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 30:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 4.  MENU PATTERNS            │\n");
											printf("│              └► 30. RECTANGLE PATTERN │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											rectangle_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 31:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 4.  MENU PATTERNS                 │\n");
											printf("│              └► 31. RECTANGLE STAR PATTERN │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											int m=n;
											retangle_star_pattern(n,m);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 32:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 4.  MENU PATTERNS                │\n");
											printf("│              └► 32. REVERSE STAR TRIANGLE │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											reverse_star_triangle(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 33:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 4.  MENU PATTERNS          │\n");
											printf("│              └► 33. RHOMBUS PATTERN │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											rhombus_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 34:{
										
										do{
											clrscr();
											printf("┌─────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                │\n");
											printf("│└► 1.  MENU BASIC                        │\n");
											printf("│       └► 4.  MENU PATTERNS              │\n");
											printf("│              └► 34. SQUARE KITE PATTERN │\n");
											printf("└─────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											square_kite_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 35:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                │\n");
											printf("│└► 1.  MENU BASIC                        │\n");
											printf("│       └► 4.  MENU PATTERNS              │\n");
											printf("│              └► 35. SQUARE STAR PATTERN │\n");
											printf("└─────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											square_star_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 36:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 4.  MENU PATTERNS                     │\n");
											printf("│              └► 36. TRIANGLE WITH ONLY BORDERS │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											triangle_borders('*',' ',n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 37:{
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 4.  MENU PATTERNS    │\n");
											printf("│              └► 37. X PATTERN │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter number of row: ");
											scanf("%d", &n);
											x_pattern(n);
											printf("Do you want to back to PATTERN MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

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