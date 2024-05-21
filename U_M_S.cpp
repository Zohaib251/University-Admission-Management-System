#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class University
{
public:
	virtual void setdata() = 0;
	virtual void generate_detail_slip_of_UGratuate() = 0;
	virtual void generate_detail_slip_of_Gratuate() = 0;
};

class new_Admission : virtual public University
{
protected:
	string name, mother_name, father_name, previous_university, email, cnic, address, dob,
		religion, gender, father_occuption, G_DEPARTMENT, UG_Department, phone_no, father_phone;
	int age, matric_result, matric_end_year, intermidiate_result, indermidiate_end_year;
	float cgpa, GRADES, grade, obt_marks = 0, total_marks = 1100;

public:
	int x, y;
	new_Admission() {}
	new_Admission(string Name, string Address, string Phone_no, string Email, int Age,
				  string Cnic, string DOB, string Religion, string Gender, string Mother_name, string Father_name, string Father_phone, string Father_occuption, int Matric_result,
				  int Matric_end_year, int Intermidiate_result, int Indermidiate_end_year, float CGPA, string Previous_University, string ug_Department, string g_department)
		: father_name(Father_name), father_phone(Father_phone), father_occuption(Father_occuption), matric_result(Matric_result),
		  matric_end_year(Matric_end_year), intermidiate_result(Intermidiate_result), indermidiate_end_year(Indermidiate_end_year),
		  mother_name(Mother_name), cgpa(CGPA), previous_university(Previous_University), UG_Department(ug_Department), G_DEPARTMENT(g_department) {}

	void UGrades()
	{
		float OBT_MARKS;
		cout << "\nEnter your Matric Result:" << endl;
		cin >> obt_marks;
		grade = obt_marks / total_marks * 100;
		if (grade >= 50)
		{
			cout << "\nEnter your Matric End year:" << endl;
			cin >> matric_end_year;
			cout << "\nEnter your Intermediate Result:" << endl;
			cin >> OBT_MARKS;
			GRADES = OBT_MARKS / total_marks * 100;
			if (GRADES >= 50)
			{
				cout << "\nEnter your Intermediate End year:" << endl;
				cin >> indermidiate_end_year;
				cout << "\nEnter the Department in which you want to enroll:" << endl;
				cin >> UG_Department;
				cout << "\n\nCongratulation your Admission in Undergraduate has been completed." << endl;
				cout << endl;
			}
			else
			{
				cout << "\nYou are not eligible." << endl;
			}
		}
		else
		{
			cout << "\nYou are not eligible." << endl;
		}
	}

	void personalinfo()
	{
		cout << "\nEnter your Name:" << endl;
		getline(cin, name);
		cout << "\nEnter your Phone: (+92000-0000000)" << endl;
		getline(cin, phone_no);
		cout << "\nEnter your Age:(00)" << endl;
		cin >> age;
		cin.ignore(); // Ignore the newline character from previous input
		cout << "\nEnter your Address:(City,District)" << endl;
		getline(cin, address);
		cout << "\nEnter your E_mail:" << endl;
		getline(cin, email);
		cout << "\nEnter your Cnic:(00000-0000000-0)" << endl;
		getline(cin, cnic);
		cout << "\nEnter your Date_of_birth:(00/00/0000)" << endl;
		getline(cin, dob);
		cout << "\nEnter your Religion:" << endl;
		getline(cin, religion);
		cout << "\nEnter your Gender:(Male/Female)" << endl;
		getline(cin, gender);
		cout << "\nEnter your Mother_Name:" << endl;
		getline(cin, mother_name);
		cout << "\nEnter your Father_Name:" << endl;
		getline(cin, father_name);
		cout << "\nEnter your Father_Phone_No:(+92000-0000000)" << endl;
		getline(cin, father_phone);
		// cin.ignore();
		cout << "\nEnter your Father_Occupation:" << endl;
		getline(cin, father_occuption);
	}

