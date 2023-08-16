int maxSubArray(vector<int> s, int start, int end) {  
	if (start == end) {  
		return s.at(0);  
}  

int mid = start + (end-start)/2;  
int leftMaxSum = maxSubArray(s, start, mid);  
int rightMaxSum = maxSubArray(s, mid + 1, end);  
int sum = 0; int leftMidMax = 0;  

for (int i = mid; i >=start; i--) {  
	sum+=s.at(i);  
	if (sum > leftMidMax) { leftMidMax = sum; }  
}  

sum = 0;  
int rightMidMax = 0;  

for (int i = mid + 1; i <=end; i++) { .... }  

int centerSum = leftMidMax + rightMidMax;  

return max(centerSum, max(leftMaxSum, rightMaxSum)); }