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
/*┌─────────────────────────────────────────────────────┐
  │MAIN MENU                                            │
  │├► 1 BASIC                                           │
  ││    ├► 0 BACK TO MAIN MENU           - Description: │
  ││    ├► 1 HELLO WORLD                 - Description: │*/
void hello_world(){
	printf("HELLO WORLD!\n");
}
/*││    ├► 2 VAR SIZE                    - Description: │*/
void var_sizes(){
	int c=sizeof(char), i=sizeof(int);
	int f=sizeof(float), d=sizeof(double);
	printf("Size of char: %d byte\n",c);
	printf("Size of int: %d byte\n",i);
	printf("Size of float: %d byte\n",f);
	printf("Size of double: %d byte\n",d);
}
/*││    ├► 3 ASCII TABLE                    - Description: │*/
void ascii_table(){
	printf("INT\tCHAR\t\tINT\tCHAR\t\tINT\tCHAR\n");
	for(int i=32; i<=63; i++){
		printf("%d\t%c\t\t%d\t%c\t\t%d\t%c\n", i, i, i+32, i+32, i+64, i+64);
	}
}
/*││    ├► 4 PATTERNS                    - Description: │*/
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
/*││    ├► 5 NUMBERS                     - Description: │*/
void add_n_numbers(){
	int n=0, val=0, sum=0;
	printf("Enter the 'n' numbers: ");
	scanf("%d", &n);
	printf("Enter %d integers: ", n);
	for(int i=0; i<n; i++){
		scanf("%d", &val);
		sum=sum+val;
	}
	printf("Sum of %d integer numbers is: %d\n", n, sum);
}

void armstrong_number(int n){
	int a, b=0, t=n;
	while(n > 0){
		a=n%10;
		b=b+a*a*a;
		n=n/10; 
	}
	if(b == t){
		printf("%d is an Armstrong number\n", t);
	}else{
		printf("%d is not an Armstrong number\n", t);
	}
}

void average_numb(int n){
	float sum=0, x, avg;
	for(int count=1; count<=n; count++){
		scanf("%f", &x);
		sum+=x;
	}
	avg=sum/n;
	printf("The Average of Numbers is: %0.2f\n", avg);
}

void square_n(int r){
	int n, sqr;
	for(int i=1; i<=r; i++){
		n=i;
		sqr=n*n;
		printf("Square of %d is %d\n",n,sqr);
	}
}

void sum_natural(int n){
	int sum=0;
	for(int i=1; i<=n; ++i){
		sum += i;
	}
	printf("Sum = %d\n",sum);
}

void check_prime(int n){
	int c;
	for(c=2; c<=n-1; c++){
		if((n%c) == 0){
			printf("%d is not prime\n", n);
			break;
		}
	}
	if(c == n){
		printf("%d is prime\n", n);
	}
}

