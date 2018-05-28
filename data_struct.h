/*┌────────────────────────────────────────────────────────┐
  │MAIN MENU                                               │
  │├► 1 BASIC                                              │
  │└► 2 DATA-STRUCTURES                                    │
  │     ├► ARRAY                            - Description: │*/
void print_array(int dim, int A[dim]){
	printf("A[%d]: {", dim);
	for(int i=0; i<dim; i++){
		printf(" %d ", A[i]);
	}
	printf("}\n");
}

void ins_random_array(int dim, int A[dim]){
	int upper=10, lower=0;
	srand((unsigned int)time(NULL));
	for(int i=0; i<dim; i++){
		int val=rand()%(upper-lower+1)+lower;
		srand(rand());
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
/*│     ├► STRING                           - Description: │*/
void print_single_string(int i,char Str1[]){
	printf("Str%d[%ld]: ",i,strlen(Str1));
	puts(Str1);
}

void print_multiple_string(int i,int n,char Str3[MAXSIZE][MAXSIZE]){
	for(int k=0; k<n; k++){
		printf("Str%d[%d]: ",i,k);
		puts(Str3[k]);
	}
}

void print_string(int i,char Str1[],char Str2[],int n,char Str3[MAXSIZE][MAXSIZE]){
	if(i == 1){
		print_single_string(i,Str1);
	}else if(i == 2){
		print_single_string(i,Str2);
	}else if(i == 3){
		print_multiple_string(i,n,Str3);
	}
}

void ins_single_manual_string(int i,char Str1[]){ //da agg.: no insert spaces
	printf("Inserting single manual string: ");
	scanf("%s",Str1);
	print_single_string(i,Str1);
}
void ins_multiple_manual_string(int i,int n,char Str3[MAXSIZE][MAXSIZE]){
	printf("Inserting multiple manual strings: \n");
	for(int k=0; k<n; k++){
		printf("Str%d[%d]: ",i,k);
		scanf("%s",Str3[k]);
	}
}
void ins_string(int i,char Str1[],char Str2[],int n,char Str3[MAXSIZE][MAXSIZE]){
	if(i == 1){
		ins_single_manual_string(i,Str1);
	}else if(i == 2){
		ins_single_manual_string(i,Str2);
	}else if(i == 3){
		ins_multiple_manual_string(i,n,Str3);
	}
}

void sorting_string(int n,char Str3[MAXSIZE][MAXSIZE]){
	char temp[MAXSIZE];
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(strcmp(Str3[i],Str3[j]) > 0){
				strcpy(temp,Str3[i]);
				strcpy(Str3[i],Str3[j]);
				strcpy(Str3[j],temp);
			}
		}
	}
}

void sort_string(int i,char Str1[],char Str2[],char Str3[MAXSIZE][MAXSIZE]){
	int n=0;
	printf("Insert no. of string: ");
	scanf("%d",&n);
	ins_string(i,Str1,Str2,n,Str3);
	printf("\nBefore sort string:\n");
	print_string(i,Str1,Str2,n,Str3);
	sorting_string(n,Str3);
	printf("\nAfter sort string:\n");
	print_string(i,Str1,Str2,n,Str3);
}

void concat(char *Str,char *Str2){
	int i=strlen(Str),j;
	for(j=0; Str2[j] != '\0'; i++,j++){
		Str[i]=Str2[j];
	}
	Str[i]='\0';
}

void conversion_upper_lower_string(char *Str){
	for(int i=0; i<=strlen(Str); i++){
		if(Str[i] >= 65 && Str[i] <= 90){
			Str[i]=Str[i]+32;
		}
	}
}

void removeSpaces(char *Str){
	int count=0;
	for(int i=0; Str[i]; i++){
		if(Str[i] != ' ')
			Str[count++]=Str[i];
	}
	Str[count]='\0';
}

void remove_characters_string(char *Str){
	int j;
	for(int i=0; Str[i]!='\0'; ++i){
		while(!((Str[i]>='a' && Str[i]<='z') || (Str[i]>='A' && Str[i]<='Z') || Str[i]=='\0')){
			for(j=i; Str[j]!='\0'; ++j){
				Str[j]=Str[j+1];
			}
			Str[j]='\0';
		}
	}
}

