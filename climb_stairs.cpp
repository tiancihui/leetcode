int ClimbStairs(int n){
	if (n== 2){
	   return 2;
	} 

	if (n == 1){
	   return 1;
	}
    
    return ClimbStairs(n-1) + ClimbStairs(n-2);
}
