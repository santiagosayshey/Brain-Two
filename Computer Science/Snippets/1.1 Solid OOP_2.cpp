/* Example of **violation** of Single Responsibility Principle */  
class Student {  
	std::string name;  
	std::string ID;  
	int unitsTaken;  
	// what happens if we decide that we want to print  
	// fractional grades - ie change grades to floats?  
	vector<int> grades;  
public:  
	std::string getName() {...}  
	
	std::string getID() {...}  
	
	void printGradeReport() {  
		for (int i = 0; i < grades.size(); i++) {  
			std::cout << grades.at(i) << endl;  
		}  
	}  
	
	int calculateGPA() {  
		gpa = 0;  
		for (int i = 0; i < grades.size(); i++) {  
			int grade = grades.at(i);  
			if (grade < 50 && grade > 0)  
				gpa = gpa + 1.5;  
			else if (grade < 65)  
				gpa = gpa + 4;  
			else if (grade < 75)  
				gpa = gpa + 5;  
			else if (grade < 85)  
				gpa = gpa + 6;  
			else  
				gpa = gpa + 7;  
		}  
		return gpa/unitsTaken;  
	}  
}