void reverse_string_pointer(int i,char Str1[]){
	char *ptr;
	int k=0;
	ptr=Str1;
	for(int k=0; k<strlen(Str1); k++){
		if(*ptr == '\0'){
			break;
		}
		ptr++;
	}
	ptr--;
	k=strlen(Str1);
	printf("After reverse:\n");
	printf("Str%d[%d]: ",i,k);
	for(k=strlen(Str1); k>0; k--){
		printf("%c",*ptr--);
	}
	printf("\n");
}

char *strrev(char *Str){
	char *p1,*p2;
	if(! Str || ! *Str){
		return Str;
	}
	for(p1=Str,p2=Str+strlen(Str)-1; p2>p1; ++p1,--p2){
		*p1^=*p2;
		*p2^=*p1;
		*p1^=*p2;
	}
	return Str;
}

void copy_string_without_strcpy(char str1[],char str2[]){
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
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
	int count=0,c=0,flag;
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

void count_freq_characters_string(char Str[]){
	int c=0,count[26]={0};
	while(Str[c] != '\0'){
		if(Str[c] >= 'a' && Str[c] <= 'z'){
			count[Str[c]-'a']++;
		}
		c++;
	}
	for(c=0; c<26; c++){
		if(count[c] != 0){
			printf("%c: %d times\n",c+'a',count[c]);
		}
	}
}

void count_upper_lower_characters_string(char Str[]){
	int upper=0,lower=0,i=0;
	while(Str[i] != '\0'){
		if(Str[i] >= 'A' && Str[i] <= 'Z'){
			upper++;
		}
		if(Str[i] >= 'a' && Str[i] <= 'z'){
			lower++;
		}
		i++;
	}
	printf("Uppercase Letters: %d\n",upper);
	printf("Lowercase Letters: %d\n",lower);
}

void palindrome_string_array(char Str[]){
	int counter=0,length=strlen(Str),flag=1;
	for(counter = 0; counter < length/2 && flag; counter++){
		if(Str[counter] != Str[length-counter-1]){
			flag = 0;
			break;
		}
	}
	if(flag){
		printf("%s is a palindrome\n",Str);
	}else{
		printf("%s is not a palindrome\n",Str);
	}
}

void palindrome_string(char Str[]){
	int begin=0,middle=0,end=0,length=0;
	while(Str[length] != '\0'){
		length++;
	}
	end=length - 1;
	middle=length/2;
	for(begin=0; begin<middle; begin++){
		if(Str[begin] != Str[end]){
			printf("Entered String is not a palindrome string\n");
			break;
		}
		end--;
	}
	if(begin == middle){
		printf("Entered String is a palindrome string\n");
	}
}
/*│     ├► MATRIX                           - Description: │*/
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
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			M[i][j]=0;
		}
	}
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
/*│     ├► STACK                            - Description: │*/
struct S{
	int val;
	struct S *next;	
};

int length_it_stack(struct S **head){
	struct S *current=*head;
	int len =0;
	while(current != NULL){
		current=current->next;
		len++;
	}
	return len;
}

void push_stack_head_it(struct S **head, int val){
	struct S *current=(struct S*)malloc(sizeof(struct S));
	if(current == NULL){
		return;
	}else{
		current->val=val;
		current->next=*head;
		*head=current;
	}
}

void push_stack_head_re(struct S **head, int val){
	if((*head == NULL) || ((*head)->val <= val)) {
		struct S *current=(struct S *)malloc(sizeof(struct S));
		current->val=val;
		current->next=*head;
		*head=current;
	}else{
		push_stack_head_re(&(*head)->next,val);
	}
}

void pop_stack_head_it(struct S **head){
	if(*head != NULL){
		struct S *current=*head;
		*head=(*head)->next;
		current->next=NULL;
		free(current);
	}
}

void pop_stack_head_re(struct S **head){ //da rivedere 13
	if(*head == NULL){
		return;
	}else{
		free(*head);
		*head=(*head)->next;
		return;
	}
	pop_stack_head_re(&(*head)->next);
}

void print_stack_it(struct S **head){
	struct S *current=*head;
	printf("S[%d]:\n", length_it_stack(&(*head)));
	while(current != NULL){
		printf("| %d |\n  ^\n  |\n", current->val);
		current=current->next;
	}
	printf("|NULL|\n");
}

