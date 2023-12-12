#include<stdio.h>
int is_prime(int n){
	int count = 0;
	for(int i = 2; i < n ; i++){
		if( n % i ==0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int smaller = n;
	int larger = n+1;
	

	while(1)
	{
	    if(is_prime(smaller)){
		printf("%d\n",smaller);
		break;
	}
	 else{
		smaller--;
    	}
	}
	while(1)
	{
	    if(is_prime(larger)){
		printf("%d\n",larger);
		break;
	}
	 else{
		larger++;
    	}
	}
}




