#include <iostream>
using namespace std;

class Admission {
public:
	string name, branch;
	int date, month, year;
	double percentile;
	// static int counter;
};

class Student1 : public Admission {
public:
	void Operations() {
		cout<<"\n Enter student's name: ";
		cin.ignore();
	    getline(cin, name);
        cout<<" Enter student's DOB: ";
	    cin>>date>>month>>year;
	    cout<<" Enter your percentile: ";
	    cin>>percentile;

	    if(percentile > 60) {
	    	cout<<"\n You are eligible!";
	    	cout<<"\n Enter your desired branch: ";
	    	cin.ignore();
	    	getline(cin, branch);
	    	// counter++;
	    } else {
	    	cout<<"\n Not eligible!\n";
		}
		
		cout<<"\n STUDENT INFO: ";
		cout<<"\n Students's name: "<<name;
	    cout<<"\n DOB: "<<date<<"/"<<month<<"/"<<year;
	    cout<<"\n Education: 12th Standard";
	    cout<<"\n Desired branch: "<<branch;
	    cout<<"\n -------------------------------";
	    cout<<"\n";
		}
	};

class Diploma : public Admission {
public:
	void Operations() {
		cout<<"\n Enter student's name: ";
		cin.ignore();
	    getline(cin, name);
        cout<<" Enter student's DOB: ";
	    cin>>date>>month>>year;
	    cout<<" Enter your percentile: ";
	    cin>>percentile;

	    if(percentile > 85) {
	    	cout<<"\n You are eligible!";
	    	cout<<"\n Enter your desired branch: ";
	    	cin.ignore();
	    	getline(cin, branch);
	    	// counter++;
	    	
	    } else {
	    	cout<<"\n Not eligible!\n";
		}
		
		cout<<"\n STUDENT INFO: ";
		cout<<"\n Students's name: "<<name;
	    cout<<"\n DOB: "<<date<<"/"<<month<<"/"<<year;
	    cout<<"\n Education: Diploma Student";
	    cout<<"\n Desired branch: "<<branch;
	    cout<<"\n -------------------------------";
	    cout<"\n";
		}
	};
	
class University : public Admission {
public:
	void Operations() {
		cout<<"\n Enter student's name: ";
		cin.ignore();
	    getline(cin, name);
        cout<<" Enter student's DOB: ";
	    cin>>date>>month>>year;
	    cout<<" Enter your percentile: ";
	    cin>>percentile;

	    if(percentile > 85) {
	    	cout<<"\n You are eligible!";
	    	cout<<"\n Enter your desired branch: ";
	    	cin.ignore();
	    	getline(cin, branch);
	    	// counter++;
	    	
	    } else {
	    	cout<<"\n Not eligible!\n";
		}
		
		cout<<"\n STUDENT INFO: ";
		cout<<"\n Students's name: "<<name;
	    cout<<"\n DOB: "<<date<<"/"<<month<<"/"<<year;
	    cout<<"\n Education: University Student";
	    cout<<"\n Desired branch: "<<branch;
	    cout<<"\n -------------------------------";
	    cout<"\n";
		}
	};

int main() {
	int edlevel = 0;
	static int counter = 0;
	    do {
	    cout<<"\n 1: 12th Standard\n 2: Diploma Student\n 3: University Student\n 4: Exit\n";
	    cout<<" Select your education level: ";
	    cin>>edlevel;
		switch(edlevel) {
    	case 1: {
    		Student1 obj; 
    		obj.Operations();
			if (obj.percentile > 60) {
				counter++;
			}
			break;
		}
		case 2: {
    		Diploma obj; 
    		obj.Operations();
			if (obj.percentile > 85) {
				counter++;
			}
			break;
		}
		case 3: {
			University obj; 
    		obj.Operations();
			if (obj.percentile > 85) {
				counter++;
			}
			break;
		}
		case 4: {
			break;
		}
		default: {
			cout<<"Invalid Input!";
			break;
		}
	}
	} while(edlevel != 4);
	cout<<"\n Total admissions today: "<<counter;
	return 0;
}
