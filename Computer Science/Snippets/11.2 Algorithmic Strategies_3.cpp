int maxSubArray(vector<int> s) { 
	int sum = 0, maxSum = 0;  
	
	for (int i = 0; i < s.size(); i++) {  
		sum += s.at(i);  
		
		if (sum > maxSum) {  
			maxSum = sum;  
		}  
		else if (sum < 0) { sum = 0; }  
	}  
	
return maxSum;  
}