void check_intfloat(char n[]){
	int length=strlen(n), flag=0;
	while(length--){
		if(n[length]=='.'){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("Entered Number is a Float Number\n");
	}else{
		printf("Entered Number is a Integer\n");
	}
}

void check_posneg(double n){
	if(n <= 0.0){
		if(n == 0.0){
			printf("You entered 0.\n");
		}else{
			printf("You entered a negative number.\n");
		}
	}else{
		printf("You entered a positive number.\n");
	}
}

void prime_interval(int n1, int n2){
	int flag=0;
	printf("Prime numbers between %d and %d are: ", n1, n2);
	for(int i=n1+1; i<n2; ++i){
		flag=0;
		for(int j=2; j<=i/2; ++j){
			if(i%j == 0){
				flag=1;
				break;
			}
		}
		if(flag == 0){
			printf("%d ",i);
		}
	}
	printf("\n");
}

long int factorial(int n){
	if(n <= 1){
		return (1);
	}else{
		n=n*factorial(n-1);
		return (n);
	}
}

void Factors_numb(int n){
	int i;
	printf("Factors of %d are: ", n);
	for(i=1; i<=n; ++i){
		if(n%i == 0){
			printf("%d ",i);
		}
	}
	printf("\n");
}

void fibonacci(){
	int i, t1=0, t2=1, next=0;
	printf("Enter positive number: ");
	scanf("%d", &i);
	printf("Fibonacci: %d , %d , ", t1, t2);
	next=t1+t2;
	while(next <= i){
		printf("%d", next);
		t1=t2;
		t2=next;
		next=t1+t2;
		if(next > i){
			printf(" .\n");
		}else{
			printf(" , ");
		}
	}
}

void even_or_odd(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	if((n/2)*2 == n){
		printf("%d is even\n", n);
	}else{
		printf("%d is odd\n", n);
	}
}

void sum_binarynumbs(long binary1, long binary2){
	int i=0, remainder=0, sum[20];
	while(binary1 !=0|| binary2 !=0){
		sum[i++]=(binary1%10+binary2 %10+remainder)%2;
		remainder=(binary1%10+binary2%10+remainder)/2;
		binary1=binary1/10;
		binary2=binary2/10;
	}
	if(remainder != 0){
		sum[i++]= remainder;
	}
	--i;
	printf("Sum of two binary numbers: ");
	while(i >= 0){
		printf("%d", sum[i--]);
	}
	printf("\n");
}

void power_numb(int base, int exponent){
	long long result=1;
	while(exponent != 0){
		result*=base;
		--exponent;
	}
	printf("Answer = %lld\n", result);
}

void harmonic_series(double n){
	double sum=0, i;
	for(i=1; i<=n ;i++){
		sum=sum+(1/i);
		if(i == 1){
			printf("1+");
		}else if(i == n){
			printf("(1/%d)", (int)i);
		}else{
			printf("(1/%d)+", (int)i);
		}
	}
	printf(" = %.2lf\n",sum);
}

void hcf_lcm(int x, int y){
	int a=x;
	int b=y;
	while(b != 0) {
		int t=b;
		b=a%b;
		a=t;
	}
	int gcd=a;
	int lcm=(x*y)/gcd;
	printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
	printf("Least common multiple of %d and %d = %d\n", x, y, lcm);	
}

void largest_numb(int n){
	int big, num;
	printf("Number %d : ",1);
	scanf("%d",&big);
	for(int i=2; i<=n; i++){
		printf("Number %d : ",i);
		scanf("%d",&num);
		if(big < num){
			big=num;
		}
	}
	printf("Largest number is: %d\n",big);
}

void mult_table(int n){
	for(int i=1; i<=10; ++i){
		printf("%d*%d = %d\n", n, i, n*i);
	}
}

void palindrome(int n){
	int temp, reverse=0;
	temp=n;
	while(temp != 0){
		reverse=reverse*10;
		reverse=reverse+temp%10;
		temp=temp/10;
	}
	if(n == reverse){
		printf("%d is a palindrome number.\n", n);
	}else{
		printf("%d is not a palindrome number.\n", n);
	}
}

void perfect_numb(int n){
	int sum=0, i=1;
	while(i < n){
		if(n%i == 0){
			sum=sum+i;
		}
		i++;
	}
	if(sum == n){
		printf("%d is a perfect number\n", i);
	}else{
		printf("%d is not a perfect number\n", i);
	}
}

void reverse_numb(int n){
	int reverse=0;
	while(n != 0){
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("Reverse of entered number is: %d\n", reverse);
}

double sumseries(double m){
	double sum2=0, f=1, i;
	for(i=1; i<=m; i++){
		f=f*i;
		sum2=sum2+(i/f);
		if(i == m){
			printf("%.2lf / %.2lf = %lf",i,f,sum2);
		}else{
			printf("%.2lf / %.2lf + \n",i,f);
		}
	}
	return(sum2);
}

void swap1(int a, int b){
	int t=a;
	a=b;
	b=t;
	printf("a:%d b:%d\n", a, b);
}

void swap2(int a, int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d b:%d\n", a, b);
}

void swap3(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
/*││    ├► 6 MATH FORMULA                - Description: │*/
void area_circle(){
	int r;
	float PI=3.14, area;
	printf("Enter radius of circle: ");
	scanf("%d", &r);
	area=PI*r*r;
	printf("Area of circle : %f\n", area);
}

void area_triangle(){
	int h, b;
	float area;
	printf("Enter the height of the triangle: ");
	scanf("%d", &h);
	printf("Enter the base of the triangle: ");
	scanf("%d", &b);
	area=(h*b)/2;
	printf("The area of the triangle is: %f\n", area);
}

void area_parallelogram(){
	float base, altitude, area;
	printf("Enter the base of the Parallelogram: ");
	scanf("%f", &base);
	printf("Enter the altitude of the Parallelogram: ");
	scanf("%f", &altitude);
	area=base*altitude;
	printf("Area of Parallelogram is: %.3f\n", area);
}

void area_rhombus(){
	float diagonal1, diagonal2, area;
	printf("Enter diagonal1 of the Rhombus: ");
	scanf("%f", &diagonal1);
	printf("Enter diagonal2 of the Rhombus: ");
	scanf("%f", &diagonal2);
	area=0.5*diagonal1*diagonal2;
	printf("Area of rhombus is: %.3f\n", area);
}

void area_right_angled_triangle(){
	float height, width, area;
	printf("Enter height of the Right Angled Triangle: ");
	scanf("%f", &height);
	printf("Enter width of the Right Angled Triangle: ");
	scanf("%f", &width);
	area=0.5*height*width;
    printf("Area of the Right Angled Triangle is: %.3f\n", area);	
}

void probability_distribution(){
	float nuArr[MAXSIZE], mean, variance, standardDeviation, sum=0, sum1=0;
	int size;

	printf("Enter numbers you want to calculate: ");
	scanf("%d", &size);
	printf("Enter %d numbers: ", size);
	for(int i=0; i<size; i++){
		scanf("%f", &nuArr[i]);
		sum=sum+nuArr[i];
	}
	mean=sum/(float)size;
	for(int i=0; i<size; i++){
		sum1=sum1+pow((nuArr[i]-mean),2);
	}
	variance=sum1/(float)size;
	standardDeviation=sqrt(variance);
	printf("Mean of all headents: %.2f\n", mean);
	printf("Variance of all headents: %.2f\n", variance);
	printf("Standard deviation: %.2f\n", standardDeviation);
}

void sin_x(){
	int n, x1;
	float accuracy, term, denominator, x, sinx, sinval;

	printf("Enter the value of x (in degrees): ");
	scanf("%f",&x);
	x1=x;
	x=x*(3.142/180.0);
	sinval =sin(x);
	printf("Enter the accuracy for the result: ");
	scanf("%f", &accuracy);
	term=x;
	sinx=term;
	n=1;
	do{
		denominator=2*n*(2*n+1);
		term=-term*x*x/denominator;
		sinx=sinx+term;
		n=n+1;
	}while(accuracy <= fabs(sinval-sinx));
	printf("Sum of the sine series: %f\n", sinx);
	printf("Using Library function sin(%d): %f\n", x1,sin(x));
}

void cos_x(){
	int n, x1;
	float accuracy, term, denominator, x, cosx, cosval;

	printf("Enter the value of x(in degrees): ");
	scanf("%f", &x);
	x1=x;
	x=x*(3.142/180.0);
	cosval=cos(x);
	printf("Enter the accuracy for the result: ");
	scanf("%f", &accuracy);
	term=1;
	cosx=term;
	n=1;
	do{
		denominator=2*n*(2*n -1);
		term=-term*x*x/denominator;
		cosx=cosx+term;
		n=n+1;
	}while(accuracy <= fabs(cosval-cosx));
	printf("Sum of the cosine series: %f\n", cosx);
	printf("Using Library function cos(%d): %f\n", x1, cos(x));
}

void cosx_series(){
	int n, x1;
	float x, sign, cosx, fact;

	printf("Enter the number of the terms in a series: ");
	scanf("%d", &n);
	printf("Enter the value of x(in degrees): ");
	scanf("%f", &x);
	x1=x;
	x=x*(3.142/180.0);
	cosx=1;
	sign=-1;
	for(int i=2; i<=n; i=i+2){
		fact=1;
		for(int j=1; j<=i; j++){
			fact=fact*j;
		}
		cosx=cosx+(pow(x,i)/fact)*sign;
		sign=sign*(-1);
	}
	printf("Sum of the cosine series: %7.2f\n", cosx);
	printf("The value of cos(%d) using library function: %f\n", x1,cos(x));
}

void surface_area_volume_cube(){
	float side, surfacearea, volume;

	printf("Enter the length of a side: ");
	scanf("%f", &side);
	surfacearea=6.0*side*side;
	volume=pow(side,3);
	printf("Surface area: %6.2f and Volume: %6.2f\n", surfacearea, volume);
}

void roots_quadr_equation(float a, float b, float c){
	float determinant, r1,r2, real, imag;
	determinant=b*b-4*a*c;
	if (determinant>0){
		r1=(-b+sqrt(determinant))/(2*a);
		r2=(-b-sqrt(determinant))/(2*a);
		printf("Roots are: %.2f and %.2f\n",r1 , r2);
	}else if (determinant==0){
		r1=r2=-b/(2*a);
		printf("Roots are: %.2f and %.2f\n", r1, r2);
	}else{
		real=-b/(2*a);
		imag=sqrt(-determinant)/(2*a);
		printf("Roots are: %.2f+%.2fi and %.2f-%.2fi\n", real, imag, real, imag);
	}
}

void greatest_three_number(float a, float b, float c){
	if((a >= b)&&(a >= c)){
		printf("Largest number= %.2f", a);
	}
	if((b >= a)&&(b >= c)){
		printf("Largest number= %.2f", b);
	}
	if(c>=a && c>=b){
		printf("Largest number= %.2f", c);
	}
}

void leap_year(){
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if((year >= 1000)&&(year <= 3000)){
		if(year%4 == 0){
			if(year%100 == 0){
				if(year%400 == 0){
					printf("%d is leap\n", year);
				}else{
					printf("%d is not leap\n", year);
				}
			}else{
				printf("%d is leap\n", year);
			}
		}else{
			printf("%d is not leap\n", year);
		}
	}else{
		printf("year %d WRONG!!!\n", year);
		do{
			printf("Enter year: ");
			scanf("%d", &year);
			leap_year(year);
		}while((year<1000)||(year>3000));
	}
}

void perfect_square(int number){
	for(int i=0; i<=number; i++){
		if(number == i * i){
			printf("%d is perfect square\n", number);
			return;
		}
	}
	printf("%d is not perfect square\n", number);
}

void simple_interest(float principal_amt, float rate, int time){
	float simple_int=(principal_amt*rate*time)/100.0;
	char perc='%';
	printf("Amount: Rs. %5.2f\n", principal_amt);
	printf("Rate: %5.2f%c\n", rate, perc);
	printf("Time: %d years\n", time);
	printf("Simple interest: %5.2f\n", simple_int);
}

void sum_aps(int a, int n, int d){
	int sum=0, tn, i;
	sum=(n*(2*a+(n-1)*d))/2;
	tn=a+(n-1)*d;
	printf("Sum of the A.P series is: ");
	for(i=a; i<=tn; i=i+d){
		if(i != tn){
			printf("%d + ", i);
		}else{
			printf("%d = %d\n", i, sum);
		}
	}
}

void sum_gps(float a, int n, float r){
	float last_term, sum=0;
	sum=(a*(1-pow(r,n+1)))/(1-r);
	last_term=a*pow(r,n-1);
	printf("Last_term term of G.P.: %f\n", last_term);
	printf("Sum of the G.P.: %f\n", sum);
}

float sum_hps(int n, float sum){
	float i, term;
	sum=0;
	for(i=1; i<=n; i++){
		term=1/i;
		sum=sum+term;
	}
	return sum;
}

void vol_sur_cylinder(float radius, float height){
	float surface_area, volume;
	surface_area=2*(22/7)*radius*(radius+height);
	volume=(22/7)*radius*radius*height;
	printf("Surface area of cylinder is: %.3f\n", surface_area);
	printf("Volume of cylinder is: %.3f\n", volume);
}

void vol_sur_cuboid(float width, float height, float length){
	float surfacearea, volume, space_diagonal;
	surfacearea=2*(width*length+length*height+height*width);
    volume=width*length*height;
    space_diagonal=sqrt(width*width+length*length+height*height);
    printf("Surface area of cuboids is: %.3f\n", surfacearea);
    printf("Volume of cuboids is: %.3f\n", volume);
    printf("Space diagonal of cuboids is: %.3f\n", space_diagonal);
}

void vol_sur_cone(float radius, float height){
	float surface_area, volume;
	surface_area=(22/7)*radius*(radius+sqrt(radius*radius+height*height));
    volume=(1.0/3)*(22/7)*radius*radius*height;
    printf("Surface area of cone is: %.3f\n", surface_area);
    printf("Volume of cone is: %.3f\n", volume);
}

void vol_sur_sphare(float radius){
	float surface_area, volume;
	surface_area=4*(22/7)*radius*radius;
	volume=(4.0/3)*(22/7)*radius*radius*radius;
	printf("Surface area of sphere is: %.3f\n", surface_area);
	printf("Volume of sphere is: %.3f\n", volume);
}
/*││    ├► 7 FLOATING-POINT ARITHMETIC   - Description: │*/
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
/*││    ├► 8 CONVERSIONS                 - Description: │*/
char romanval[MAX];
int i=0;
int binary_decimal(int n){
	int decimal=0, i=0, rem;
	while(n != 0){
			rem=n%10;
			n/=10;
			decimal+=rem*pow(2,i);
			++i;
	}
	return decimal;
}

long int binary_octal(long int n){
	long int octal=0, i=1, rem;
	while(n != 0){
		rem=n%10;
		octal=octal+rem*i;
		i=i*2;
		n=n/10;
	}
	return octal;
}

long int binary_hexadecimal(long int n){
	long int hexadecimal=0, i=1, rem;
	while(n != 0){
		rem=n%10;
		hexadecimal=hexadecimal+rem*i;
		i=i*2;
		n=n/10;
	}
	return hexadecimal;
}

void uppercase_lowercase(char str[]){
	for(int i=0; i<=strlen(str); i++){
		if((str[i] >= 65)&&(str[i]<=90)){
			str[i]=str[i]+32;
		}
	}
}

char reverse_char(char strn[]){
	if(islower(*strn)){
		putchar(toupper(*strn));
	}else{
		putchar(tolower(*strn));
	}
	return strn[MAXSIZE];
}

void predigit(char num1, char num2){
	romanval[i++] = num1;
	romanval[i++] = num2;
}

void postdigit(char c, int n){
	int j;
	for(j = 0; j < n; j++)
		romanval[i++] = c;
}

int value(char r){
	if (r == 'I'){
		return 1;
	}
	if (r == 'V'){
		return 5;
	}
	if (r == 'X'){
		return 10;
	}
	if (r == 'L'){
		return 50;
	}
	if (r == 'C'){
		return 100;
	}
	if (r == 'D'){
		return 500;
	}
	if (r == 'M'){
		return 1000;
	}
	return -1;
}

int romanToDecimal(char *str){
	int res=0;
	for (int i=0; i<strlen(str); i++){
		int s1=value(str[i]);
		if (i+1 < strlen(str)){
			int s2=value(str[i+1]);
			if (s1 >= s2){
				res=res+s1;
			}else{
				res=res+s2-s1;
				i++;
			}
		}else{
			res=res+s1;
			i++;
		}
	}
	return res;
}

void decimal_hexadecimal(long int decimal){
	int j=0, length=0;
	long quo, rem;
	char hexadecimalnum[100];
	quo=decimal;
	while(quo != 0){
		rem=quo%16;
		if(rem < 10){
			hexadecimalnum[j++]=48+rem;
		}else{
			hexadecimalnum[j++]=55+rem;
		}
		quo=quo/16;
	}
	for(int i=j; i >= 0; i--){
		printf("%c", hexadecimalnum[i]);
	}
}

void decimal_octal(long int decimal, int octal[]){
	int i=0;
	long int rem=0, quo=0;
	quo=decimal;
	while(quo != 0){
		octal[i++]=quo%8;
		quo=quo/8;
	}
	for(int j=i-1; j>=0; j--){
	printf("%d", octal[j]);
	}
}

void decimal_binary(int n){
	int k;
	for(int c=31; c>=0; c--){
		k=n>>c;
		if(k & 1){
			printf("1");
		}else{
			printf("0");
		}
	}
	printf(" binary\n");
}

int octal_decimal(long int octal, int decimal){
	int i=0;
	while(octal != 0){
		decimal=decimal+(octal%10)*pow(8,i++);
		octal=octal/10;
	}
	return decimal;
}

void octal_binary(char octal[]){
	int i=0;
	while(octal[i]){
		switch(octal[i]){
			case '0':{
				printf("000");
			}break;

			case '1':{
				printf("001");
			}break;

			case '2':{
				printf("010");
			}break;

			case '3':{
				printf("011");
			}break;

			case '4':{
				printf("100");
			}break;

			case '5':{
				printf("101");
			}break;

			case '6':{
				printf("110");
			}break;

			case '7':{
				printf("111");
			}break;

			default:{
				printf("ERROR: invalid octal digit %c\n", octal[i]);
			}break;
		}
		i++;
	}
}

float celsius_fahrenheit(float celsius, float fahrenheit){
	return fahrenheit=(1.8*celsius)+32;
}

double fahrenheit_celsius(int fahrenheit, double celsius){
	return celsius=(5.0/9.0)*(fahrenheit-32);
}
/*││    └► 9 RANDPASS                    - Description: │*/
void randpass(int length, int lower, int upper){ //1/2/3/4
	srand((unsigned int)time(NULL));
	while(length){
		putchar(rand()%(upper-lower+1)+lower);
		srand(rand());
		length--;
	}
	printf("\n");
}

void randpass_sym(int length, int lower, int upper){ //5
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if( (!(val >= 48)) || (!(val <= 57)) && (!(val >= 65)) || (!(val <= 90))&& (!(val >= 97)) || (!(val <= 122)) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cl_cu(int length, int lower, int upper){ //6
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if((val >= 65 && val <= 90)||(val >= 97 && val <= 122)){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cl_cu_num(int length, int lower, int upper){ //7
		srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if(!( (!(val >= 48)) || (!(val <= 57)) && (!(val >= 65)) || (!(val <= 90))&& (!(val >= 97)) || (!(val <= 122)) ) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cl_cu_sym(int length, int lower, int upper){ //8
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if(!( ((val >= 48)) && ((val <= 57)) && (!(val >= 65)) || (!(val <= 90))&& (!(val >= 97)) || (!(val <= 122)) ) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cu_num(int length, int lower, int upper){ //9
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if((val >= 65 && val <= 90)||(val >= 48 && val <= 57)){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cu_sym(int length, int lower, int upper){ //10
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if( (!(val >= 48)) || (!(val <= 57)) && (!(val >= 97)) || (!(val <= 122)) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cl_num(int length, int lower, int upper){ //11
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if((val >= 97 && val <= 122)||(val >= 48 && val <= 57)){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_cl_sym(int length, int lower, int upper){ //12
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if( (!(val >= 48)) || (!(val <= 57)) && (!(val >= 65)) || (!(val <= 90)) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}

void randpass_num_sym(int length, int lower, int upper){
	srand((unsigned int)time(NULL));
	while(length){
		int val=(rand()%(upper-lower+1)+lower);
		if( (!(val >= 65)) || (!(val <= 90))&& (!(val >= 97)) || (!(val <= 122)) ){
			putchar(val);
			srand(rand());
			length--;
		}
	}
	printf("\n");
}
/*│└► 2 DATA-STRUCTURES                           │
  │     ├► ARRAY       - Description:             │*/
void print_array(int dim, int A[dim]){
	printf("A[%d]: {", dim);
	for(int i=0; i<dim; i++){
		printf(" %d ", A[i]);
	}
	printf("}\n");
}

void ins_random_array(int dim, int A[dim]){
	int upper=10, lower=0;
	srand(time(NULL));
	for(int i=0; i<dim; i++){
		int val=rand()%(upper-lower+1)+lower;
		A[i]=val;
	}
	print_array(dim,A);
}

void ins_by_dim_array(int dim, int A[dim]){
	int val=dim;
	for(int i=0; i<dim; i++){
		A[i]=val;
		val--;
	}
	print_array(dim,A);
}

int ins_manual_array(int dim, int A[dim]){
	for(int i=0; i<dim; i++){
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	print_array(dim,A);
}

void ins_array(int dim, int A[dim]){
	char scelta_ins='n';
	printf("Insert random value/s?(y/n): ");
	scanf("%s", &scelta_ins);
	if((scelta_ins == 'y')&&(scelta_ins != 'n')){
		ins_random_array(dim,A);
	}else{
		printf("Insert dim value/s?(y/n): ");
		scanf("%s", &scelta_ins);
		if((scelta_ins == 'y')&&(scelta_ins != 'n')){
			ins_by_dim_array(dim,A);
		}else{
			printf("Inserting manual: \n");
			ins_manual_array(dim,A);
		}
	}
}

int partition(int arr[], int l, int h){
	int x=arr[h], i=(l-1);
	for(int j=l; j<=h-1; j++){
		if(arr[j] <= x){
			i++;
			swap3(&arr[i],&arr[j]);
		}
	}
	swap3(&arr[i+1],&arr[h]);
	return (i+1);
}

int cost_piu_array(int k, int A[], int dim){
	for(int i=0; i<dim; i++){
		A[i]=k+A[i];
	}
	return A[dim];
}

int cost_per_array(int k, int A[], int dim){
	for(int i=0; i<dim; i++){
		A[i]=k*A[i];
	}
	return A[dim];
}

int A_piu_A(int A[], int dim){
	for(int i=0; i<dim; i++){
		A[i]=A[i]+A[i];
	}
	return A[dim];
}

int A_per_A(int A[], int dim){
	for(int i=0; i<dim; i++){
		A[i]=A[i]*A[i];
	}
	return A[dim];
}

int inversione_array(int A[], int dim){
	int t, r=dim/2;
	for(int i=0; i<r; i++){
		t=A[i];
		A[i]=A[dim-i-1]; 
		A[dim-i-1]=t;
	}
}

int massimo(int A[], int n, int max){
	max=A[0];
	for(int i=1; i<n; i++){
		if(A[i] > max){
			max=A[i];
		}
	}
	return max;
}

int minimo(int A[], int n, int min){
	min=A[0];
	for(int i=1; i<n; i++){
		if(A[i] < min){
			min=A[i];
		}
	}
	return min;
}

void bubble_I(int A[], int dim){
	for(int i=0; i<dim-1; i++){
		for(int j=0; j<(dim-1)-i; j++){
			if(A[j] > A[j+1]){
				swap3(&A[j],&A[j+1]);
			}
		}
	}
}

void sel_I(int A[], int dim){
	for(int i=0; i<dim-1; i++){
		int min=i;
		for(int j=i+1; j<dim; j++){
			if(A[j] < A[min]){
				min=j;
			}
		}
		swap3(&A[min],&A[i]);
	}
}

void ins_I(int A[], int dim){
	for(int i=1; i<dim; i++){
		int key=A[i], j=i-1;
		while((j >= 0)&&(A[j] > key)){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}

void merge(int A[], int left, int middle, int right){
	int n1=middle-left+1;
	int n2=right-middle;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i]=A[left+i];
	}
	for(int j=0; j<n2; j++){
		R[j]=A[middle+1+j];
	}
	int i=0;
	int j=0;
	int k=left;
	while((i < n1)&&(j < n2)){
		if(L[i] <= R[j]){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
		}
		k++;
	} 	
	while(i < n1){
		A[k]=L[i];
		i++;
		k++;
	}
	while(j < n2){
		A[k]=R[j];
		j++;
		k++;
	}
}

int min(int x, int y){
	return (x<y)? x :y;
}

void merge_I(int A[], int dim){
	int curr_size, left_start;
	for(curr_size=1; curr_size<=dim-1; curr_size=2*curr_size){
		for(left_start=0; left_start<dim-1; left_start += 2*curr_size){
			int mid=left_start+curr_size-1;
			int right_end=min(left_start+2*curr_size-1,dim-1);
			merge(A,left_start,mid,right_end);
		}
	}
}

void quick_I(int A[], int l, int h){
	int stack[h-l+1], top=-1;
	stack[++top]=l;
	stack[++top]=h;
	while(top >= 0){
		h=stack[top--];
		l=stack[top--];
		int p=partition(A,l,h);		
		if(p-1 > l){
			stack[++top]=l;
			stack[++top]=p-1;
		}
		if(p+1 < h){
			stack[++top]=p+1;
			stack[++top]=h;
		}
	}
}

void bubble_R(int A[], int dim){
	if(dim == 1){
		return;
	}
	for(int i=0; i<dim-1; i++)
		if(A[i] > A[i+1])
			swap3(&A[i],&A[i+1]);

	bubble_R(A,dim-1);
}

void ins_R(int A[], int dim){
	if(dim <= 1){
		return;
	}
 	ins_R(A,dim-1);
 	int last=A[dim-1], j=dim-2;
	while((j>=0)&&(A[j] > last)){
		A[j+1]=A[j];
		j--;
	}
	A[j+1]=last;
}

void merge_R(int A[], int left, int right){
	if(right > left){
		int middle=left+(right-left)/2;
		merge_R(A,left,middle);
		merge_R(A,middle+1,right);
		merge(A,left,middle,right);
	}
}

void quick_R(int A[], int l, int h){
	if(l < h){
		int p=partition(A,l,h);
		quick_R(A,l,p-1);
		quick_R(A,p+1,h);
	}
}

int linear_I(int A[], int dim, int x){
	for(int i=0; i<dim; i++)
		if(A[i] == x)
			return i;
	return -1;
}

int binary_I(int A[], int l, int r, int x){
	if(r >= l){
		int mid=l+(r-l)/2;
		if(A[mid] == x){
			return mid;
		}
		if(A[mid] > x){
			return binary_I(A,l,mid-1,x);
		}
		return binary_I(A,mid+1,r,x);
	}
	return -1;
}
/*│     ├► STRING      - Description:             │*/
/*│     ├► MATRIX      - Description:             │*/
void print_matrix(int r, int c, int M[r][c]){
	printf("M[%d][%d]= r\\c ", r, c);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(i == 0){
				printf(" %d|  ", j);
			}
		}
		printf("\n\t %d|", i);
		for(int j=0; j<c; j++){
			printf("%4d|", M[i][j]);
		}
	}
	printf("\n");
}

void print_matrix1(int r, int c, float M[r][c]){
	printf("M[%d][%d]= r\\c ", r, c);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(i == 0){
				printf("  %d|  ", j);
			}
		}
		printf("\n\t %d|", i);
		for(int j=0; j<c; j++){
			if(M[i][j] == -0){
				M[i][j]=0;
			}
			printf("%.3f|", M[i][j]);
		}
	}
	printf("\n");
}

void ins_random_matrix(int r, int c, int M[r][c]){
	int upper=10, lower=0, n=r+c;
	srand((unsigned int)time(NULL));
	//srand(time(NULL));
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=0;
		}
	}
	//print_matrix(r,c,M);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			for(int l=0; l<n; l++){
				int val=rand()%(upper-lower+1)+lower;
				srand(rand());
				M[i][j]=val;
			}
		}
	}
	print_matrix(r,c,M);
}

void ins_value_by_dim(int r, int c, int M[r][c]){
	int upper=10, lower=0, n=r+c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=0;
		}
	}
	//print_matrix(r,c,M);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=n;
			n--;
		}
	}
	print_matrix(r,c,M);
}

void ins_id_val(int r, int c, int M[r][c]){
	int upper=10, lower=0, n=r+c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=0;
		}
	}
	//print_matrix(r,c,M);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(i==j){
				M[i][j]=1;
			}else{
				M[i][j]=0;
			}
		}
	}
	print_matrix(r,c,M);
}

void ins_manual(int r, int c, int M[r][c]){
	int upper=10, lower=0, n=r+c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=0;
		}
	}
	//print_matrix(r,c,M);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	print_matrix(r,c,M);
}

