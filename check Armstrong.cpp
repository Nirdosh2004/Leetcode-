bool checkArmstrong(int n){
	//Write your code here
	int duplicate = n;
	int ans = 0;
	while(n != 0){
		int remainder = n % 10;
		
		ans = ans + (remainder*remainder*remainder);
		n /= 10;
	}      
	if(ans != duplicate){
		return false;
	}
	return true;
}
