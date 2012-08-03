/*
Find the no of positive integral solutions for the equations (1/x) + (1/y) = 1/N! (read 1 by n factorial) Print a single integer which is the no of positive integral solutions modulo 1000007.

Input:
N 
Output:
Number of positive integral solutions for (x,y) modulo 1000007
Constraints:
1 <= N <= 10^6 
Sample Input00:
1
Sample Output00:
1

 
Sample Input01:
32327
Sample Output 01:
656502
 
Sample Input02:
40921
Sample Output 02:
686720
*/


#include <stdio.h>


long long unsigned int smartCombi(int n, int r, long long unsigned int last) 
{
	if(n < r)
		return 0;
	if(n == r)
		return 1;
	return (last * n)/ (n-r);
}

int main()
{
	int i, N ;
	long long unsigned int  result =0, last_res=1;
	
	printf("Get a number = ");
	scanf("%d", &N);

	for(i = 2; i <= N; i++) {
		last_res = smartCombi(i+1, 2, last_res);
//		printf("%d:%llu\n", i, last_res);

	}

	printf("\nresult %llu \n", (last_res%1000007) + 1);
	return 0;
}

#if 0
int fact(int n) {
	int i = 0;
	int result = 1;

	if( n == 0 )
		return 1;
	if( n == 1 )
		return 1;

	for(i=1; i <= n; i++) {
		result = result *i;
	}
	
	return result;
}

int combination(int n,  int r) {
	printf( "\nnCr : %dC%d :: %d", n, r, fact(n)/ (fact(n-r) * fact(r)));
	return (fact(n)/ (fact(n-r) * fact(r)));
}

int caluculate_combinations_for_i(int num)
{
	int result = 0, i;
	for(i = 1; i <= (num/2); i++) {
		result += combination(num, i);
 	}
 	return result;
}
#endif