void ins_matrix(int r, int c, int M[r][c]){
	char scelta_ins='n';
	printf("Insert random value/s?(y/n): ");
	scanf("%s", &scelta_ins);
	if((scelta_ins == 'y')&&(scelta_ins != 'n')){
		ins_random_matrix(r,c,M);
	}else{
		printf("Insert dimension value/s?(y/n): ");
		scanf("%s", &scelta_ins);
		if((scelta_ins == 'y')&&(scelta_ins != 'n')){
			ins_value_by_dim(r,c,M);
		}else{
			printf("Insert identity value/s?(y/n): ");
			scanf("%s", &scelta_ins);
			if((scelta_ins == 'y')&&(scelta_ins != 'n')){
				ins_id_val(r,c,M);
			}else{
				ins_manual(r,c,M);
			}
		}
	}
}

void k_piu_M(int r, int c, int M[r][c]){
	int k=0;
	printf("Insert k value: ");
	scanf("%d", &k);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]+=k;
		}
	}
}

void k_x_M(int r, int c, int M[r][c]){
	int k=0;
	printf("Insert k value: ");
	scanf("%d", &k);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]*=k;
		}
	}
}

void M_piu_M(int r, int c, int M[r][c]){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]+=M[i][j];
		}
	}
}

void M_meno_M(int r, int c, int M[r][c]){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]-=M[i][j];
		}
	}
}

void M_x_M(int r, int c, int M[r][c]){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]*=M[i][j];
		}
	}
}

void reduction(int r, int c, float a[][c+c], int pivot){
	float factor=a[pivot][pivot];
	for(int i=0; i<2*r; i++){
		a[pivot][i] /= factor;
	}
	for(int i=0; i<r; i++){
		if(i != pivot){
			factor=a[i][pivot];
			for(int j=0; j<2*r; j++){
				a[i][j]=a[i][j]-a[pivot][j]*factor;
			}
		}
	}
}

void inverse_matrix(int r, int c, int M[r][c]){ //testare con una matrice 2x2
	float matrix[r][c+c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c+c; j++){
			if(j == i + r){
				matrix[i][j]=1;
			}else{
				matrix[i][j]=0;
			}
		}
	}
	print_matrix1(r,c+c,matrix);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			matrix[i][j]=M[i][j];
		}
	}
	print_matrix1(r,c+c,matrix);
	for(int i=0; i<r; i++){
		reduction(r,c,matrix,i);
	}
	print_matrix1(r,c+c,matrix);
}

int max_matrix(int r, int c, int M[r][c], int max){
	max=M[0][0];
	for(int i=1; i<r; i++){
		for(int j=1; j<c; j++){
			if(M[i][j] > max){
				max=M[i][j];
			}
		}
	}
	return max;
}

int min_matrix(int r, int c, int M[r][c], int min){
	min=M[0][0];
	for(int i=1; i<r; i++){
		for(int j=1; j<c; j++){
			if(M[i][j] < min){
				min=M[i][j];
			}
		}
	}
	return min;
}

void trasp_matrix(int r, int c, int M[r][c]){
	int A[c][r];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			A[j][i]=M[i][j];
		}
	}
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=A[i][j];
		}
	}
}

void getCofactor(int r, int c, int M[r][c], int temp[r][c], int p, int q){
	int e = 0, w = 0;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(i != p && j != q){
				temp[e][w++] = M[i][j];
				if(w == r - 1){
					w = 0;
					e++;
				}
			}
		}
	}
}

int det(int r, int c, int M[r][c]){
	int D=0;
	if((r == 1)&&(c == 1)){
		return M[0][0];
	}
	int temp[r][c], sign=1;
	for(int f=0; f<r; f++){
		getCofactor(r,c,M,temp, 0, f);
		D+=sign*M[0][f]*det(r-1,c-1,temp);
		sign = -sign;
	}
	return D;
}

void sparse_matrix(int r, int c, int M[r][c]){
	int counter=0;
	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){
			if(M[i][j] == 0){
				++counter;
			}
		}
	}
	if(counter > ((r*c)/2)){
		printf("The given matrix is sparse matrix\n");
	}else{
		printf("The given matrix is not a sparse matrix\n");
	}
	printf("There are %d number of zeros\n", counter);
}

bool isIdentity(int r, int c, int M[r][c]){
	for(int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			if (i == j && M[i][j] != 1)
				return false;
			else if (i != j && M[i][j] != 0)
				return false;
		}
	}
	return true;
}
/*│     ├► STACK       - Description:             │*/
/*│     ├► QUEUE       - Description:             │*/
/*│     ├► LIST        - Description:             │*/
struct L{
	int val;
	struct L *next;	
};

int length_it(struct L **head){
	struct L *current=*head;
	int len =0;
	while(current != NULL){
		current=current->next;
		len++;
	}
	return len;
}

void push_sort_it(struct L **head, int val){
	struct L *punt, *prec, *current;
	current=*head;
	if((current==NULL)||(val <= current->val)){
		punt=(struct L *)malloc(sizeof(struct L));
		punt->val=val;
		punt->next=current;
		*head=punt;
	}else{
		while((current!=NULL)&&(val > current->val)){
			prec=current;
			current=current->next;
		}
		punt=(struct L*)malloc(sizeof(struct L));
		punt->val=val;
		punt->next=current;
		prec->next=punt;
	}
}

void push_head_it(struct L **head, int val){
	struct L *current=(struct L*)malloc(sizeof(struct L));
	if(current == NULL){
		return;
	}else{
		current->val=val;
		current->next=*head;
		*head=current;
	}
}

void push_middle_it(struct L **head, int val){
	if(*head == NULL){
		struct L *prev=(struct L*)malloc(sizeof(struct L));
		*head=prev;
		prev->val=val;
		prev->next=NULL;
	}else{
		struct L *prev=(struct L*)malloc(sizeof(struct L));
		prev->val=val;
		prev->next=NULL;
		struct L *current=*head;
		int len=0;
		while(current != NULL){
			len++;
			current=current->next;
		}
		int count=((len%2)==0)?(len/2):(len+1)/2;
		current=*head;
		while(count-- > 1){
			current=current->next;
		}
		prev->next=current->next;
		current->next=prev;
	}
}

void push_queue_it(struct L **head, int val){
	struct L *current=(struct L*)malloc(sizeof(struct L));
	struct L *last=*head;
	current->val=val;
	current->next=NULL;
	if(*head == NULL){
		*head=current;
		return;
	}
	while(last->next != NULL){
		last=last->next;
	}
	last->next=current;
}

void push_head_re(struct L **head, int val){
	if((*head == NULL) || ((*head)->val <= val)) {
		struct L *current=(struct L *)malloc(sizeof(struct L));
		current->val=val;
		current->next=*head;
		*head=current;
	}else{
		push_head_re(&(*head)->next,val);
	}
}

void push_sort_re(struct L **head, int val){
	if((*head)==NULL){
		push_head_re(&(*head),val);
	}else if((*head)->val > val){
		push_head_re(&(*head),val);
	}else if ((*head)->val < val){
		push_sort_re(&((*head)->next),val);
	}
}

void push_queue_re(struct L **head, int val){
	if(*head == NULL){
		struct L *current=(struct L *)malloc(sizeof(struct L));
		current->val=val;
		current->next=NULL;
		*head=current;
	}else{
		push_queue_re(&(*head)->next,val);
	}
}

void pop_head_it(struct L **head){
	if(*head != NULL){
		struct L *current=*head;
		*head=(*head)->next;
		current->next=NULL;
		free(current);
	}
}

void pop_val_it(struct L **head, int val){
	struct L *current, *prev;
	if(*head == NULL){
		return;
	}
	if((*head)->next != NULL){
		current=*head;
		while(current->next != NULL){
			if(current->next->val == val){
				prev=current->next;
				current->next=current->next->next;
				free(prev);
			}else{
				current=current->next;
			}
		}
	}
	if((*head)->val == val){
		prev=*head;
		*head=(*head)->next;
		free(prev);
	}
}

void pop_queue_it(struct L **head){
	struct L *current=*head;
	if(*head == NULL ){
		return;
	}
	if((*head)->next==NULL){
		free(*head);
		*head=NULL;
		return;
	}
	while(current->next->next!=NULL){
		current=current->next;
	}
	free(current->next);
	current->next=NULL;
}

void pop_all_it(struct L **head){
	struct L* current=*head;
	struct L* next;

	while(current != NULL){
		next=current->next;
		free(current);
		current=next;
	}
	*head=NULL;
}

void pop_head_re(struct L **head){ //da rivedere 13
	if(*head == NULL){
		return;
	}else{
		free(*head);
		*head=(*head)->next;
		return;
	}
	pop_head_re(&(*head)->next);
}

void pop_val_re(struct L **head, int val){
	struct L *current=*head;
	if(current == NULL){
		return;
	}else if(current->val == val){
		*head=current->next;
		free(current);
	}else{
		pop_val_re(&(*head)->next,val);
	}
}

void push_middle_re(struct L **head, int val){
	if((*head == NULL)||(*head)->next == NULL){
		struct L *current=(struct L *)malloc(sizeof(struct L));
		current->val=val;
		current->next=*head;
		*head=current;
	}else{
		push_middle_re(&(*head)->next,val);
	}
}

void pop_queue_re(struct L **head){
	if(*head == NULL ){
		return;
	}else if((*head)->next == NULL){
		free(*head);
		*head=NULL;
		return;
	}
	pop_queue_re(&(*head)->next);
}

void pop_all_re(struct L **head){
	struct L *temp;
	if(*head == NULL){
		return;
	}else{
		free(*head);
		*head=NULL;
		return;
	}
	pop_all_re(&(*head)->next);
}

void print_list_it(struct L **head){
	struct L *current=*head;
	printf("L[%d]: { ", length_it(&(*head)));
	while(current != NULL){
		printf("%d -> ", current->val);
		current=current->next;
	}
	printf("NULL }\n");
}

