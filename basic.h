/*┌────────────────────────────────────────────────────────┐
  │MAIN MENU                                               │
  │├► 1 BASIC                                              │
  ││    ├► 0 BACK TO MAIN MENU              - Description: │
  ││    ├► 1 HELLO WORLD                    - Description: │*/
void hello_world(){
	printf("HELLO WORLD!\n");
}
/*││    ├► 2 VAR SIZE                       - Description: │*/
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
/*││    ├► 4 PATTERNS                       - Description: │*/
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
/*││    ├► 5 NUMBERS                        - Description: │*/
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
/*││    ├► 6 MATH FORMULA                   - Description: │*/
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
/*││    ├► 7 FLOATING-POINT ARITHMETIC      - Description: │*/
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
/*││    ├► 8 CONVERSIONS                    - Description: │*/
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
/*││    └► 9 RANDPASS                       - Description: │*/
void randpass(int length, int lower, int upper){
	srand((unsigned int)time(NULL));
	while(length){
		putchar(rand()%(upper-lower+1)+lower);
		srand(rand());
		length--;
	}
	printf("\n");
}

void randpass_sym(int length, int lower, int upper){
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

void randpass_cl_cu(int length, int lower, int upper){
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

void randpass_cl_cu_num(int length, int lower, int upper){
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

void randpass_cl_cu_sym(int length, int lower, int upper){
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

void randpass_cu_num(int length, int lower, int upper){
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

void randpass_cu_sym(int length, int lower, int upper){
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

void randpass_cl_num(int length, int lower, int upper){
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

void randpass_cl_sym(int length, int lower, int upper){
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