#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double N){
    char grade;

    cin >>N;
    
    if (N>90){
        grade='A';
    }
    else if (75<N&&N<=90){
        grade='B';
    
    }
    else if (60<N&&N<=75){
        grade='C';
       
    }
    else if (45<N&&N<=60){
        grade='D';
    }
    else if (N<=45){
        grade='F';
    }
     return grade;
}


int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline (cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}