void reverse_stack_it(struct S **head){
	struct S *prev=NULL;
	struct S *current=*head;
	struct S *next=NULL;
	while(current != NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}

bool search_stack_it(struct S **head, int val){
	struct S *current=*head;
	while(current != NULL){
		if(current->val == val){
			return true;
		}
		current=current->next;
	}
	return false;
}

void swapNodes_stack_it(struct S **head, int x, int y){
	if (x == y){
		return;
	}
	struct S *prevX=NULL, *currX=*head;
	while (currX && currX->val != x){
		prevX=currX;
		currX=currX->next;
	}
	struct S *prevY=NULL, *currY=*head;
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
	struct S *temp=currY->next;
	currY->next=currX->next;
	currX->next =temp;
}

int length_re_stack(struct S **head){
	struct S *current=*head;
	if(current==NULL){
		return 0;
	}else{ 
		return length_re_stack(&current->next)+1;
	}
}

void print_stack_re(struct S **head){
	struct S *current=*head;
	if(current != NULL){
		printf("| %d |\n  ^\n  |\n", current->val);
		print_stack_re(&current->next);
	}else{
		printf("|NULL|\n");
		return;
	}
}

void reverse_stack_re(struct S **head){
	struct S* first;
	struct S* rest;
	if(*head == NULL){
		return;
	}
	first=*head;
	rest=first->next;
	if(rest == NULL){
		return;   
	}
	reverse_stack_re(&rest);
	first->next->next=first;
	first->next=NULL;
	*head=rest;
}

bool search_stack_re(struct S **head, int val){
	if(*head == NULL){
		return false;
	}
	if((*head)->val == val){
		return true;
	}
	return search_stack_re(&(*head)->next,val);
}

//BUBBLE SORT
void swap4_stack(struct S **a, struct S **b){
	struct S *temp=*a;
	*a=*b;
	*b=temp;
}

void swapNodes_stack_re(struct S** head, int x, int y){
	if (x == y){
		return;
	}
	struct S **a=NULL, **b=NULL;
	while(*head){
		if((*head)->val == x){
			a=head;
		}else if((*head)->val == y){
			b=head;
		}
		head=&((*head)->next);
	}
	if(a && b){

		swap4_stack(&(*a),&(*b));
		swap4_stack(&((*a)->next),&((*b)->next));
	}
}

void bubble_stack_struct_it(struct S **head){
	if(!(*head)){
		return;
	}
	struct S *previous_node=NULL, *sort_up_to=NULL;
	while(1){
		previous_node=NULL;
		struct S *ptr=*head, *last_change=NULL;
		while(ptr->next){
			if(sort_up_to && ptr == sort_up_to){
				break;
			}
			struct S *next=ptr->next;
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
void sortedInsert_it_stack(struct S** head, struct S* new_L){
	struct S* current;
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

void insertion_struct_stack_it(struct S **head){
	struct S *sorted=NULL, *current=*head;
	while(current != NULL){
		struct S *next=current->next;
		sortedInsert_it_stack(&sorted,current);
		current=next;
	}
	*head=sorted;
}

//MERGE SORT - Time Complexity: O(n Log n)
struct S* SortedMerge_stack(struct S **a, struct S **b){
    struct S *result=NULL;
    if((*a) == NULL){
        return(*b);
    }else if((*b) == NULL){
        return(*a);
    }
    if((*a)->val <= (*b)->val){
        result=*a;
        result->next=SortedMerge_stack(&(*a)->next, &(*b));
    }else{
        result=*b;
        result->next=SortedMerge_stack(&(*a), &(*b)->next);
    }
    return(result);
}

void FrontBackSplit_stack(struct S **source, struct S **frontRef, struct S **backRef){
    struct S *fast=(*source)->next;;
    struct S *slow=*source;
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

void MergeSort_atack(struct S **head){
    struct S *a;
    struct S *b;
    if((*head == NULL) || ((*head)->next == NULL)){
        return;
    }
    FrontBackSplit_stack(&(*head),&a,&b);
    MergeSort_atack(&a);
    MergeSort_atack(&b);
    *head=SortedMerge_stack(&a,&b);
}

//QUICK SORT
struct S *getTail_stack(struct S *cur){
	while(cur != NULL && cur->next != NULL){
		cur=cur->next;
	}
	return cur;
}

struct S *partition_struct_stack(struct S *head, struct S *end, struct S **newHead, struct S **newEnd){
	struct S *pivot=end, *prev=NULL, *cur=head, *tail=pivot;
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
			struct S *tmp=cur->next;
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
 
struct S *quickSortRecur_stack(struct S *head, struct S *end){
	if(!head || head == end){
		return head;
	}
	struct S *newHead=NULL, *newEnd=NULL;
	struct S *pivot=partition_struct_stack(head,end,&newHead,&newEnd);
	if(newHead != pivot){
		struct S *tmp=newHead;
		while(tmp->next != pivot){
			tmp=tmp->next;
		}
		tmp->next=NULL;
		newHead=quickSortRecur_stack(newHead,tmp);
		tmp=getTail_stack(newHead);
		tmp->next= pivot;
	}
	pivot->next=quickSortRecur_stack(pivot->next,newEnd);
	return newHead;
}

void quickSort_stack(struct S **headRef){
	(*headRef)=quickSortRecur_stack(*headRef, getTail_stack(*headRef));
	return;
}
/*│     ├► QUEUE                            - Description: │*/
struct Q{
	int val;
	struct Q *next;	
};

int length_queue_it(struct Q **head){
	struct Q *current=*head;
	int len =0;
	while(current != NULL){
		current=current->next;
		len++;
	}
	return len;
}

void push_queue_head_it(struct Q **head, int val){
	struct Q *current=(struct Q*)malloc(sizeof(struct Q));
	if(current == NULL){
		return;
	}else{
		current->val=val;
		current->next=*head;
		*head=current;
	}
}

void push_queue_head_re(struct Q **head, int val){
	if((*head == NULL) || ((*head)->val <= val)) {
		struct Q *current=(struct Q *)malloc(sizeof(struct Q));
		current->val=val;
		current->next=*head;
		*head=current;
	}else{
		push_queue_head_re(&(*head)->next,val);
	}
}

void pop_queue_queue_it(struct Q **head){
	struct Q *current=*head;
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

void pop_queue_queue_re(struct Q **head){
	if(*head == NULL ){
		return;
	}else if((*head)->next == NULL){
		free(*head);
		*head=NULL;
		return;
	}
	pop_queue_queue_re(&(*head)->next);
}

void print_queue_it(struct Q **head){
	struct Q *current=*head;
	printf("Q[%d]:\n", length_queue_it(&(*head)));
	while(current != NULL){
		printf("| %d |\n  ^\n  |\n", current->val);
		current=current->next;
	}
	printf("|NULL|\n");
}

void reverse_queue_it(struct Q **head){
	struct Q *prev=NULL;
	struct Q *current=*head;
	struct Q *next=NULL;
	while(current != NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}

bool search_queue_it(struct Q **head, int val){
	struct Q *current=*head;
	while(current != NULL){
		if(current->val == val){
			return true;
		}
		current=current->next;
	}
	return false;
}

void swapNodes_queue_it(struct Q **head, int x, int y){
	if (x == y){
		return;
	}
	struct Q *prevX=NULL, *currX=*head;
	while (currX && currX->val != x){
		prevX=currX;
		currX=currX->next;
	}
	struct Q *prevY=NULL, *currY=*head;
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
	struct Q *temp=currY->next;
	currY->next=currX->next;
	currX->next =temp;
}

int length_queue_re(struct Q **head){
	struct Q *current=*head;
	if(current==NULL){
		return 0;
	}else{ 
		return length_queue_re(&current->next)+1;
	}
}

void print_queue_re(struct Q **head){
	struct Q *current=*head;
	if(current != NULL){
		printf("| %d |\n  ^\n  |\n", current->val);
		print_queue_re(&current->next);
	}else{
		printf("|NULL|\n");
		return;
	}
}

void reverse_queue_re(struct Q **head){
	struct Q* first;
	struct Q* rest;
	if(*head == NULL){
		return;
	}
	first=*head;
	rest=first->next;
	if(rest == NULL){
		return;   
	}
	reverse_queue_re(&rest);
	first->next->next=first;
	first->next=NULL;
	*head=rest;
}

bool search_queue_re(struct Q **head, int val){
	if(*head == NULL){
		return false;
	}
	if((*head)->val == val){
		return true;
	}
	return search_queue_re(&(*head)->next,val);
}

//BUBBLE SORT
void swap4_queue(struct Q **a, struct Q **b){
	struct Q *temp=*a;
	*a=*b;
	*b=temp;
}

void swapNodes_queue_re(struct Q** head, int x, int y){
	if (x == y){
		return;
	}
	struct Q **a=NULL, **b=NULL;
	while(*head){
		if((*head)->val == x){
			a=head;
		}else if((*head)->val == y){
			b=head;
		}
		head=&((*head)->next);
	}
	if(a && b){

		swap4_queue(&(*a),&(*b));
		swap4_queue(&((*a)->next),&((*b)->next));
	}
}

void bubble_struct_queue_it(struct Q **head){
	if(!(*head)){
		return;
	}
	struct Q *previous_node=NULL, *sort_up_to=NULL;
	while(1){
		previous_node=NULL;
		struct Q *ptr=*head, *last_change=NULL;
		while(ptr->next){
			if(sort_up_to && ptr == sort_up_to){
				break;
			}
			struct Q *next=ptr->next;
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
void sortedInsert_queue_it(struct Q** head, struct Q* new_L){
	struct Q* current;
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

void insertion_struct_queue_it(struct Q **head){
	struct Q *sorted=NULL, *current=*head;
	while(current != NULL){
		struct Q *next=current->next;
		sortedInsert_queue_it(&sorted,current);
		current=next;
	}
	*head=sorted;
}

//MERGE SORT - Time Complexity: O(n Log n)
struct Q* SortedMerge_queue(struct Q **a, struct Q **b){
    struct Q *result=NULL;
    if((*a) == NULL){
        return(*b);
    }else if((*b) == NULL){
        return(*a);
    }
    if((*a)->val <= (*b)->val){
        result=*a;
        result->next=SortedMerge_queue(&(*a)->next, &(*b));
    }else{
        result=*b;
        result->next=SortedMerge_queue(&(*a), &(*b)->next);
    }
    return(result);
}

void FrontBackSplit_queue(struct Q **source, struct Q **frontRef, struct Q **backRef){
    struct Q *fast=(*source)->next;;
    struct Q *slow=*source;
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

void MergeSort_queue(struct Q **head){
    struct Q *a;
    struct Q *b;
    if((*head == NULL) || ((*head)->next == NULL)){
        return;
    }
    FrontBackSplit_queue(&(*head),&a,&b);
    MergeSort_queue(&a);
    MergeSort_queue(&b);
    *head=SortedMerge_queue(&a,&b);
}

//QUICK SORT
struct Q *getTail_queue(struct Q *cur){
	while(cur != NULL && cur->next != NULL){
		cur=cur->next;
	}
	return cur;
}

struct Q *partition_struct_queue(struct Q *head, struct Q *end, struct Q **newHead, struct Q **newEnd){
	struct Q *pivot=end, *prev=NULL, *cur=head, *tail=pivot;
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
			struct Q *tmp=cur->next;
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
 
struct Q *quickSortRecur_queue(struct Q *head, struct Q *end){
	if(!head || head == end){
		return head;
	}
	struct Q *newHead=NULL, *newEnd=NULL;
	struct Q *pivot=partition_struct_queue(head,end,&newHead,&newEnd);
	if(newHead != pivot){
		struct Q *tmp=newHead;
		while(tmp->next != pivot){
			tmp=tmp->next;
		}
		tmp->next=NULL;
		newHead=quickSortRecur_queue(newHead,tmp);
		tmp=getTail_queue(newHead);
		tmp->next= pivot;
	}
	pivot->next=quickSortRecur_queue(pivot->next,newEnd);
	return newHead;
}

void quickSort_queue(struct Q **headRef){
	(*headRef)=quickSortRecur_queue(*headRef, getTail_queue(*headRef));
	return;
}
/*│     ├► LIST                             - Description: │*/
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
/*│     ├► TREE                             - Description: │*/
/*│     └► BINARY TREE                      - Description: │
  └────────────────────────────────────────────────────────┘*/