	void setdata() override
	{
		do
		{
			cout << "\nPress 1 to get Admission in Undergraduate: " << endl;
			cout << "\nPress 2 to get Admission in Graduate: " << endl;
			cin >> x;
			cin.ignore(); // Ignore the newline character from previous input
			if (x == 1)
			{
				cout << "\t\t\tYour Personal Info:" << endl;
				personalinfo();
				cout << "\t\t\tYour Academic Info:" << endl;
				UGrades();
				generate_detail_slip_of_UGratuate();

				ofstream Ugratuate("UGratuate.txt");
				if (Ugratuate.is_open())
				{
					Ugratuate << name << endl;
					Ugratuate << phone_no << endl;
					Ugratuate << age << endl;
					Ugratuate << address << endl;
					Ugratuate << email << endl;
					Ugratuate << cnic << endl;
					Ugratuate << dob << endl;
					Ugratuate << religion << endl;
					Ugratuate << gender << endl;
					Ugratuate << mother_name << endl;
					Ugratuate << father_name << endl;
					Ugratuate << father_phone << endl;
					Ugratuate << father_occuption << endl;
					Ugratuate << grade << endl;
					Ugratuate << matric_end_year << endl;
					Ugratuate << GRADES << endl;
					Ugratuate << indermidiate_end_year << endl;
					Ugratuate << UG_Department << endl;
					Ugratuate.close();
					cout << "\nData has been saved." << endl;
				}
				else
				{
					cout << "\nUnable to save data." << endl;
				}
			}
			else if (x == 2)
			{
				cout << "\t\t\tYour Personal Info:" << endl;
				personalinfo();
				cout << "\t\t\tYour Academic Info:" << endl;
				cout << "\nEnter your Undergraduate CGPA: " << endl;
				cin >> cgpa;
				cin.ignore(); // Ignore the newline character from previous input
				cout << "\nEnter your Previous University Name: " << endl;
				getline(cin, previous_university);
				cout << "\nEnter the Department in which you want to enroll:" << endl;
				cin >> G_DEPARTMENT;
				cout << "\n\nCongratulation your Admission in Graduate has been completed." << endl;
				generate_detail_slip_of_Gratuate();

				ofstream gratuate("Gratuate.txt");
				if (gratuate.is_open())
				{
					gratuate << name << endl;
					gratuate << phone_no << endl;
					gratuate << age << endl;
					gratuate << address << endl;
					gratuate << email << endl;
					gratuate << cnic << endl;
					gratuate << dob << endl;
					gratuate << religion << endl;
					gratuate << gender << endl;
					gratuate << mother_name << endl;
					gratuate << father_name << endl;
					gratuate << father_phone << endl;
					gratuate << father_occuption << endl;
					gratuate << cgpa << endl;
					gratuate << previous_university << endl;
					gratuate << G_DEPARTMENT << endl;
					gratuate.close();
					cout << "\nData has been saved." << endl;
				}
				else
				{
					cout << "\nUnable to save data." << endl;
				}
			}
			cout << "\nPress 1 to continue." << endl;
			cout << "\nPress 2 to exit." << endl;
			cin >> y;
			cin.ignore();
		} while (y == 1);
	}
	void generate_detail_slip_of_UGratuate() override
	{
	}
	void generate_detail_slip_of_Gratuate() override
	{
	}
};

class FacultyStaff
{
protected:
	string name = "Haseeb";
	string address = "Islamabad";
	string qualification = "PHD in BIO";
	string email = "haseeb@gmail.com";

public:
	void displayData()
	{

		cout << "\n\t\tThe Faculty staff data is:" << endl;
		cout << "\nFaculty Staff Name: " << name << endl;
		cout << "\nAddress: " << address << endl;
		cout << "\nQualification: " << qualification << endl;
		cout << "\nEmail: " << email << endl;
		cout << endl;
	}
};

