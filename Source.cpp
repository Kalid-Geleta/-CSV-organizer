#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;


int main() {
	int info, info_1, info_1_2, info_2, info_1_3, info_1_3_1, info_1_3_2, admission;
	string name, starter;


	srand(time(0));


	int t = 0;

	int g = 30;
	int l = 58;
	//reading and opening  the csv files in the folder where the source file is located 
	ifstream icsa;
	icsa.open("inputICSA.csv");
	ifstream icsb;
	icsb.open("inputICSB.csv");
	ifstream icsc;
	icsc.open("inputICSC.csv");
	//outputing two csv files namely icsa and icsb

	ofstream ICSA;
	ICSA.open("ICSA.csv");
	ofstream  ICSB;
	ICSB.open("ICSB.csv");

	//declaring  the  arrays that will contain all our data from each colomn recived from the csv files

	string id[113];
	string firstname[113];
	string lastname[113];
	string gen[113];

	//reading the file using .good() funuction and storing its value  to our pararell arrays and closing it when there is notting to read . this idendentifies every person by its index number as result saving every reading in large array which is divided in to field
// such as id[] stores the id numbers,firstname[] stores the first name ,lastname[] stores the last name ,gen[] stores the gender values.
	
	
	while (icsa.good()) {



		getline(icsa, id[t], ',');
		getline(icsa, firstname[t], ',');
		getline(icsa, lastname[t], ',');
		getline(icsa, gen[t], '\n');


		t++;
	}

	icsa.close();
	while (icsb.good()) {



		getline(icsb, id[g], ',');
		getline(icsb, firstname[g], ',');
		getline(icsb, lastname[g], ',');
		getline(icsb, gen[g], '\n');
		g++;



	}

	icsb.close();
	while (icsc.good() && l < 113) {



		getline(icsc, id[l], ',');
		getline(icsc, firstname[l], ',');
		getline(icsc, lastname[l], ',');
		getline(icsc, gen[l], '\n');



		l++;


	}

	icsc.close();
	int i; int mc = 0;
	int fc = 0;
	int maleindex[71];
	int femaleindex[42];
	int aindex[57];
	int bindex[56];
	int j = 0;
	int k = 0;
	int s = 0;
	int h;
	int e = 21;
	int q = 36;
	int r;
	// /finding the index where the males and female occur in the newly created large  parrallel array. using a for loop to identify if one is male or not then storing in its respective index containing array for example 
	//if male occures in the gen[] array it stores its index in maleindex[] array else if  female occures in the gen[] array it stores its index in femaleindex[] array .

	for (int i = 0; i < 113; i++)
	{

		if (gen[i] == "M") {
			maleindex[mc] = i;
			mc++;
		}
	}
	for (int i = 0; i < 113; i++)
	{
		if (gen[i] == "F" && fc < 42) {
			femaleindex[fc] = i;
			fc++;
		}
	}
	/*after the separation of maleand female indexes from the large parallel arrayand storing them in maleindex[] and femaleindex[] next  we create  indexs called aindex[] and bindex[] .
	aindex is the first 36 elements of maleindex[] and first 21 elements of femaleindex[] mixed togther to give what we know aindex[] 
	and bindex are index numbers from maleindex ranging from index number 37 upto 71 index number of the maleindex array 
	mixed with index numbers of femaleindex[] array with index numbers starting from 22 upto 42*/
	for (int k = 0; k < 57; k++)
	{
		if (k <= 35 && j < 36) {
			aindex[k] = maleindex[j];
			j++;
		}
		if (k >= 36 && s < 21)
		{
			aindex[k] = femaleindex[s];
			s++;
		}
	}
	for (int h = 0; h < 56; h++)
	{
		if (h < 35 && q < 71) {
			bindex[h] = maleindex[q];
			q++;
		}
		if (h >= 35 && e < 42)
		{
			bindex[h] = femaleindex[e];
			e++;
		}

	}
	cout << "\t-WELCOME TO STRATHMORE SHUFFLING  SYSTEM-\n";
	cout << " \n";
	cout << "ENTER YOUR UNIVERSITY ID NUMBER FOR AUTHENTICATION\n ";
	cout << "ENTER:\t";
	cin >> admission;

	switch (admission) {
	case 146320:
		cout << "\t-WELCOME KALID-\n";
		name = "KALID";

		break;
	case 145354:
		cout << "\t-WELCOME EDMOND-\n";

		name = "EDMOND";
		break;
	case 145802:
		cout << "\t-WELCOME VENOLIAH\n";

		name = "VENOLIAH";

		break;

	case 138348:
		cout << "\t-WELCOME MARK-\n";

		name = "MARK";
		break;




	case 144235:
		cout << "\t-WELCOME VINCENT-\n";
		name = "VINCENT";

		break;

	default:
		cout << "FAILED TO AUTHOTHENTICATE\n";
		cout << "WRONG UNVIERSITY ID NUMBER\n ";
	}

	
	cout << "                    \n";
	cout << "\t-HOW CAN I HELP YOU " << name << "-" << endl;

	cout << "1.INFORMATION \n";
	cout << "2.SHUFFLING \n";
	cout << "ENTER:\t";
	cin >> info;
	switch (info) {

	case 1:
		cout << " \t-INFORMATION OPTIONS-\n";
		cout << "1. PROGRAM INFO\n";
		cout << "2.GROUP MEMBERS INFO\n";
		cout << "3.STATISTICS\n";
		cout << "ENTER:\t";
		cin >> info_1;
		switch (info_1) {
		case 1:
			cout << "What is  a program that uses perfect shuffle algorithm ?\n ";
			cout << " This is a program that does not follow a predefined order of events.\n";
			cout << "that allow you to maintain the same memory of the shuffled lists without  different lists all the time.\n";
			cout << "                                            \n";

			break;
		case 2:
			cout << "\t-GROUP MEMBERS INFO-\n";
			cout << "1.NAMES\n ";
			cout << "2.ADMINISTION NUMBERS\n";
			cout << "ENTER:\t";
			cin >> info_1_2;
			switch (info_1_2) {
			case 1:
				cout << "\t-NAMES-\n";
				cout << "DESSALEGN KALID GELETA\n";
				cout << "NYAMOSI EDMOND OMWEGA\n";
				cout << "KENNEDY, ANGEL VENOLIAH\n";
				cout << "MUROKI MARK GICHUHI\n";
				cout << "MUTISYA, VINCENT MUIA\n";
				break;

			case 2:
				cout << "\t-ADMINISTION NUMBERS-\n";
				cout << "146320\n";
				cout << "145354\n";
				cout << "145802\n";
				cout << "138348\n";
				cout << "144235\n";


				break;
			}
			break;
		case 3:
			cout << "\t-STATISTICS-\n";
			cout << "1.ICSA\n";
			cout << "2.ICSB\n";
			cout << "ENTER:\t";
			cin >> info_1_3;
			switch (info_1_3) {
			case 1:
				cout << "ICSA\n";
				cout << "1.NUMBER OF FEMALES STUDENTS \n";
				cout << "2.NUMBER OF MALES STUDENTS\n";
				cout << " 3.OVERALL INFORMATION ABOUT THE GROUP\n";
				cin >> info_1_3_1;
				switch (info_1_3_1) {
				case 1:
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 21\n";
					break;

				case 2:
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 36\n";


					break;
				case 3:

					cout << "THE NUMBER OF STUDENTS IN ICS A IS  57\n";
					cout << "THE NUMBER OF MALE STUDENTS IN ICSA IS 36\n";
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 21\n";
					break;
				}
				break;

			case 2:
				cout << "ICSB\n";
				cout << "1.NUMBER OF FEMALE STUDENTS \n";
				cout << "2.NUMBER OF MALE STUDENTS\n";
				cout << " 3.OVERALL INFORMATION ABOUT THE GROUP\n";
				cout << "ENTER:\t";
				cin >> info_1_3_2;
				switch (info_1_3_2) {
				case 1:
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 21\n";

				case 2:
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 35\n";


					break;
				case 3:

					cout << "THE NUMBER OF STUDENTS IN ICS A IS  56\n";
					cout << "THE NUMBER OF MALE STUDENTS IN ICSA IS 35\n";
					cout << "THE NUMBER OF FEMALE STUDENTS IN ICSA IS 21\n";
				}

				break;
			}

			break;

		}
		break;
	case 2:
		cout << "SHUFFLING OPTIONS\n";
		cout << "1.SHUFFLE \n";
		cout << "2.DONT SHUFFLE \n";
		cout << "ENTER:\t";
		cin >> info_2;
		switch (info_2) {
		case 1:
			/*this for loop shuffles the index numbers in the two arrays namely array aindex[] and bindex[]
			by  by picking random index number and index value and assgining its value to a index position of the array value  and switching the two elements of their position   */
			for (int r = 0; r < 56; r++)
			{
				int index1 = rand() % 56;
				int temp;
				temp = bindex[r];
				bindex[r] = bindex[index1];
				bindex[index1] = temp;
			}
			for (int u = 0; u < 57; u++)
			{
				int index2 = rand() % 57;
				int temp1;
				temp1 = aindex[u];
				aindex[u] = aindex[index2];
				aindex[index2] = temp1;
			}
			cout << "SHUFFLEING......";
			break;

		case 2:

			cout << "OKAY I WILL NOT SHUFFLE RELAX OMG";
			break;

		}
		break;

	}

	/*then writing the the shuffled aindeex[] and bindex into csv files ICSA and ICS B respectivly*/

		for (int A = 0; A < 57; A++) {
			ICSA << id[aindex[A]] << ',' << firstname[aindex[A]] << ',' << lastname[aindex[A]] << ',' << gen[aindex[A]] << '\n';
		}
		for (int B = 0; B < 56; B++) {
			ICSB << id[bindex[B]] << ',' << firstname[bindex[B]] << ',' << lastname[bindex[B]] << ',' << gen[bindex[B]] << '\n';
		}

	
	
	
	return 0;

}