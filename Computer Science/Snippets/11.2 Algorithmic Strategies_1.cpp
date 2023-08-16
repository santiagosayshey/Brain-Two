for(size_t i = 0; i < s.size(); i++) {  
	for (size_t j = i; j < s.size(); i++) {  
		int sum = 0;  
		for (size_t k = i; k <= j; k++) {  
			sum += s.at(k);  
		}  
		if (sum > max) {  
			max = sum;  
		}  
	}  
}  
return max;