class HOD
{
protected:
	string name = "Waleed";
	string address = "Rawalpindi";
	string qualification = "PHD in isl";
	string email = "waleed@gmail.com";

public:
	void displayData()
	{
		cout << "\n\t\tThe HOD data is" << endl;
		cout << "\nHod Name: " << name << endl;
		cout << "\nAddress: " << address << endl;
		cout << "\nQualification: " << qualification << endl;
		cout << "\nEmail: " << email << endl;
		cout << endl;
	}
};

class ViceChancellor
{
protected:
	string name = "Zohaib";
	string address = "Islamabad";
	string qualification = "PHD in Math";
	string email = "mianzohaibali123@gmail.com";

public:
	void displayData()
	{
		cout << "\n\t\tThe VC data is" << endl;
		cout << "\nVice Chancellor Name: " << name << endl;
		cout << "\nAddress: " << address << endl;
		cout << "\nQualification: " << qualification << endl;
		cout << "\nEmail: " << email << endl;
		cout << endl;
	}
};

class NewStudent
{
public:
	void displayData()
	{
		int h, j;
		do
		{

			cout << "\nPress 1 if you want to read the data of new addmission of UGratuate Student." << endl;
			cout << "\nPress 2 if you want to read the data of new addmission of Gratuate Student." << endl;
			cin >> h;
			if (h == 1)
			{
				ifstream undergraduate("UGratuate.txt");
				if (undergraduate.is_open())
				{
					string line;
					while (getline(undergraduate, line))
					{
						cout << line << endl;
					}
					undergraduate.close();
				}
				else
				{
					cout << "\nNo  New undergraduate student records found." << endl;
				}
			}
			else if (h == 2)
			{

				ifstream graduate("Gratuate.txt");
				if (graduate.is_open())
				{
					string line;
					while (getline(graduate, line))
					{
						cout << line << endl;
					}
					graduate.close();
				}
				else
				{
					cout << "\nNo  New graduate student records found." << endl;
				}
			}
			else
			{
				cout << "\nInvalid Input:" << endl;
			}
			cout << "\nPress 0 if you want to exit data of student:" << endl;
			cin >> j;
		} while (j != 0);
	}
};

int main()
{
	int a, b, c, d;
	cout << "\t\tWelcome to cust univeristy:" << endl;
	do
	{
		cout << "\nPress 1 for new Admission:" << endl;
		cout << "\nPress 2 to see University data:" << endl;
		cout << "\nPress 3 to exit:" << endl;
		cin >> a;
		if (a == 1)
		{
			new_Admission new_student;
			new_student.setdata();
		}
		else if (a == 2)
		{
			do
			{
				cout << "\nPress 1 to see Vice chancellor data:" << endl;
				cout << "\nPress 2 to see Hod data:" << endl;
				cout << "\nPress 3 to see newstudent data:" << endl;
				cout << "\nPress 4 to faculty data:" << endl;
				cout << "\nPress 5 to exit:" << endl;
				cin >> c;
				if (c == 1)
				{
					ViceChancellor vc;
					vc.displayData();
				}
				else if (c == 2)
				{
					HOD hod;
					hod.displayData();
				}
				else if (c == 3)
				{
					NewStudent newStudent;
					newStudent.displayData();
				}
				else if (c == 4)
				{
					FacultyStaff fc;
					fc.displayData();
				}
				else if (c == 5)
				{
					cout << "\nThanks for visting:" << endl;
				}
				else
				{
					cout << "\nInvalid input:" << endl;
				}
				cout << "\nPress 1 if you want to redo the steps." << endl;
				cin >> d;
			} while (d == 1);
		}
		else if (a == 3)
		{
			cout << "\nThanks for visting:" << endl;
		}
		else
		{
			cout << "\nInvalid input." << endl;
		}
		cout << "\n\nPress 1 if you want to end the program." << endl;
		cin >> b;
	} while (b != 1);
	cout << "\n\nYou are out!" << endl;
	return 0;
}