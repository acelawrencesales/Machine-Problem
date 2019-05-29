#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void bubbleSort(double arr[], string str[],int n);
void swap1(double *xp, double *yp);

int main()
{
	int array;
	array = 50;
	string str[array];
	int i, j, a, b;
	double x[10], grade[array],sum, sum1, y;
	double quiz1, quiz2, writp, pracp, writf, pracf, totalp, totalf, quiz, group, indiv, major;
	
	//title of the program
	cout << "ADVANCED GRADING SYSTEM" << "\n" "\n";
	
	//student names and scores
	cout << "Enter required information respectively" << "\n";
	cout << "\'Name of Student\'" << "\n" << "\'Individual Reports (1-10)\'" << "\n" << "\'Group Reports (1-10)\'" << "\n" << "\'Quizzes\'" << "\n" << "\'Major Exams\'" << "\n" "\n";
	
	
	//formula
	
		
	for (int i = 0; i < array; i++)
	{
			
		cout << "Enter Name of (" << i + 1 << ") Student \n[SURNAME.FN.SN.MI] : "; cin >> str[i];
			
		cout << "Individual Reports ( / 100): " << "\n";
		sum = 0;
		for (int a = 0; a < 10; a++)
			{
			cout << a + 1 << ": ";
			cin >> x[a];
			if (x[a] >= 101 || x[a] < 0)
			{
				cout << "You must enter a value from 0 - 100! \n";
				cout << a + 1 << ": ";
				cin >> x[a];
			}
			sum += x[a];
			}
	
		indiv = (sum / 10) * .15;
		cout << "Total (15%): " << indiv << "\n" "\n";
	
		cout << "Group Reports ( / 100): " << "\n";
		sum1 = 0;
		for (int b = 0; b < 10; b++)
			{
			cout << b + 1 << ": ";
			cin >> x[b];
			if (x[b] >= 101 || x[b] < 0)
			{
				cout << "You must enter a value from 0 - 100! \n";
				cout << b + 1 << ": ";
				cin >> x[b];
			}
			sum1 += x[b];
			}
	
		group = (sum1 / 10) * .25;
		cout << "Total (25%): " << group << "\n" "\n";
		
		cout << "Quizzes ( / 100): " << "\n";
		cout << "1: "; cin >> quiz1;
		if (quiz1 >= 101 || quiz1 < 0)
			{
				cout << "You must enter a value from 0 - 100! \n";
				cout << "1: "; cin >> quiz1;
			}
		cout << "2: "; cin >> quiz2;
		if (quiz2 >= 101 || quiz2 < 0)
			{
				cout << "You must enter a value from 0 - 100! \n";
				cout << "2: "; cin >> quiz2;
			}
		quiz = (quiz1 * .10) + (quiz2 * .10);
		cout << "Total (20%): " << quiz << "\n" "\n";
		
		cout << "Major Examinations: " << "\n";
		cout << "Written (Prelims: / 30): "; cin >> writp;
		if (writp >= 31 || writp < 0)
			{
				cout << "You must enter a value from 0 - 30! \n";
				cout << "Written (Prelims: / 30): "; cin >> writp;
			}
		cout << "Practicals (Prelims: / 70): "; cin >> pracp;
		if (pracp >= 71 || pracp < 0)
			{
				cout << "You must enter a value from 0 - 70! \n";
				cout << "Practicals (Prelims: / 70): "; cin >> pracp;
			}
		totalp = writp + pracp;
		cout << "Written (Finals: / 30): "; cin >> writf;
		if (writf >= 31 || writf < 0)
			{
				cout << "You must enter a value from 0 - 30! \n";
				cout << "Written (Finals: / 30): "; cin >> writf;
			}
		cout << "Practicals (Finals: / 70): "; cin >> pracf;
		if (pracf >= 71 || pracf < 0)
			{
				cout << "You must enter a value from 0 - 70! \n";
				cout << "Practicals (Finals: / 70): "; cin >> pracf;
			}
			
		totalf = writf + pracf;
		major = (totalp * .20) + (totalf * .20);
		cout << "Total (40%): " << major << "\n" "\n";
	
		grade[i] = indiv + group + quiz + major;
		
		cout << "Final Raw Grade of " << str[i] << " : " << grade[i] << "\n \n";
		
		//transmutation
		if (grade[i] <= 100 && grade[i] >= 95.57)
		cout << "Transmuted Grade : 1.00 [PASSED]";
		else if (grade[i] <= 95.56 && grade[i] >= 91.12)
		cout << "Transmuted Grade : 1.25 [PASSED]";
		else if (grade[i] <= 91.11 && grade[i] >= 86.68)
		cout << "Transmuted Grade : 1.50 [PASSED]";
		else if (grade[i] <= 86.67 && grade[i] >= 82.23)
		cout << "Transmuted Grade : 1.75 [PASSED]";
		else if (grade[i] <= 82.22 && grade[i] >= 77.79)
		cout << "Transmuted Grade : 2.00 [PASSED]";
		else if (grade[i] <= 77.78 && grade[i] >= 73.34)
		cout << "Transmuted Grade : 2.25 [PASSED]";
		else if (grade[i] <= 73.33 && grade[i] >= 68.90)
		cout << "Transmuted Grade : 2.50 [PASSED]";
		else if (grade[i] <= 68.89 && grade[i] >= 64.45)
		cout << "Transmuted Grade : 2.75 [PASSED]";
		else if (grade[i] <= 64.44 && grade[i] >= 60.00)
		cout << "Transmuted Grade : 3.00 [PASSED]";
		else
		cout << "Transmuted Grade : 5.00 [FAILED]";
		
		cout << "\n \n";
		
	}
	
	cout << "--------------------------------" << endl;
	int n = sizeof(grade)/sizeof(grade[0]); 
	bubbleSort(grade, str, n);
	
	cout << "TOP 10: " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << i + 1 << ". " << str[i] << "\t with the final raw grade of : " << grade[i] << endl;
	}
}

	void bubbleSort(double arr[], string name[],int n) 
	{ 
	   int i, j; 
	   for (i = 0; i < n-1; i++)
	   {
	       for (j = 0; j < n-i-1; j++)
		   {
			   
	           if (arr[j] < arr[j+1])
			   {
			   		swap1(&arr[j], &arr[j+1]);
			   		swap(name[j], name[j+1]);
				}
			}
		}         
	} 
	
	void swap1(double *xp, double *yp) 
	{ 
	    double temp = *xp; 
	    *xp = *yp; 
	    *yp = temp; 
	}