void reverse_it(struct L **head){
	struct L *prev=NULL;
	struct L *current=*head;
	struct L *next=NULL;
	while(current != NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}

bool search_it(struct L **head, int val){
	struct L *current=*head;
	while(current != NULL){
		if(current->val == val){
			return true;
		}
		current=current->next;
	}
	return false;
}

void swapNodes_it(struct L **head, int x, int y){
	if (x == y){
		return;
	}
	struct L *prevX=NULL, *currX=*head;
	while (currX && currX->val != x){
		prevX=currX;
		currX=currX->next;
	}
	struct L *prevY=NULL, *currY=*head;
	while((currY)&&(currY->val != y)){
		prevY=currY;
		currY=currY->next;
	}
	if((currX == NULL)||(currY == NULL)){
		return;
	}
	if(prevX != NULL){
		prevX->next=currY;
	}else{
		*head=currY;
	}
	if(prevY != NULL){
		prevY->next=currX;
	}else{
		*head=currX;
	}
	struct L *temp=currY->next;
	currY->next=currX->next;
	currX->next =temp;
}

int length_re(struct L **head){
	struct L *current=*head;
	if(current==NULL){
		return 0;
	}else{ 
		return length_re(&current->next)+1;
	}
}

void print_list_re(struct L **head){
	struct L *current=*head;
	if(current != NULL){
		printf("%d -> ", current->val);
		print_list_re(&current->next);
	}else{
		printf("NULL }\n");
		return;
	}
}

void reverse_re(struct L **head){
	struct L* first;
	struct L* rest;
	if(*head == NULL){
		return;
	}
	first=*head;
	rest=first->next;
	if(rest == NULL){
		return;   
	}
	reverse_re(&rest);
	first->next->next=first;
	first->next=NULL;
	*head=rest;
}

bool search_re(struct L **head, int val){
	if(*head == NULL){
		return false;
	}
	if((*head)->val == val){
		return true;
	}
	return search_re(&(*head)->next,val);
}

//BUBBLE SORT
void swap4(struct L **a, struct L **b){
	struct L *temp=*a;
	*a=*b;
	*b=temp;
}

void swapNodes_re(struct L** head, int x, int y){
	if (x == y){
		return;
	}
	struct L **a=NULL, **b=NULL;
	while(*head){
		if((*head)->val == x){
			a=head;
		}else if((*head)->val == y){
			b=head;
		}
		head=&((*head)->next);
	}
	if(a && b){

		swap4(&(*a),&(*b));
		swap4(&((*a)->next),&((*b)->next));
	}
}

void bubble_struct_it(struct L **head){
	if(!(*head)){
		return;
	}
	struct L *previous_node=NULL, *sort_up_to=NULL;
	while(1){
		previous_node=NULL;
		struct L *ptr=*head, *last_change=NULL;
		while(ptr->next){
			if(sort_up_to && ptr == sort_up_to){
				break;
			}
			struct L *next=ptr->next;
			if(ptr->val > next->val){
				if(previous_node == NULL){
					*head=next;
				}else{
					previous_node->next=next;
				}
				ptr->next=next->next;
				next->next=ptr;
				last_change=next;
			}
			previous_node=ptr;
			ptr=next;
		}
		if(!last_change){
			break;
		}
		sort_up_to=last_change;
	}
}

//INSERTION SORT
void sortedInsert_it(struct L** head, struct L* new_L){
	struct L* current;
	if(*head == NULL || (*head)->val >= new_L->val){
		new_L->next=*head;
		*head=new_L;
	}else{
		current=*head;
		while(current->next!=NULL && current->next->val < new_L->val){
			current=current->next;
		}
		new_L->next=current->next;
		current->next=new_L;
	}
}

void insertion_struct_it(struct L **head){
	struct L *sorted=NULL, *current=*head;
	while(current != NULL){
		struct L *next=current->next;
		sortedInsert_it(&sorted,current);
		current=next;
	}
	*head=sorted;
}

//MERGE SORT - Time Complexity: O(n Log n)
struct L* SortedMerge(struct L **a, struct L **b){
    struct L *result=NULL;
    if((*a) == NULL){
        return(*b);
    }else if((*b) == NULL){
        return(*a);
    }
    if((*a)->val <= (*b)->val){
        result=*a;
        result->next=SortedMerge(&(*a)->next, &(*b));
    }else{
        result=*b;
        result->next=SortedMerge(&(*a), &(*b)->next);
    }
    return(result);
}

void FrontBackSplit(struct L **source, struct L **frontRef, struct L **backRef){
    struct L *fast=(*source)->next;;
    struct L *slow=*source;
    while(fast != NULL){
    	fast=fast->next;
   		if(fast != NULL){
   		     slow=slow->next;
  		     fast=fast->next;
    	}
    }
    *frontRef=*source;
    *backRef=slow->next;
    slow->next=NULL;
}

void MergeSort(struct L **head){
    struct L *a;
    struct L *b;
    if((*head == NULL) || ((*head)->next == NULL)){
        return;
    }
    FrontBackSplit(&(*head),&a,&b);
    MergeSort(&a);
    MergeSort(&b);
    *head=SortedMerge(&a,&b);
}

//QUICK SORT
struct L *getTail(struct L *cur){
	while(cur != NULL && cur->next != NULL){
		cur=cur->next;
	}
	return cur;
}

struct L *partition_struct(struct L *head, struct L *end, struct L **newHead, struct L **newEnd){
	struct L *pivot=end, *prev=NULL, *cur=head, *tail=pivot;
	while (cur != pivot){
		if(cur->val < pivot->val){
			if((*newHead) == NULL){
				(*newHead)=cur;
			}
			prev=cur;  
			cur=cur->next;
		}else{
			if(prev){
				prev->next=cur->next;
			}
			struct L *tmp=cur->next;
			cur->next=NULL;
			tail->next=cur;
			tail=cur;
			cur=tmp;
		}
	}
	if((*newHead) == NULL){
		(*newHead)=pivot;
	}
	(*newEnd)=tail;
	return pivot;
}
 
struct L *quickSortRecur(struct L *head, struct L *end){
	if(!head || head == end){
		return head;
	}
	struct L *newHead=NULL, *newEnd=NULL;
	struct L *pivot=partition_struct(head,end,&newHead,&newEnd);
	if(newHead != pivot){
		struct L *tmp=newHead;
		while(tmp->next != pivot){
			tmp=tmp->next;
		}
		tmp->next=NULL;
		newHead=quickSortRecur(newHead,tmp);
		tmp=getTail(newHead);
		tmp->next= pivot;
	}
	pivot->next=quickSortRecur(pivot->next,newEnd);
	return newHead;
}

void quickSort(struct L **headRef){
	(*headRef)=quickSortRecur(*headRef, getTail(*headRef));
	return;
}
/*│     ├► TREE        - Description:             │*/
/*│     └► BINARY TREE - Description:             │
  └──────────────────────────────────────────────┘*/
void main(int argc, char const *argv[]){
	int scelta_menu=0;
	char torna='n';	
/*┌────────────────────────────────┐
  │├► [●]: completato/funziona     │
  │├► [○]: manca                   │
  │├► [ ]: quasi finito            │
  │├► [ ]: in sviluppo             │
  └────────────────────────────────┘*/
  	do{
  		clrscr();
		printf("┌───────────────────────────┐\n");
		printf("│MAIN MENU                  │\n");
		printf("│├► 0.  EXIT             [●]│\n");
		printf("│├► 1.  MENU BASIC       [●]│\n");
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
					printf("┌─────────────────────────────────────────────┐\n");
					printf("│MAIN MENU                                    │\n");
					printf("│└► 1.  MENU BASIC                            │\n");
					printf("│       ├► 0.  BACK TO MAIN MENU              │\n");
					printf("│       ├► 1.  HELLO WORLD                    │\n");
					printf("│       ├► 2.  SIZES OF TYPE'S VARIABLES      │\n");
					printf("│       ├► 3.  ASCII TABLE                    │\n");
					printf("│       ├► 4.  MENU PATTERNS                  │\n");
					printf("│       ├► 5.  MENU NUMBERS                   │\n");
					printf("│       ├► 6.  MENU MATH FORMULA              │\n");
					printf("│       ├► 7.  MENU FLOATING-POINT ARITHMETIC │\n");
					printf("│       ├► 8.  MENU CONVERSIONS               │\n");
					printf("│       └► 9.  MENU RANDPASS                  │\n");
					printf("└─────────────────────────────────────────────┘\n");
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
							int a, b, scelta_numbers=0;
							do{
								clrscr();
								printf("┌───────────────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                                      │\n");
								printf("│└► 1.  MENU BASIC                                              │\n");
								printf("│       └► 5.  MENU NUMBERS                                     │\n");
								printf("│              ├► 0.  BACK BASIC MENU                           │\n");
								printf("│              ├► 1.  ADD 'n' NUMBERS                           │\n");
								printf("│              ├► 2.  ARMSTRONG NUMBER                          │\n");
								printf("│              ├► 3.  AVERAGE OF NUMBERS                        │\n");
								printf("│              ├► 4.  SQUARE 'n' NUMBERS                        │\n");
								printf("│              ├► 5.  SQUARE NUMBERS BY USER                    │\n");
								printf("│              ├► 6.  SUM OF NATURAL NUMBERS (USING FOR)        │\n");
								printf("│              ├► 7.  CHECK IF A NUMBER IS PRIME                │\n");
								printf("│              ├► 8.  CHECK IF A NUMBER IS INTEGER OR FLOAT     │\n");
								printf("│              ├► 9.  CHECK IF A NUMBER IS POSITIVE OR NEGATIVE │\n");
								printf("│              ├► 10. PRIME NUMBERS BETWEEN INTERVAL            │\n");
								printf("│              ├► 11. FACTORIAL OF A NUMBER                     │\n");
								printf("│              ├► 12. FACTORS OF A NUMBER                       │\n");
								printf("│              ├► 13. FIBONACCI SERIES                          │\n");
								printf("│              ├► 14. EVEN OR ODD                               │\n");
								printf("│              ├► 15. SUM OF TWO BINARY NUMBERS                 │\n");
								printf("│              ├► 16. POWER OF NUMBERS (x^n)                    │\n");
								printf("│              ├► 17. HARMONIC SEIRES                           │\n");
								printf("│              ├► 18. HCF & LCM                                 │\n");
								printf("│              ├► 19. LARGEST OF 'n' NUMBERS                    │\n");
								printf("│              ├► 20. MULTIPLICATION TABLE                      │\n");
								printf("│              ├► 21. CHECK IF NUMBER PALINDROME                │\n");
								printf("│              ├► 22. PERFECT NUMBER                            │\n");
								printf("│              ├► 23. PRIMES TILL 'n'                           │\n");
								printf("│              ├► 24. REVERSE OF A NUMBER                       │\n");
								printf("│              ├► 25. SQUARE ROOT OF A NUMBER                   │\n");
								printf("│              ├► 26. SUM OF FACTORIAL SEIRES 1/1!, ..., 1/N!   │\n");
								printf("│              ├► 27. SWAP WITH TEMP VARIABLE                   │\n");
								printf("│              ├► 28. SWAP WITHOUT TEMP VARIABLE                │\n");
								printf("│              └► 29. SWAP WITH POINTERS                        │\n");
								printf("└───────────────────────────────────────────────────────────────┘\n");
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
									
									case 1:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 5.  MENU NUMBERS           │\n");
											printf("│              └► 1.  ADD 'n' NUMBERS │\n");
											printf("└─────────────────────────────────────┘\n");
											add_n_numbers();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
									
									case 2:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 5.  MENU NUMBERS            │\n");
											printf("│              └► 2.  ARMSTRONG NUMBER │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter a Number to check if it is an Armstrong number or not: ");
											scanf("%d", &n);
											armstrong_number(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 3:{
										int n;
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 5.  MENU NUMBERS             │\n");
											printf("│              └► 3. AVERAGE OF NUMBERS │\n");
											printf("└───────────────────────────────────────┘\n");
											printf ("Enter a digit you want take average of : ");
											scanf("%d", &n);
											average_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 4:{
										int n;
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 5.  MENU NUMBERS             │\n");
											printf("│              └► 4. SQUARE 'n' NUMBERS │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter the range of numbers: ");
											scanf("%d", &n);
											square_n(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 5:{
										int n,sqr;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 5.  MENU NUMBERS                  │\n");
											printf("│              └► 5.  SQUARE NUMBERS BY USER │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											sqr=n*n;
											printf("Square of %d is %d\n",n,sqr);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 6:{
										int n;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                               │\n");
											printf("│└► 1.  MENU BASIC                                       │\n");
											printf("│       └► 5.  MENU NUMBERS                              │\n");
											printf("│              └► 6.  SUM OF NATURAL NUMBERS (USING FOR) │\n");
											printf("└────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											sum_natural(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 7:{
										int n;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 5.  MENU NUMBERS                      │\n");
											printf("│              └► 7.  CHECK IF A NUMBER IS PRIME │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%d",&n);
											check_prime(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 8:{
										char n[MAXSIZE];
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                  │\n");
											printf("│└► 1.  MENU BASIC                                          │\n");
											printf("│       └► 5.  MENU NUMBERS                                 │\n");
											printf("│              └► 8.  CHECK IF A NUMBER IS INTEGER OR FLOAT │\n");
											printf("└───────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%s", n);
											check_intfloat(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 9:{
										double n;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                      │\n");
											printf("│└► 1.  MENU BASIC                                              │\n");
											printf("│       └► 5.  MENU NUMBERS                                     │\n");
											printf("│              └► 9.  CHECK IF A NUMBER IS POSITIVE OR NEGATIVE │\n");
											printf("└───────────────────────────────────────────────────────────────┘\n");
											printf("Enter a number: ");
											scanf("%lf", &n);
											check_posneg(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 10:{
										int n1, n2;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                           │\n");
											printf("│└► 1.  MENU BASIC                                   │\n");
											printf("│       └► 5.  MENU NUMBERS                          │\n");
											printf("│              └► 10. PRIME NUMBERS BETWEEN INTERVAL │\n");
											printf("└────────────────────────────────────────────────────┘\n");
											printf("Enter two numbers: ");
											scanf("%d %d", &n1, &n2);
											prime_interval(n1,n2);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 11:{
										int n;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 5.  MENU NUMBERS                 │\n");
											printf("│              └► 11. FACTORIAL OF A NUMBER │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d", &n);
											printf("Factorial of %d is: %ld\n", n, factorial(n));
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 12:{
										int n;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                │\n");
											printf("│└► 1.  MENU BASIC                        │\n");
											printf("│       └► 5.  MENU NUMBERS               │\n");
											printf("│              └► 12. FACTORS OF A NUMBER │\n");
											printf("└─────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d", &n);
											Factors_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
									
									case 13:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 5.  MENU NUMBERS            │\n");
											printf("│              └► 13. FIBONACCI SERIES │\n");
											printf("└──────────────────────────────────────┘\n");
											fibonacci();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 14:{
										do{
											clrscr();
											printf("┌─────────────────────────────────┐\n");
											printf("│MAIN MENU                        │\n");
											printf("│└► 1.  MENU BASIC                │\n");
											printf("│       └► 5.  MENU NUMBERS       │\n");
											printf("│              └► 14. EVEN OR ODD │\n");
											printf("└─────────────────────────────────┘\n");
											even_or_odd();
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 15:{
										long binary1, binary2;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                      │\n");
											printf("│└► 1.  MENU BASIC                              │\n");
											printf("│       └► 5.  MENU NUMBERS                     │\n");
											printf("│              └► 15. SUM OF TWO BINARY NUMBERS │\n");
											printf("└───────────────────────────────────────────────┘\n");
											printf("Enter the first binary number: ");
											scanf("%ld",&binary1);
											printf("Enter the second binary number: ");
											scanf("%ld",&binary2);
											sum_binarynumbs(binary1,binary2);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 16:{
										int base, exponent;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 5.  MENU NUMBERS                  │\n");
											printf("│              └► 16. POWER OF NUMBERS (x^n) │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter a base number: ");
											scanf("%d", &base);
											printf("Enter an exponent: ");
											scanf("%d", &exponent);
											power_numb(base,exponent);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 17:{
										double n;
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 5.  MENU NUMBERS           │\n");
											printf("│              └► 17. HARMONIC SEIRES │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Please Enter a value for 'n': ");
											scanf("%lf",&n);
											harmonic_series(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 18:{
										int x, y;
										do{
											clrscr();
											printf("┌───────────────────────────────┐\n");
											printf("│MAIN MENU                      │\n");
											printf("│└► 1.  MENU BASIC              │\n");
											printf("│       └► 5.  MENU NUMBERS     │\n");
											printf("│              └► 18. HCF & LCM │\n");
											printf("└───────────────────────────────┘\n");
											printf("Enter two integers: ");
											scanf("%d%d", &x, &y);
											hcf_lcm(x,y);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 19:{
										int n;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 5.  MENU NUMBERS                  │\n");
											printf("│              └► 19. LARGEST OF 'n' NUMBERS │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter the values of n: ");
											scanf("%d",&n);
											largest_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 20:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                 │\n");
											printf("│└► 1.  MENU BASIC                         │\n");
											printf("│       └► 5.  MENU NUMBERS                │\n");
											printf("│              └► 20. MULTIPLICATION TABLE │\n");
											printf("└──────────────────────────────────────────┘\n");
											printf("Enter n: ");
											scanf("%d",&n);
											mult_table(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
									
									case 21:{
										int n;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                         │\n");
											printf("│└► 1.  MENU BASIC                                 │\n");
											printf("│       └► 5.  MENU NUMBERS                        │\n");
											printf("│              └► 21. CHECK IF NUMBER PALINDROME?? │\n");
											printf("└──────────────────────────────────────────────────┘\n");
											printf("Enter a number to check if it is a palindrome or not: ");
											scanf("%d",&n);
											palindrome(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 22:{
										int n;
										do{
											clrscr();
											printf("┌────────────────────────────────────┐\n");
											printf("│MAIN MENU                           │\n");
											printf("│└► 1.  MENU BASIC                   │\n");
											printf("│       └► 5.  MENU NUMBERS          │\n");
											printf("│              └► 22. PERFECT NUMBER │\n");
											printf("└────────────────────────────────────┘\n");
											printf("Enter a number to check if it is an perfect number or not: ");
											scanf("%d",&n);
											perfect_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 23:{
										int a, b, c;
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 5.  MENU NUMBERS           │\n");
											printf("│              └► 23. PRIMES TILL 'n' │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter 3 numbers:");
											scanf("%d %d %d",&a,&b,&c);
											int big=( a>b && a>c ? a:b>c ? b:c);
											printf("The biggest number is: %d\n",big);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 24:{
										int n;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                │\n");
											printf("│└► 1.  MENU BASIC                        │\n");
											printf("│       └► 5.  MENU NUMBERS               │\n");
											printf("│              └► 24. REVERSE OF A NUMBER │\n");
											printf("└─────────────────────────────────────────┘\n");
											printf("Enter a number to reverse: ");
											scanf("%d",&n);
											reverse_numb(n);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 25:{
										double num;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                              │\n");
											printf("│└► 1.  MENU BASIC                                      │\n");
											printf("│       └► 5.  MENU NUMBERS                             │\n");
											printf("│              └► 25. SQUARE ROOT OF A NUMBER (MATH.H)? │\n");
											printf("└───────────────────────────────────────────────────────┘\n");
											printf("Enter number to find square root: ");
											scanf("%lf",&num);
											double result=sqrt(num);
											printf("The square root of %lf is : %lf\n", num, result);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 26:{
										double n;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                                    │\n");
											printf("│└► 1.  MENU BASIC                                            │\n");
											printf("│       └► 5.  MENU NUMBERS                                   │\n");
											printf("│              └► 26. SUM OF FACTORIAL SEIRES 1/1!, ..., 1/N! │\n");
											printf("└─────────────────────────────────────────────────────────────┘\n");
											printf("Enter the value : ");
											scanf("%lf", &n);
											double sum=sumseries(n);
											printf("\nSum of the above series: %lf\n", sum);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 27:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                    │\n");
											printf("│└► 1.  MENU BASIC                            │\n");
											printf("│       └► 5.  MENU NUMBERS                   │\n");
											printf("│              └► 27. SWAP WITH TEMP VARIABLE │\n");
											printf("└─────────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d", &a);
											printf("b: ");
											scanf("%d", &b);
											swap1(a,b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 28:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 5.  MENU NUMBERS                      │\n");
											printf("│              └► 28. SWAP WITHOUT TEMP VARIABLE │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d", &a);
											printf("b: ");
											scanf("%d", &b);
											swap2(a,b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 29:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────┐\n");
											printf("│MAIN MENU                               │\n");
											printf("│└► 1.  MENU BASIC                       │\n");
											printf("│       └► 5.  MENU NUMBERS              │\n");
											printf("│              └► 29. SWAP WITH POINTERS │\n");
											printf("└────────────────────────────────────────┘\n");
											printf("a: ");
											scanf("%d", &a);
											printf("b: ");
											scanf("%d", &b);
											swap3(&a,&b);
											printf("a:%d b:%d\n", a, b);
											printf("Do you want to back to NUMBERS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

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
								printf("┌────────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                           │\n");
								printf("│└► 1.  MENU BASIC                                   │\n");
								printf("│       └► 6.  MENU MATH FORMULA                     │\n");
								printf("│              ├► 0.  BACK BASIC MENU                │\n");
								printf("│              ├► 1.  AREA OF CIRCLE                 │\n");
								printf("│              ├► 2.  AREA OF TRIANGLE               │\n");
								printf("│              ├► 3.  AREA OF PARALLELOGRAM          │\n");
								printf("│              ├► 4.  AREA OF RHOMBUS                │\n");
								printf("│              ├► 5.  RIGHT ANGLED TRIANGLE          │\n");
								printf("│              ├► 6.  PROBABILITY DISTRIBUTION       │\n");
								printf("│              ├► 7.  SIN(x)                         │\n");
								printf("│              ├► 8.  COS(x)                         │\n");
								printf("│              ├► 9.  COS(x) SERIES                  │\n");
								printf("│              ├► 10. SURFACE AREA VOLUME CUBE       │\n");
								printf("│              ├► 11. ROOTS OF A QUADR. EQUATION     │\n");
								printf("│              ├► 12. GREATEST AMONG THREE NUMBER    │\n");
								printf("│              ├► 13. LEAP YEAR                      │\n");
								printf("│              ├► 14. PERFECT SQUARE                 │\n");
								printf("│              ├► 15. SIMPLE INTEREST                │\n");
								printf("│              ├► 16. SUM OF EVEN NUMBERS 1 TO N     │\n");
								printf("│              ├► 17. SUM OF ARITHMETIC PROG. SERIES │\n");
								printf("│              ├► 18. SUM OF GEOMETRIC PROG. SERIES  │\n");
								printf("│              ├► 19. SUM OF HARMONIC PROG. SERIES   │\n");
								printf("│              ├► 20. VOLUME & SURFACE AREA CYLINDER │\n");
								printf("│              ├► 21. VOLUME & SURFACE AREA CUBOID   │\n");
								printf("│              ├► 22. VOLUME & SURFACE AREA CONE     │\n");
								printf("│              └► 23. VOLUME & SURFACE AREA SPHARE   │\n");
								printf("└────────────────────────────────────────────────────┘\n");
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
									
									case 1:{
										int radius;
										float area;
										do{
											clrscr();
											printf("┌────────────────────────────────────┐\n");
											printf("│MAIN MENU                           │\n");
											printf("│└► 1.  MENU BASIC                   │\n");
											printf("│       └► 6.  MENU MATH FORMULA     │\n");
											printf("│              └► 1.  AREA OF CIRCLE │\n");
											printf("└────────────────────────────────────┘\n");
											area_circle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 6.  MENU MATH FORMULA       │\n");
											printf("│              └► 2.  AREA OF TRIANGLE │\n");
											printf("└──────────────────────────────────────┘\n");
											area_triangle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 6.  MENU MATH FORMULA            │\n");
											printf("│              └► 3.  AREA OF PARALLELOGRAM │\n");
											printf("└───────────────────────────────────────────┘\n");
											area_parallelogram();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 6.  MENU MATH FORMULA      │\n");
											printf("│              └► 4.  AREA OF RHOMBUS │\n");
											printf("└─────────────────────────────────────┘\n");
											area_rhombus();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                          │\n");
											printf("│└► 1.  MENU BASIC                                  │\n");
											printf("│       └► 6.  MENU MATH FORMULA                    │\n");
											printf("│              └► 5.  AREA OF RIGHT ANGLED TRIANGLE │\n");
											printf("└───────────────────────────────────────────────────┘\n");
											area_right_angled_triangle();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                     │\n");
											printf("│└► 1.  MENU BASIC                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA               │\n");
											printf("│              └► 6.  PROBABILITY DISTRIBUTION │\n");
											printf("└──────────────────────────────────────────────┘\n");
											probability_distribution();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌────────────────────────────────┐\n");
											printf("│MAIN MENU                       │\n");
											printf("│└► 1.  MENU BASIC               │\n");
											printf("│       └► 6.  MENU MATH FORMULA │\n");
											printf("│              └► 7.  SIN(x)     │\n");
											printf("└────────────────────────────────┘\n");
											sin_x();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌────────────────────────────────┐\n");
											printf("│MAIN MENU                       │\n");
											printf("│└► 1.  MENU BASIC               │\n");
											printf("│       └► 6.  MENU MATH FORMULA │\n");
											printf("│              └► 8.  COS(x)     │\n");
											printf("└────────────────────────────────┘\n");
											cos_x();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌───────────────────────────────────┐\n");
											printf("│MAIN MENU                          │\n");
											printf("│└► 1.  MENU BASIC                  │\n");
											printf("│       └► 6.  MENU MATH FORMULA    │\n");
											printf("│              └► 9.  COS(x) SERIES │\n");
											printf("└───────────────────────────────────┘\n");
											cosx_series();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                     │\n");
											printf("│└► 1.  MENU BASIC                             │\n");
											printf("│       └► 6.  MENU MATH FORMULA               │\n");
											printf("│              └► 10. SURFACE AREA VOLUME CUBE │\n");
											printf("└──────────────────────────────────────────────┘\n");
											surface_area_volume_cube();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 11:{
										float a, b, c;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 6.  MENU MATH FORMULA                 │\n");
											printf("│              └► 11. ROOTS OF A QUADR. EQUATION │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("Enter coefficients a, b and c: ");
											scanf("%f%f%f",&a,&b,&c);
											roots_quadr_equation(a,b,c);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 12:{
										float a, b, c;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                        │\n");
											printf("│└► 1.  MENU BASIC                                │\n");
											printf("│       └► 6.  MENU MATH FORMULA                  │\n");
											printf("│              └► 12. GREATEST AMONG THREE NUMBER │\n");
											printf("└─────────────────────────────────────────────────┘\n");
											printf("Enter three numbers: ");
											scanf("%f %f %f", &a, &b, &c);
											greatest_three_number(a,b,c);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
									
									case 13:{
										do{
											clrscr();
											printf("┌────────────────────────────────┐\n");
											printf("│MAIN MENU                       │\n");
											printf("│└► 1.  MENU BASIC               │\n");
											printf("│       └► 6.  MENU MATH FORMULA │\n");
											printf("│              └► 13. LEAP YEAR  │\n");
											printf("└────────────────────────────────┘\n");
											leap_year();
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 14:{
										int i, number;
										do{
											clrscr();
											printf("┌────────────────────────────────────┐\n");
											printf("│MAIN MENU                           │\n");
											printf("│└► 1.  MENU BASIC                   │\n");
											printf("│       └► 6.  MENU MATH FORMULA     │\n");
											printf("│              └► 14. PERFECT SQUARE │\n");
											printf("└────────────────────────────────────┘\n");
											printf("Enter a number to check for perfect square: ");
											scanf("%d", &number);
											perfect_square(number);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
									
									case 15:{
										float principal_amt, rate, simple_intt;
										int time;
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 6.  MENU MATH FORMULA      │\n");
											printf("│              └► 15. SIMPLE INTEREST │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter the values of Principal amount, rate and time: ");
											scanf("%f %f %d", &principal_amt, &rate, &time);
											simple_interest(principal_amt, rate, time);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 16:{
										int n;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 6.  MENU MATH FORMULA                 │\n");
											printf("│              └► 16. SUM OF EVEN NUMBERS 1 TO N │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%d",&n);
											int sum=((n/2)*((n/2)+1));
											printf("Sum of even numbers between 1 to %d: %d\n",n,sum);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 17:{
										int a, d, n;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                           │\n");
											printf("│└► 1.  MENU BASIC                                   │\n");
											printf("│       └► 6.  MENU MATH FORMULA                     │\n");
											printf("│              └► 17. SUM OF ARITHMETIC PROG. SERIES │\n");
											printf("└────────────────────────────────────────────────────┘\n");
											printf("Enter the first term value of the A.P. series: ");
											scanf("%d",&a);
											printf("Enter the total numbersin the A.P. series: ");
											scanf("%d",&n);
											printf("Enter the common difference of A.P. series: ");
											scanf("%d",&d);
											sum_aps(a,n,d);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 18:{
										float a, r, last_term, sum =0;
										int n;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                          │\n");
											printf("│└► 1.  MENU BASIC                                  │\n");
											printf("│       └► 6.  MENU MATH FORMULA                    │\n");
											printf("│              └► 18. SUM OF GEOMETRIC PROG. SERIES │\n");
											printf("└───────────────────────────────────────────────────┘\n");
											printf("Enter the first term of the G.P. series: ");
											scanf("%f",&a);
											printf("Enter the total numbersin the G.P. series: ");
											scanf("%d",&n);
											printf("Enter the common ratio of G.P. series: ");
											scanf("%f",&r);
											sum_gps(a,n,r);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 19:{
										int n;
										float sum;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                         │\n");
											printf("│└► 1.  MENU BASIC                                 │\n");
											printf("│       └► 6.  MENU MATH FORMULA                   │\n");
											printf("│              └► 19. SUM OF HARMONIC PROG. SERIES │\n");
											printf("└──────────────────────────────────────────────────┘\n");
											printf("1 + 1/2 + 1/3 + ... + 1/n\n");
											printf("Enter the value of n: ");
											scanf("%d", &n);
											printf("the Sum of H.P Series is = %f\n", sum_hps(n, sum));
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 20:{
										float radius, height;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                           │\n");
											printf("│└► 1.  MENU BASIC                                   │\n");
											printf("│       └► 6.  MENU MATH FORMULA                     │\n");
											printf("│              └► 20. VOLUME & SURFACE AREA CYLINDER │\n");
											printf("└────────────────────────────────────────────────────┘\n");
											printf("Enter value for radius and height of a cylinder: ");
											scanf("%f%f",&radius,&height);
											vol_sur_cylinder(radius,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 21:{
										float width, height, length;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                         │\n");
											printf("│└► 1.  MENU BASIC                                 │\n");
											printf("│       └► 6.  MENU MATH FORMULA                   │\n");
											printf("│              └► 21. VOLUME & SURFACE AREA CUBOID │\n");
											printf("└──────────────────────────────────────────────────┘\n");
											printf("Enter value of width, length & height of the cuboids: ");
											scanf("%f%f%f",&width,&length,&height);
											vol_sur_cuboid(width,length,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 22:{
										float radius, height;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                       │\n");
											printf("│└► 1.  MENU BASIC                               │\n");
											printf("│       └► 6.  MENU MATH FORMULA                 │\n");
											printf("│              └► 22. VOLUME & SURFACE AREA CONE │\n");
											printf("└────────────────────────────────────────────────┘\n");
											printf("Enter value of radius and height of a cone: ");
											scanf("%f%f",&radius,&height);
											vol_sur_cone(radius,height);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

									case 23:{
										float radius;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                         │\n");
											printf("│└► 1.  MENU BASIC                                 │\n");
											printf("│       └► 6.  MENU MATH FORMULA                   │\n");
											printf("│              └► 23. VOLUME & SURFACE AREA SPHARE │\n");
											printf("└──────────────────────────────────────────────────┘\n");
											printf("Enter radius of the sphere: ");
											scanf("%f",&radius);
											vol_sur_sphare(radius);
											printf("Do you want to back to MATH FORMULA MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;

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
								printf("┌───────────────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                          │\n");
								printf("│└► 1.  MENU BASIC                                  │\n");
								printf("│       └► 8.  MENU CONVERSIONS                     │\n");
								printf("│              ├► 0.  BACK BASIC MENU               │\n");
								printf("│              ├► 1.  BINARY TO DECIMAL             │\n");
								printf("│              ├► 2.  BINARY TO OCTAL               │\n");
								printf("│              ├► 3.  BINARY TO HEXADECIMAL         │\n");
								printf("│              ├► 4.  UPPERCASE TO LOWERCASE STRING │\n");
								printf("│              ├► 5.  CHAR TO REVERSE CHAR          │\n");
								printf("│              ├► 6.  NUMBER TO ROMAN NUMBER        │\n");
								printf("│              ├► 7.  ROMAN NUMBER TO NUMBER        │\n");
								printf("│              ├► 8.  DECIMAL TO HEXADECIMAL        │\n");
								printf("│              ├► 9.  DECIMAL TO OCTAL              │\n");
								printf("│              ├► 10. DECIMAL TO BINARY             │\n");
								printf("│              ├► 11. OCTAL TO DECIMAL              │\n");
								printf("│              ├► 12. OCTAL TO BINARY               │\n");
								printf("│              ├► 13. CELSIUS TO FAHRENHEIT         │\n");
								printf("│              └► 14. FAHRENHEIT TO CELSIUS         │\n");
								printf("└───────────────────────────────────────────────────┘\n");
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
									
									case 1:{
										int n=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 8.  MENU CONVERSIONS         │\n");
											printf("│              └► 1.  BINARY TO DECIMAL │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in decimal: ");
											scanf("%d", &n);
											printf("%d in binary = %d in decimal\n", n, binary_decimal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										long int n=0;
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 8.  MENU CONVERSIONS       │\n");
											printf("│              └► 2.  BINARY TO OCTAL │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in octal: ");
											scanf("%ld", &n);
											printf("%lo in binary = %lo in octal\n", n, binary_octal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										long int n=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 8.  MENU CONVERSIONS             │\n");
											printf("│              └► 3.  BINARY TO HEXADECIMAL │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter a binary number to convert in hexadecimal: ");
											scanf("%ld", &n);
											printf("%lo in binary = %lX in hexadecimal\n", n, binary_hexadecimal(n));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									case 4:{
										char str[MAXSIZE];
										do{
											clrscr();
											printf("┌───────────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                          │\n");
											printf("│└► 1.  MENU BASIC                                  │\n");
											printf("│       └► 8.  MENU CONVERSIONS                     │\n");
											printf("│              └► 4.  UPPERCASE TO LOWERCASE STRING │\n");
											printf("└───────────────────────────────────────────────────┘\n");
											printf("Enter string: ");
											scanf("%s", str);
											printf("%s in uppercase = ", str);
											uppercase_lowercase(str);
											printf("%s in lowercase\n", str);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										char strn[MAXSIZE];
										do{
											clrscr();
											printf("┌──────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                 │\n");
											printf("│└► 1.  MENU BASIC                         │\n");
											printf("│       └► 8.  MENU CONVERSIONS            │\n");
											printf("│              └► 5.  CHAR TO REVERSE CHAR │\n");
											printf("└──────────────────────────────────────────┘\n");
											printf("Enter string: ");
											scanf("%s", strn);
											printf("%s not reversed = ", strn);
											reverse_char(strn);
											printf(" reversed\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 6:{
										int j;
										long number;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 8.  MENU CONVERSIONS              │\n");
											printf("│              └► 6.  NUMBER TO ROMAN NUMBER │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter the number: ");
											scanf("%ld", &number);
											printf("%ld number = ", number);
											if(number <= 0){
												printf("Invalid number");
											}
											while (number != 0){
												if(number >= 1000){
													postdigit('M', number/1000);
													number=number-(number/1000)*1000;
												}else if(number >= 500){
													if(number < (500+4*100)){
														postdigit('D', number/500);
														number=number-(number/500)*500;
													}else{
														predigit('C','M');
														number=number-(1000-100);
													}
												}else if(number >= 100){
													if(number < (100+3*100)){
														postdigit('C', number/100);
														number=number-(number/100)*100;
													}else{
														predigit('L', 'D');
														number=number-(500-100);
													}
												}else if(number >= 50 ){
													if(number < (50+4*10)){
														postdigit('L', number/50);
														number=number-(number/50)*50;
													}else{
														predigit('X','C');
														number=number-(100-10);
													}
												}else if(number >= 10){
													if(number < (10+3*10))
																	{
														postdigit('X', number/10);
														number=number-(number/10)*10;
													}else{
														predigit('X','L');
														number=number-(50-10);
													}
												}else if(number >= 5){
													if(number < (5+4*1)){
														postdigit('V', number/5);
														number=number-(number/5)*5;
													}else{
														predigit('I', 'X');
														number=number-(10-1);
													}
												}else if(number >= 1){
													if(number < 4){
														postdigit('I', number/1);
														number=number-(number/1)*1;
													}else{
														predigit('I', 'V');
														number=number-(5-1);
													}
												}
											}
											for(j=0; j < i; j++){
												printf("%c", romanval[j]);
											}
											printf(" roman number\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 7:{
										char str[MAX];
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 8.  MENU CONVERSIONS              │\n");
											printf("│              └► 7.  ROMAN NUMBER TO NUMBER │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter the roman number: ");
											scanf("%s", str);
											printf("%s roman number = %d decimal\n", str, romanToDecimal(str));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									case 8:{
										long decimal=0;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU BASIC                           │\n");
											printf("│       └► 8.  MENU CONVERSIONS              │\n");
											printf("│              └► 8.  DECIMAL TO HEXADECIMAL │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Enter a decimal number to convert in hexadecimal: ");
											scanf("%ld", &decimal);
											printf("%ld decimal =", decimal);
											decimal_hexadecimal(decimal);
											printf(" hexadecimal\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 9:{
										long int decimal=0;
										int octal[MAXSIZE], i=1;
										do{
											clrscr();
											printf("┌──────────────────────────────────────┐\n");
											printf("│MAIN MENU                             │\n");
											printf("│└► 1.  MENU BASIC                     │\n");
											printf("│       └► 8.  MENU CONVERSIONS        │\n");
											printf("│              └► 9.  DECIMAL TO OCTAL │\n");
											printf("└──────────────────────────────────────┘\n");
											printf("Enter a decimal number to convert in octal: ");
											scanf("%ld", &decimal);
											printf("%ld decimal = ", decimal);
											decimal_octal(decimal,octal);
											printf(" octal\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 10:{
										int n=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 8.  MENU CONVERSIONS         │\n");
											printf("│              └► 10. DECIMAL TO BINARY │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter decimal number to convert in binary: ");
											scanf("%d", &n);
											printf("%d decimal = ", n);
											decimal_binary(n);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 11:{
										long int octal=0, decimal=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────┐\n");
											printf("│MAIN MENU                              │\n");
											printf("│└► 1.  MENU BASIC                      │\n");
											printf("│       └► 8.  MENU CONVERSIONS         │\n");
											printf("│              └► 11. OCTAL TO DECIMAL? │\n");
											printf("└───────────────────────────────────────┘\n");
											printf("Enter a octal number to convert in decimal: ");
											scanf("%ld", &octal);
											printf("%ld octal = ", octal);
											printf("%d decimal\n", octal_decimal(octal,decimal));
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									case 12:{
										char octal[MAX];
										do{
											clrscr();
											printf("┌─────────────────────────────────────┐\n");
											printf("│MAIN MENU                            │\n");
											printf("│└► 1.  MENU BASIC                    │\n");
											printf("│       └► 8.  MENU CONVERSIONS       │\n");
											printf("│              └► 12. OCTAL TO BINARY │\n");
											printf("└─────────────────────────────────────┘\n");
											printf("Enter octal number to convert in binary: ");
											scanf("%s", octal);
											printf("%s in octal = ", octal);
											octal_binary(octal);
											printf(" binary\n");
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 13:{
										float fahrenheit, celsius;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 8.  MENU CONVERSIONS             │\n");
											printf("│              └► 13. CELSIUS TO FAHRENHEIT │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter temperature in degrees celsius: ");
											scanf("%f", &celsius);
											fahrenheit=celsius_fahrenheit(celsius,fahrenheit);
											printf("%f°C = %f°F\n", celsius,fahrenheit);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 14:{
										int fahrenheit;
										double celsius;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 8.  MENU CONVERSIONS             │\n");
											printf("│              └► 14. FAHRENHEIT TO CELSIUS │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter temperature in degrees fahrenheit: ");
											scanf("%d", &fahrenheit);
											celsius=fahrenheit_celsius(fahrenheit,celsius);
											printf("%d°F = %lf°C\n", fahrenheit, celsius);
											printf("Do you want to back to CONVERSIONS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

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
							int scelta_randpass=0, length=0;
							do{
								clrscr();
								printf("┌───────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                  │\n");
								printf("│└► 1.  MENU BASIC                          │\n");
								printf("│       └► 9.  MENU RANDPASS                │\n");
								printf("│              ├► 0.  BACK BASIC MENU       │\n");
								printf("│              ├► 1.  C-U + C-L + NUM + SYM │\n");
								printf("│              ├► 2.  C-U                   │\n");
								printf("│              ├► 3.        C-L             │\n");
								printf("│              ├► 4.              NUM       │\n");
								printf("│              ├► 5.                    SYM │\n");
								printf("│              ├► 6.  C-U + C-L             │\n");
								printf("│              ├► 7.  C-U + C-L + NUM       │\n");
								printf("│              ├► 8.  C-U + C-L       + SYM │\n");
								printf("│              ├► 9.  C-U       + NUM       │\n");
								printf("│              ├► 10. C-U             + SYM │\n");
								printf("│              ├► 11.       C-L + NUM       │\n");
								printf("│              ├► 12.       C-L       + SYM │\n");
								printf("│              └► 13.             NUM + SYM │\n");
								printf("└───────────────────────────────────────────┘\n");
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
									
									case 1:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 1.  C-U + C-L + NUM + SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 2.  C-U                   │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass(length,65,90);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 3.        C-L             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass(length,97,122);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 4.              NUM       │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass(length,48,57);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 5.                    SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 6.  C-U + C-L             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cl_cu(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 7:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 7.  C-U + C-L + NUM       │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cl_cu_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 8:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 8.  C-U + C-L       + SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cl_cu_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 9:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 9.  C-U       + NUM       │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cu_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 10:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 10. C-U             + SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cu_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 11:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 11.       C-L + NUM       │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cl_num(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 12:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              ├► 12.       C-L       + SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_cl_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 13:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU BASIC                          │\n");
											printf("│       └► 9.  MENU RANDPASS                │\n");
											printf("│              └► 13.             NUM + SYM │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Enter the length of the password: ");
											scanf("%d", &length);
											randpass_num_sym(length,33,126);
											printf("Do you want to back to RANDPASS MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
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

			case 2:{ //data-struct
				int scelta_datastruct=0;
				do{
					clrscr();
					printf("┌─────────────────────────────────────┐\n");
					printf("│MAIN MENU                            │\n");
					printf("│└► 2.  DATA-STRUCT                   │\n");
					printf("│        ├► 0.  BACK TO MAIN MENU  [●]│\n");
					printf("│        ├► 1.  MENU ARRAY         [●]│\n");
					printf("│        ├► 2.  MENU STRING        [○]│\n");
					printf("│        ├► 3.  MENU MATRIX        [●]│\n");
					printf("│        ├► 4.  MENU STACK         [○]│\n");
					printf("│        ├► 5.  MENU QUEUE         [○]│\n");
					printf("│        ├► 6.  MENU LIST          [●]│\n");
					printf("│        ├► 7.  MENU TREE          [○]│\n");
					printf("│        └► 8.  MENU BINARY TREE   [○]│\n");
					printf("└─────────────────────────────────────┘\n");
					printf("CHOICE DATA-STRUCT: ");
					scanf("%d", &scelta_datastruct);
					switch(scelta_datastruct){
						case 0:{
							clrscr();
							printf("┌────────────────────────────────┐\n");
							printf("│MAIN MENU                       │\n");
							printf("│└► 2.  DATA-STRUCT              │\n");
							printf("│       └► 0.  BACK TO MAIN MENU │\n");
							printf("└────────────────────────────────┘\n");
						}break;

						case 1:{
							int scelta_array=0, dim=0, A[dim], k, x, min=0, max=0;
							do{
								clrscr();
								printf("┌───────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                  │\n");
								printf("│└► 1.  MENU DATA-STRUCT                    │\n");
								printf("│       └► 1.  MENU ARRAY                   │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU │\n");
								printf("│              ├► 1.  INSERT                │\n");
								printf("│              ├► 2.  OPERATIONS            │\n");
								printf("│              ├► 3.  SORTING               │\n");
								printf("│              ├► 4.  SEARCHING             │\n");
								printf("│              └► 5.  CHECK              [○]│\n");
								printf("└───────────────────────────────────────────┘\n");
								printf("CHOICE ARRAY: ");
								scanf("%d",&scelta_array);
								switch(scelta_array){
									case 0:{
										clrscr();
										printf("┌───────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                  │\n");
										printf("│└► 1.  MENU DATA-STRUCT                    │\n");
										printf("│       └► 1.  MENU ARRAY                   │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU │\n");
										printf("└───────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌────────────────────────────┐\n");
											printf("│MAIN MENU                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT     │\n");
											printf("│       └► 1.  MENU ARRAY    │\n");
											printf("│              └► 1.  INSERT │\n");
											printf("└────────────────────────────┘\n");
											printf("Enter array dim: ");
											scanf("%d", &dim);
											ins_array(dim,A);
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 1.  MENU ARRAY                    │\n");
											printf("│              └► 2.  OPERATIONS             │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU │\n");
											printf("│                     ├► 1.  k+A             │\n");
											printf("│                     ├► 2.  k*A             │\n");
											printf("│                     ├► 3.  A+A             │\n");
											printf("│                     ├► 4.  A*A             │\n");
											printf("│                     ├► 5.  REVERSE         │\n");
											printf("│                     └► 6.  MAX/MIN         │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                   │\n");
													printf("│└► 1.  MENU DATA-STRUCT                     │\n");
													printf("│       └► 1.  MENU ARRAY                    │\n");
													printf("│              └► 2.  OPERATIONS             │\n");
													printf("│                     └► 0.  BACK ARRAY MENU │\n");
													printf("└────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 1.  MENU ARRAY        │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 1.  k+A │\n");
														printf("└────────────────────────────────┘\n");
														printf("Enter k value: ");
														scanf("%d", &k);
														cost_piu_array(k,A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 1.  MENU ARRAY        │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 2.  k*A │\n");
														printf("└────────────────────────────────┘\n");
														printf("Enter k value: ");
														scanf("%d", &k);
														cost_per_array(k,A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 1.  MENU ARRAY        │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 3.  A+A │\n");
														printf("└────────────────────────────────┘\n");
														A_piu_A(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 1.  MENU ARRAY        │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 4.  A*A │\n");
														printf("└────────────────────────────────┘\n");
														A_per_A(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 1.  MENU ARRAY            │\n");
														printf("│              └► 2.  OPERATIONS     │\n");
														printf("│                     └► 5.  REVERSE │\n");
														printf("└────────────────────────────────────┘\n");
														inversione_array(A,dim);
														print_array(dim,A);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 1.  MENU ARRAY            │\n");
														printf("│              └► 2.  OPERATIONS     │\n");
														printf("│                     └► 6.  MAX/MIN │\n");
														printf("└────────────────────────────────────┘\n");
														max=massimo(A,dim,max);
														min=minimo(A,dim,min);
														printf("MAX(A[%d])=%d, min(A[%d])=%d\n", dim, max, dim, min);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 1.  MENU ARRAY                           │\n");
														printf("│              └► 2.  OPERATIONS                    │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 1.  MENU ARRAY                    │\n");
											printf("│              └► 3.  SORTING                │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU │\n");
											printf("│                     ├► 1.  BUBBLE    IT    │\n");
											printf("│                     ├► 2.  SELECTION IT    │\n");
											printf("│                     ├► 3.  INSERTION IT    │\n");
											printf("│                     ├► 4.  MERGE     IT    │\n");
											printf("│                     ├► 5.  QUICK     IT    │\n");
											printf("│                     ├► 6.  SHELL     IT [○]│\n");
											printf("│                     ├► 7.  BUBBLE    RE    │\n");
											printf("│                     ├► 8.  SELECTION RE    │\n");
											printf("│                     ├► 9.  INSERTION RE    │\n");
											printf("│                     ├► 10. MERGE     RE    │\n");
											printf("│                     ├► 11. QUICK     RE    │\n");
											printf("│                     └► 12. SHELL     RE [○]│\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("CHOICE SORT: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                   │\n");
													printf("│└► 1.  MENU DATA-STRUCT                     │\n");
													printf("│       └► 1.  MENU ARRAY                    │\n");
													printf("│              └► 2.  SORT                   │\n");
													printf("│                     └► 0.  BACK ARRAY MENU │\n");
													printf("└────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 2.  SORT             │\n");
														printf("│                     └► 1.  BUBBLE IT │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														bubble_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 1.  MENU ARRAY                 │\n");
														printf("│              └► 2.  SORT                │\n");
														printf("│                     └► 2.  SELECTION IT │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														sel_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 1.  MENU ARRAY                 │\n");
														printf("│              └► 2.  SORT                │\n");
														printf("│                     └► 3.  INSERTION IT │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														ins_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 4.  MERGE IT │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														merge_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 5.  QUICK IT │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														quick_I(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 6.  SHELL IT │\n");
														printf("└─────────────────────────────────────┘\n");
														//shell sort it
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 2.  SORT             │\n");
														printf("│                     └► 7.  BUBBLE RE │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														bubble_R(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 1.  MENU ARRAY                 │\n");
														printf("│              └► 2.  SORT                │\n");
														printf("│                     └► 8.  SELECTION RE │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														sel_I(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 9:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 1.  MENU ARRAY                 │\n");
														printf("│              └► 2.  SORT                │\n");
														printf("│                     └► 9.  INSERTION RE │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														ins_R(A,dim);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 10:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 10. MERGE RE │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														merge_R(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 11:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 11. QUICK RE │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("Array before:\n");
														print_array(dim,A);
														quick_R(A,0,dim-1);
														printf("Array after:\n");
														print_array(dim,A);
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 12:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 1.  MENU ARRAY             │\n");
														printf("│              └► 2.  SORT            │\n");
														printf("│                     └► 12. SHELL RE │\n");
														printf("└─────────────────────────────────────┘\n");
														//shell sort re
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 1.  MENU ARRAY                           │\n");
														printf("│              └► 2.  SORT                          │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										int scelta_search=0;
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 1.  MENU ARRAY                    │\n");
											printf("│              └► 4.  SEARCHING              │\n");
											printf("│                     ├► 0.  BACK ARRAY MENU │\n");
											printf("│                     ├► 1.  LINEAR    IT    │\n");
											printf("│                     ├► 2.  BINARY    IT    │\n");
											printf("│                     ├► 3.  LINEAR    RE [○]│\n");
											printf("│                     └► 4.  BINARY    RE [○]│\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("CHOICE SEARCHING: ");
											scanf("%d",&scelta_search);
											switch(scelta_search){
												case 0:{
													clrscr();
													printf("┌────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                   │\n");
													printf("│└► 1.  MENU DATA-STRUCT                     │\n");
													printf("│       └► 1.  MENU ARRAY                    │\n");
													printf("│              └► 4.  SEARCHING              │\n");
													printf("│                     └► 0.  BACK ARRAY MENU │\n");
													printf("└────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 4.  SEARCHING        │\n");
														printf("│                     └► 1.  LINEAR IT │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Enter value for search: ");
														scanf("%d", &x);
														int result=linear_I(A,dim,x);
														if(result == -1){
															printf("Value %d is not in array!\n", x);
														}else{
															printf("Value %d is in %d° position!!!\n", x, result+1);
														}
														print_array(dim,A);
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 4.  SEARCHING        │\n");
														printf("│                     └► 2.  BINARY IT │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Enter value for search: ");
														scanf("%d", &x);
														int result=binary_I(A,0,dim-1,x);
														if(result == -1){
															printf("Value %d is not in array!\n", x);
														}else{
															printf("Value %d is in %d° position!!!\n", x, result+1);
														}
														print_array(dim,A);
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 4.  SEARCHING        │\n");
														printf("│                     └► 3.  LINEAR RE │\n");
														printf("└──────────────────────────────────────┘\n");
														
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 1.  MENU ARRAY              │\n");
														printf("│              └► 4.  SEARCHING        │\n");
														printf("│                     └► 4.  BINARY RE │\n");
														printf("└──────────────────────────────────────┘\n");
														
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 1.  MENU ARRAY                           │\n");
														printf("│              └► 4.  SEARCHING                     │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SEARCHING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 1.  MENU ARRAY                   │\n");
											printf("│              └► 5.  CHECK                 │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 1.  MENU ARRAY                    │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to ARRAY MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
						//...
						case 3:{
							int scelta_matrix=0, r=0, c=0, max=0, min=0, M[r][c];
							do{
								clrscr();
								printf("┌───────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                  │\n");
								printf("│└► 1.  MENU DATA-STRUCT                    │\n");
								printf("│       └► 3.  MENU MATRIX                  │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU │\n");
								printf("│              ├► 1.  INSERT                │\n");
								printf("│              ├► 2.  OPERATIONS            │\n");
								printf("│              ├► 3.  SORTING            [○]│\n");
								printf("│              ├► 4.  SEARCHING          [○]│\n");
								printf("│              └► 5.  CHECK                 │\n");
								printf("└───────────────────────────────────────────┘\n");
								printf("CHOICE MATRIX: ");
								scanf("%d",&scelta_matrix);
								switch(scelta_matrix){
									case 0:{
										clrscr();
										printf("┌───────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                  │\n");
										printf("│└► 1.  MENU DATA-STRUCT                    │\n");
										printf("│       └► 3.  MENU MATRIX                  │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU │\n");
										printf("└───────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 3.  MENU MATRIX                  │\n");
											printf("│              └► 1.  INSERT                │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Insert row: ");
											scanf("%d", &r);
											printf("Insert column: ");
											scanf("%d", &c);
											ins_matrix(r,c,M);
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                    │\n");
											printf("│└► 1.  MENU DATA-STRUCT                      │\n");
											printf("│       └► 3.  MENU MATRIX                    │\n");
											printf("│              └► 2.  OPERATIONS              │\n");
											printf("│                     ├► 0.  BACK MATRIX MENU │\n");
											printf("│                     ├► 1.  k+M              │\n");
											printf("│                     ├► 2.  k*M              │\n");
											printf("│                     ├► 3.  M+M              │\n");
											printf("│                     ├► 4.  M*M              │\n");
											printf("│                     ├► 5.  INVERSE          │\n");
											printf("│                     ├► 6.  MAX/MIN          │\n");
											printf("│                     └► 7.  TRASPOSITION     │\n");
											printf("└─────────────────────────────────────────────┘\n");
											//printf("|5   M-M             |OK|\n"); NO
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌─────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                    │\n");
													printf("│└► 1.  MENU DATA-STRUCT                      │\n");
													printf("│       └► 3.  MENU MATRIX                    │\n");
													printf("│              └► 2.  OPERATIONS              │\n");
													printf("│                     └► 0.  BACK MATRIX MENU │\n");
													printf("└─────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 3.  MENU MATRIX       │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 1.  k+M │\n");
														printf("└────────────────────────────────┘\n");
														printf("MATRIX BEFORE k+M:\n");
														print_matrix(r,c,M);
														k_piu_M(r,c,M);
														printf("MATRIX AFTER k+M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 3.  MENU MATRIX       │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 2.  k*M │\n");
														printf("└────────────────────────────────┘\n");
														printf("MATRIX BEFORE k*M:\n");
														print_matrix(r,c,M);
														k_x_M(r,c,M);
														printf("MATRIX AFTER k*M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 3.  MENU MATRIX       │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 3.  M+M │\n");
														printf("└────────────────────────────────┘\n");
														printf("MATRIX BEFORE M+M:\n");
														print_matrix(r,c,M);
														M_piu_M(r,c,M);
														printf("MATRIX AFTER M+M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌────────────────────────────────┐\n");
														printf("│MAIN MENU                       │\n");
														printf("│└► 1.  MENU DATA-STRUCT         │\n");
														printf("│       └► 3.  MENU MATRIX       │\n");
														printf("│              └► 2.  OPERATIONS │\n");
														printf("│                     └► 4.  M*M │\n");
														printf("└────────────────────────────────┘\n");
														printf("MATRIX BEFORE M*M:\n");
														print_matrix(r,c,M);
														M_x_M(r,c,M);
														printf("MATRIX AFTER M*M:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 3.  MENU MATRIX           │\n");
														printf("│              └► 2.  OPERATIONS     │\n");
														printf("│                     └► 5.  INVERSE │\n");
														printf("└────────────────────────────────────┘\n");
														inverse_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 3.  MENU MATRIX           │\n");
														printf("│              └► 2.  OPERATIONS     │\n");
														printf("│                     └► 6.  MAX/MIN │\n");
														printf("└────────────────────────────────────┘\n");
														max=max_matrix(r,c,M,max);
														min=min_matrix(r,c,M,min);
														printf("MAX(M[%d][%d])=%d, min(M[%d][%d])=%d\n", r, c, max, r, c, min);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 3.  MENU MATRIX                │\n");
														printf("│              └► 2.  OPERATIONS          │\n");
														printf("│                     └► 7.  TRASPOSITION │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("MATRIX BEFORE TRASPOSITION:\n");
														print_matrix(r,c,M);
														trasp_matrix(r,c,M);
														printf("MATRIX AFTER TRASPOSITION:\n");
														print_matrix(r,c,M);
														printf("Do you want to back to OPERATIONS MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 3.  MENU MATRIX                          │\n");
														printf("│              └► 2.  OPERATIONS                    │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 3.  MENU MATRIX                  │\n");
											printf("│              └► 3.  SORTING               │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 3.  MENU MATRIX                  │\n");
											printf("│              └► 4.  SEARCHING             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										int scelta_check=0;
										do{
											clrscr();
											printf("┌─────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                    │\n");
											printf("│└► 1.  MENU DATA-STRUCT                      │\n");
											printf("│       └► 3.  MENU MATRIX                    │\n");
											printf("│              └► 5.  CHECK                   │\n");
											printf("│                     ├► 0.  BACK MATRIX MENU │\n");
											printf("│                     ├► 1.  DETERMINANT      │\n");
											printf("│                     ├► 2.  SPARSE           │\n");
											printf("│                     └► 3.  IDENTIFY OR NOT  │\n");
											printf("└─────────────────────────────────────────────┘\n");
											printf("CHOICE CHECK: ");
											scanf("%d",&scelta_check);
											switch(scelta_check){
												case 0:{
													clrscr();
													printf("┌─────────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                    │\n");
													printf("│└► 1.  MENU DATA-STRUCT                      │\n");
													printf("│       └► 3.  MENU MATRIX                    │\n");
													printf("│              └► 5.  CHECK                   │\n");
													printf("│                     └► 0.  BACK MATRIX MENU │\n");
													printf("└─────────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌────────────────────────────────────────┐\n");
														printf("│MAIN MENU                               │\n");
														printf("│└► 1.  MENU DATA-STRUCT                 │\n");
														printf("│       └► 3.  MENU MATRIX               │\n");
														printf("│              └► 5.  CHECK              │\n");
														printf("│                     └► 1.  DETERMINANT │\n");
														printf("└────────────────────────────────────────┘\n");
														print_matrix(r,c,M);
														printf("Determinant of %dX%d matrix is: %d\n", r,c, det(r,c,M));
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌───────────────────────────────────┐\n");
														printf("│MAIN MENU                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT            │\n");
														printf("│       └► 3.  MENU MATRIX          │\n");
														printf("│              └► 5.  CHECK         │\n");
														printf("│                     └► 2.  SPARSE │\n");
														printf("└───────────────────────────────────┘\n");
														print_matrix(r,c,M);
														sparse_matrix(r,c,M);
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                   │\n");
														printf("│└► 1.  MENU DATA-STRUCT                     │\n");
														printf("│       └► 3.  MENU MATRIX                   │\n");
														printf("│              └► 5.  CHECK                  │\n");
														printf("│                     └► 3.  IDENTIFY OR NOT │\n");
														printf("└────────────────────────────────────────────┘\n");
														isIdentity(r,c,M)? printf("Yes!\n") : printf("No!\n");
														printf("Do you want to back to CHECK MENU?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 3.  MENU MATRIX                          │\n");
														printf("│              └► 5.  CHECK                         │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to CHECK?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 3.  MENU MATRIX                   │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to MATRIX MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 4:{
							int scelta_stack=0;
							do{
								clrscr();
								printf("┌────────────────────────────────────────┐\n");
								printf("│MAIN MENU                               │\n");
								printf("│└► 1.  MENU DATA-STRUCT                 │\n");
								printf("│       └► 9.  MENU STACK                │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU [●]│\n");
								printf("│              ├► 1.  INSERT          [○]│\n");
								printf("│              ├► 2.  DELETE          [○]│\n");
								printf("│              ├► 3.  OPERATIONS      [○]│\n");
								printf("│              ├► 4.  SORTING         [○]│\n");
								printf("│              ├► 5.  SEARCHING       [○]│\n");
								printf("│              └► 6.  CHECK           [○]│\n");
								printf("└────────────────────────────────────────┘\n");
								printf("CHOICE STACK: ");
								scanf("%d",&scelta_stack);
								switch(scelta_stack){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU DATA-STRUCT              │\n");
										printf("│       └► 9.  MENU STACK             │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 1.  INSERT                │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 2.  DELETE                │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 3.  OPERATIONS            │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 4.  SORTING               │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 5.  SEARCHING             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU STACK                   │\n");
											printf("│              └► 6.  CHECK                 │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 9.  MENU STACK                    │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to STACK MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 5:{
							int scelta_queue=0;
							do{
								clrscr();
								printf("┌────────────────────────────────────────┐\n");
								printf("│MAIN MENU                               │\n");
								printf("│└► 1.  MENU DATA-STRUCT                 │\n");
								printf("│       └► 9.  MENU QUEUE                │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU [●]│\n");
								printf("│              ├► 1.  INSERT          [○]│\n");
								printf("│              ├► 2.  DELETE          [○]│\n");
								printf("│              ├► 3.  OPERATIONS      [○]│\n");
								printf("│              ├► 4.  SORTING         [○]│\n");
								printf("│              ├► 5.  SEARCHING       [○]│\n");
								printf("│              └► 6.  CHECK           [○]│\n");
								printf("└────────────────────────────────────────┘\n");
								printf("CHOICE QUEUE: ");
								scanf("%d",&scelta_queue);
								switch(scelta_queue){
									case 0:{
										clrscr();
										printf("┌─────────────────────────────────────┐\n");
										printf("│MAIN MENU                            │\n");
										printf("│└► 1.  MENU DATA-STRUCT              │\n");
										printf("│       └► 9.  MENU QUEUE             │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU │\n");
										printf("└─────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 1.  INSERT                │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 2.  DELETE                │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 3.  OPERATIONS            │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 4.  SORTING               │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 5.  SEARCHING             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 9.  MENU QUEUE                   │\n");
											printf("│              └► 6.  CHECK                 │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 9.  MENU QUEUE                    │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to QUEUE MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;

						case 6:{
							int scelta_list=0, val=0, length=0, x=0, y=0, n=0, upper=10, lower=0;
							struct L *head=NULL;
							char scelta_random='n';
							srand(time(NULL));
							do{
								clrscr();
								printf("│              ├► 4.  SORTING               [○]│\n");
								printf("┌───────────────────────────────────────────┐\n");
								printf("│MAIN MENU                                  │\n");
								printf("│└► 1.  MENU DATA-STRUCT                    │\n");
								printf("│       └► 6.  MENU LIST                    │\n");
								printf("│              ├► 0.  BACK DATA-STRUCT MENU │\n");
								printf("│              ├► 1.  INSERT                │\n");
								printf("│              ├► 2.  DELETE                │\n");
								printf("│              ├► 3.  OPERATIONS            │\n");
								printf("│              ├► 4.  SORTING            [○]│\n");
								printf("│              ├► 5.  SEARCHING          [○]│\n");
								printf("│              └► 6.  CHECK              [○]│\n");
								printf("└───────────────────────────────────────────┘\n");
								printf("CHOICE LIST: ");
								scanf("%d",&scelta_list);
								switch(scelta_list){
									case 0:{
										clrscr();
										printf("┌───────────────────────────────────────────┐\n");
										printf("│MAIN MENU                                  │\n");
										printf("│└► 1.  MENU DATA-STRUCT                    │\n");
										printf("│       └► 6.  MENU LIST                    │\n");
										printf("│              └► 0.  BACK DATA-STRUCT MENU │\n");
										printf("└───────────────────────────────────────────┘\n");
									}break;
									
									case 1:{
										int scelta_insert=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 6.  MENU LIST                    │\n");
											printf("│              └► 1.  INSERT                │\n");
											printf("│                     ├► 0.  BACK LIST MENU │\n");
											printf("│                     ├► 1.  SORTED      IT │\n");
											printf("│                     ├► 2.  HEAD        IT │\n");
											printf("│                     ├► 3.  MIDDLE      IT │\n");
											printf("│                     ├► 4.  QUEUE       IT │\n");
											printf("│                     ├► 5.  SORTED      RE │\n");
											printf("│                     ├► 6.  HEAD        RE │\n");
											printf("│                     ├► 7.  MIDDLE      RE │\n");
											printf("│                     └► 8.  QUEUE       RE │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("CHOICE INSERT: ");
											scanf("%d",&scelta_insert);
											switch(scelta_insert){
												case 0:{
													clrscr();
													printf("┌───────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                  │\n");
													printf("│└► 1.  MENU DATA-STRUCT                    │\n");
													printf("│       └► 6.  MENU LIST                    │\n");
													printf("│              └► 1.  INSERT                │\n");
													printf("│                     └► 0.  BACK LIST MENU │\n");
													printf("└───────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 1.  INSERT           │\n");
														printf("│                     └► 1.  SORTED IT │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_sort_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_sort_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 1.  INSERT         │\n");
														printf("│                     └► 2.  HEAD IT │\n");
														printf("└────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_head_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_head_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 1.  INSERT           │\n");
														printf("│                     └► 3.  MIDDLE IT │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_middle_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_middle_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 1.  INSERT          │\n");
														printf("│                     └► 4.  QUEUE IT │\n");
														printf("└─────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_queue_it(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_queue_it(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 1.  INSERT           │\n");
														printf("│                     └► 5.  SORTED RE │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_sort_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_sort_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 1.  INSERT         │\n");
														printf("│                     └► 6.  HEAD RE │\n");
														printf("└────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_head_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_head_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 1.  INSERT           │\n");
														printf("│                     └► 7.  MIDDLE RE │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_middle_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_middle_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 1.  INSERT          │\n");
														printf("│                     └► 8.  QUEUE RE │\n");
														printf("└─────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Insert random value/s?(y/n): ");
														scanf("%s", &scelta_random);
														if((scelta_random == 'y')&&(scelta_random != 'n')){
															//random insert
															printf("Enter how many value/s: ");
															scanf("%d", &n);
															for(int i=0; i<n; i++){
																int val=rand()%(upper-lower+1)+lower;
																printf("pushing: %d\n", val);
																push_queue_re(&head,val);
															}
														}else{
															//manual insert
															printf("Push new value: ");
															scanf("%d", &val);
															printf("pushing: %d\n", val);
															push_queue_re(&head,val);
														}
														print_list_it(&head);
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 6.  MENU LIST                            │\n");
														printf("│              └► 1.  INSERT                        │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to INSERT?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 2:{
										int scelta_delete=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 6.  MENU LIST                    │\n");
											printf("│              └► 2.  DELETE                │\n");
											printf("│                     ├► 0.  BACK LIST MENU │\n");
											printf("│                     ├► 1.  HEAD        IT │\n");
											printf("│                     ├► 2.  BY VAL      IT │\n");
											printf("│                     ├► 3.  QUEUE       IT │\n");
											printf("│                     ├► 4.  ALL         IT │\n");
											printf("│                     ├► 5.  HEAD        RE │\n");
											printf("│                     ├► 6.  BY VAL      RE │\n");
											printf("│                     ├► 7.  QUEUE       RE │\n");
											printf("│                     └► 8.  ALL         RE │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("CHOICE DELETE: ");
											scanf("%d",&scelta_delete);
											switch(scelta_delete){
												case 0:{
													clrscr();
													printf("┌───────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                  │\n");
													printf("│└► 1.  MENU DATA-STRUCT                    │\n");
													printf("│       └► 6.  MENU LIST                    │\n");
													printf("│              └► 2.  DELETE                │\n");
													printf("│                     └► 0.  BACK LIST MENU │\n");
													printf("└───────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 2.  DELETE         │\n");
														printf("│                     └► 1.  HEAD IT │\n");
														printf("└────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_list_it(&head);
														pop_head_it(&head);
														printf("-After delete head:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 2.  DELETE           │\n");
														printf("│                     └► 2.  BY VAL IT │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Push value to delete: ");
														scanf("%d", &val);
														printf("-Before delete by val:\n");
														print_list_it(&head);
														pop_val_it(&head,val);
														printf("-After delete by val:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 2.  DELETE          │\n");
														printf("│                     └► 3.  QUEUE IT │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_list_it(&head);
														pop_queue_it(&head);
														printf("-After delete queue:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌───────────────────────────────────┐\n");
														printf("│MAIN MENU                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT            │\n");
														printf("│       └► 6.  MENU LIST            │\n");
														printf("│              └► 2.  DELETE        │\n");
														printf("│                     └► 4.  ALL IT │\n");
														printf("└───────────────────────────────────┘\n");
														printf("-Before delete all:\n");
														print_list_it(&head);
														pop_all_it(&head);
														printf("-After delete all:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 2.  DELETE         │\n");
														printf("│                     └► 5.  HEAD RE │\n");
														printf("└────────────────────────────────────┘\n");
														printf("-Before delete head:\n");
														print_list_it(&head);
														pop_head_re(&head);
														printf("-After delete head:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 2.  DELETE           │\n");
														printf("│                     └► 6.  BY VAL RE │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("Push value to delete: ");
														scanf("%d", &val);
														printf("-Before delete by val:\n");
														print_list_it(&head);
														pop_val_re(&head,val);
														printf("-After delete by val:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 2.  DELETE          │\n");
														printf("│                     └► 7.  QUEUE RE │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("-Before delete queue:\n");
														print_list_it(&head);
														pop_queue_re(&head);
														printf("-After delete queue:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌───────────────────────────────────┐\n");
														printf("│MAIN MENU                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT            │\n");
														printf("│       └► 6.  MENU LIST            │\n");
														printf("│              └► 2.  DELETE        │\n");
														printf("│                     └► 8.  ALL RE │\n");
														printf("└───────────────────────────────────┘\n");
														printf("-Before delete all:\n");
														print_list_it(&head);
														pop_all_re(&head);
														printf("-After delete all:\n");
														print_list_it(&head);
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 6.  MENU LIST                            │\n");
														printf("│              └► 2.  DELETE                        │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to DELETE?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 3:{
										int scelta_operations=0;
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 6.  MENU LIST                    │\n");
											printf("│              └► 3.  OPERATIONS            │\n");
											printf("│                     ├► 0.  BACK LIST MENU │\n");
											printf("│                     ├► 1.  PRINT LIST  IT │\n");
											printf("│                     ├► 2.  REVERSE     IT │\n");
											printf("│                     ├► 3.  SEARCH      IT │\n");
											printf("│                     ├► 4.  SWAP        IT │\n");
											printf("│                     ├► 5.  PRINT LIST  RE │\n");
											printf("│                     ├► 6.  REVERSE     RE │\n");
											printf("│                     ├► 7.  SEARCH      RE │\n");
											printf("│                     └► 8.  SWAP        RE │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("CHOICE OPERATIONS: ");
											scanf("%d",&scelta_operations);
											switch(scelta_operations){
												case 0:{
													clrscr();
													printf("┌───────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                  │\n");
													printf("│└► 1.  MENU DATA-STRUCT                    │\n");
													printf("│       └► 6.  MENU LIST                    │\n");
													printf("│              └► 3.  OPERATIONS            │\n");
													printf("│                     └► 0.  BACK LIST MENU │\n");
													printf("└───────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                 │\n");
														printf("│└► 1.  MENU DATA-STRUCT                   │\n");
														printf("│       └► 6.  MENU LIST                   │\n");
														printf("│              └► 3.  OPERATIONS           │\n");
														printf("│                     └► 1.  PRINT LIST IT │\n");
														printf("└──────────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────┐\n");
														printf("│MAIN MENU                              │\n");
														printf("│└► 1.  MENU DATA-STRUCT                │\n");
														printf("│       └► 6.  MENU LIST                │\n");
														printf("│              └► 3.  OPERATIONS        │\n");
														printf("│                     └► 2.  REVERSE IT │\n");
														printf("└───────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_list_it(&head);
														reverse_it(&head);
														printf("-After reverse:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 3.  OPERATIONS       │\n");
														printf("│                     └► 3.  SEARCH IT │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Enter value to search: ");
														scanf("%d", &val);
														search_it(&head, val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 3.  OPERATIONS     │\n");
														printf("│                     └► 4.  SWAP IT │\n");
														printf("└────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_list_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d", &x, &y);
														swapNodes_it(&head,x,y);
														printf("-After swap:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                 │\n");
														printf("│└► 1.  MENU DATA-STRUCT                   │\n");
														printf("│       └► 6.  MENU LIST                   │\n");
														printf("│              └► 3.  OPERATIONS           │\n");
														printf("│                     └► 5.  PRINT LIST RE │\n");
														printf("└──────────────────────────────────────────┘\n");
														printf("L: { ");
														print_list_re(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────┐\n");
														printf("│MAIN MENU                              │\n");
														printf("│└► 1.  MENU DATA-STRUCT                │\n");
														printf("│       └► 6.  MENU LIST                │\n");
														printf("│              └► 3.  OPERATIONS        │\n");
														printf("│                     └► 6.  REVERSE RE │\n");
														printf("└───────────────────────────────────────┘\n");
														printf("-Before reverse:\n");
														print_list_it(&head);
														reverse_re(&head);
														printf("-After reverse:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 3.  OPERATIONS       │\n");
														printf("│                     └► 7.  SEARCH RE │\n");
														printf("└──────────────────────────────────────┘\n");
														print_list_it(&head);
														printf("Enter value to search: ");
														scanf("%d", &val);
														search_re(&head, val)? printf("Yes\n") : printf("No\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌────────────────────────────────────┐\n");
														printf("│MAIN MENU                           │\n");
														printf("│└► 1.  MENU DATA-STRUCT             │\n");
														printf("│       └► 6.  MENU LIST             │\n");
														printf("│              └► 3.  OPERATIONS     │\n");
														printf("│                     └► 8.  SWAP RE │\n");
														printf("└────────────────────────────────────┘\n");
														printf("-Before swap:\n");
														print_list_it(&head);
														printf("Push value to swap (x y): ");
														scanf("%d%d", &x, &y);
														swapNodes_re(&head,x,y);
														printf("-After swap:\n");
														print_list_it(&head);
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 6.  MENU LIST                            │\n");
														printf("│              └► 3.  OPERATIONS                    │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to OPERATIONS?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 4:{
										int scelta_sort=0;
										do{
											clrscr();
											printf("┌──────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                     │\n");
											printf("│└► 1.  MENU DATA-STRUCT                       │\n");
											printf("│       └► 6.  MENU LIST                       │\n");
											printf("│              └► 4.  SORTING                  │\n");
											printf("│                     ├► 0.  BACK LIST MENU    │\n");
											printf("│                     ├► 1.  BUBBLE      IT    │\n");
											printf("│                     ├► 2.  INSERTION   IT    │\n");
											printf("│                     ├► 3.  MERGE       IT    │\n");
											printf("│                     ├► 4.  QUICK       IT [○]│\n");
											printf("│                     ├► 5.  BUBBLE      RE [○]│\n");
											printf("│                     ├► 6.  INSERTION   RE [○]│\n");
											printf("│                     ├► 7.  MERGE       RE [○]│\n");
											printf("│                     └► 8.  QUICK       RE    │\n");
											printf("└──────────────────────────────────────────────┘\n");
											printf("CHOICE SORTING: ");
											scanf("%d",&scelta_sort);
											switch(scelta_sort){
												case 0:{
													clrscr();
													printf("┌───────────────────────────────────────────┐\n");
													printf("│MAIN MENU                                  │\n");
													printf("│└► 1.  MENU DATA-STRUCT                    │\n");
													printf("│       └► 6.  MENU LIST                    │\n");
													printf("│              └► 4.  SORTING               │\n");
													printf("│                     └► 0.  BACK LIST MENU │\n");
													printf("└───────────────────────────────────────────┘\n");
												}break;

												case 1:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 4.  SORTING          │\n");
														printf("│                     └► 1.  BUBBLE IT │\n");
														printf("└──────────────────────────────────────┘\n");
														printf("-Before bubble sort:\n");
														print_list_it(&head);
														bubble_struct_it(&head);
														printf("-After bubble sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 2:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 6.  MENU LIST                  │\n");
														printf("│              └► 4.  SORTING             │\n");
														printf("│                     └► 2.  INSERTION IT │\n");
														printf("└─────────────────────────────────────────┘\n");
														printf("-Before insertion sort:\n");
														print_list_it(&head);
														insertion_struct_it(&head);
														printf("-After insertion sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 3:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 4.  SORTING         │\n");
														printf("│                     └► 3.  MERGE IT │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("-Before merge sort:\n");
														print_list_it(&head);
														MergeSort(&head);
														printf("-After merge sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 4:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 4.  SORTING         │\n");
														printf("│                     └► 4.  QUICK IT │\n");
														printf("└─────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 5:{
													do{
														clrscr();
														printf("┌──────────────────────────────────────┐\n");
														printf("│MAIN MENU                             │\n");
														printf("│└► 1.  MENU DATA-STRUCT               │\n");
														printf("│       └► 6.  MENU LIST               │\n");
														printf("│              └► 4.  SORTING          │\n");
														printf("│                     └► 5.  BUBBLE RE │\n");
														printf("└──────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 6:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                │\n");
														printf("│└► 1.  MENU DATA-STRUCT                  │\n");
														printf("│       └► 6.  MENU LIST                  │\n");
														printf("│              └► 4.  SORTING             │\n");
														printf("│                     └► 6.  INSERTION RE │\n");
														printf("└─────────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 7:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 4.  SORTING         │\n");
														printf("│                     └► 7.  MERGE RE │\n");
														printf("└─────────────────────────────────────┘\n");
														
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												case 8:{
													do{
														clrscr();
														printf("┌─────────────────────────────────────┐\n");
														printf("│MAIN MENU                            │\n");
														printf("│└► 1.  MENU DATA-STRUCT              │\n");
														printf("│       └► 6.  MENU LIST              │\n");
														printf("│              └► 4.  SORTING         │\n");
														printf("│                     └► 8.  QUICK RE │\n");
														printf("└─────────────────────────────────────┘\n");
														printf("-Before quick sort:\n");
														print_list_it(&head);
														quickSort(&head);
														printf("-After quick sort:\n");
														print_list_it(&head);
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')||(torna != 'y'));
												}break;

												default:{
													do{
														clrscr();
														printf("┌───────────────────────────────────────────────────┐\n");
														printf("│MAIN MENU                                          │\n");
														printf("│└► 1.  MENU DATA-STRUCT                            │\n");
														printf("│       └► 6.  MENU LIST                            │\n");
														printf("│              └► 4.  SORTING                       │\n");
														printf("│                     └► X.  DEFAULT: ERROR CHOICE! │\n");
														printf("└───────────────────────────────────────────────────┘\n");
														printf("Do you want to back to SORTING?(y/n): ");
														scanf("%s", &torna);
													}while((torna == 'n')&&(torna != 'y'));
												}break;
											}
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 5:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 6.  MENU LIST                    │\n");
											printf("│              └► 5.  SEARCHING             │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;

									case 6:{
										do{
											clrscr();
											printf("┌───────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                  │\n");
											printf("│└► 1.  MENU DATA-STRUCT                    │\n");
											printf("│       └► 6.  MENU LIST                    │\n");
											printf("│              └► 6.  CHECK                 │\n");
											printf("└───────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')||(torna != 'y'));
									}break;
									
									default:{
										do{
											clrscr();
											printf("┌────────────────────────────────────────────┐\n");
											printf("│MAIN MENU                                   │\n");
											printf("│└► 1.  MENU DATA-STRUCT                     │\n");
											printf("│       └► 6.  MENU LIST                     │\n");
											printf("│              └► X.  DEFAULT: ERROR CHOICE! │\n");
											printf("└────────────────────────────────────────────┘\n");
											printf("Do you want to back to LIST MENU?(y/n): ");
											scanf("%s", &torna);
										}while((torna == 'n')&&(torna != 'y'));
									}break;
								}
								printf("Do you want to back to DATA-STRUCT MENU?(y/n): ");
								scanf("%s",&torna);
							}while((torna == 'n')&&(torna != 'y'));
						}break;
						//...
						default:{
							do{
								clrscr();
								printf("┌─────────────────────────────────────┐\n");
								printf("│MAIN MENU                            │\n");
								printf("│└► 2.  MENU DATA-STRUCT              │\n");
								printf("│       └► X.  DEFAULT: ERROR CHOICE! │\n");
								printf("└─────────────────────────────────────┘\n");
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