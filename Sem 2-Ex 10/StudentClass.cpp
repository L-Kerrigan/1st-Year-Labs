/* Exercise 10, Question 3 - C++
This program is to create a student class that holds data to identify each student.
It will hold their name, address, phone number, field of study, stage and GPA.
It will allow the GPA to be changed and show a warning if the student's GPA falls below 2.*/
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
  //Declaring all variables
  string name;
  string address;
  string number;
  string course;
  int stage;
  float gradePointAvg;

public:
//Declaring all function prototypes
  void setName(string studentName);
  string getName();
  void setAddress(string studentAddress);
  string getAddress();
  void setNumber(string phoneNumber);
  string getNumber();
  void setFieldOfStudy(string fieldOfStudy);
  string getFieldOfStudy();
  void setStage(int courseStage);
  int getStage();
  void setGPA(float courseGPA);
  float getGPA();
  void increaseStage();
  void changeGPA();
};
//The accessor and mutator functions for the name, address, phone number, field of study, stage and GPA of each student
void Student::setName(string studentName){
  name=studentName;
}

string Student::getName(){
  return name;
}

void Student::setAddress(string studentAddress){
  address=studentAddress;
}

string Student::getAddress(){
  return address;
}

void Student::setNumber(string phoneNumber){
  number=phoneNumber;
}

string Student::getNumber(){
  return number;
}

void Student::setFieldOfStudy(string fieldOfStudy){
  course=fieldOfStudy;
}

string Student::getFieldOfStudy(){
  return course;
}

void Student::setStage(int courseStage){
  stage=courseStage;
}

int Student::getStage(){
  return stage;
}

void Student::setGPA(float courseGPA){
  gradePointAvg=courseGPA;
}

float Student::getGPA(){
  return gradePointAvg;
}

void Student::increaseStage(){//Function to increment the stage
  stage++;
}

void Student::changeGPA(){ //Function to increment/decrement the GPA
  cout<<"Please enter the new GPA. "<<endl;
  cin>>gradePointAvg; //Takes in the new GPA
  if(gradePointAvg<2){ //If the GPA is below 2, a warning is given
    cout<<"Warning: This student's GPA is now less than 2."<<endl;
  }
}


int main(){
  Student student_1; //Setting up a student for the student class
  string studentName; //Variables to hold the name, address and phone number of the student
  string studentAddress;
  string phoneNumber;

  cout<<"Please enter the student's name, address and phone number."<< endl;
  getline(cin, studentName); //Reading in student's name
  getline(cin, studentAddress); //Reading in student's address
  getline(cin, phoneNumber); //Reading in student's number

  student_1.setName(studentName); //Calling the functions to put the inputted information into each variable declared in the class
  student_1.setAddress(studentAddress);
  student_1.setNumber(phoneNumber);

  string fieldOfStudy;  //Variables to hold the field of study, stage and GPA of the student
  int courseStage;
  float courseGPA;

  cout<<"Please enter "<< studentName<< "'s field of study, stage number and GPA."<< endl;
  getline(cin, fieldOfStudy); //Reads course name with blanks
  cin>> courseStage; //Reading in stage
  cin>> courseGPA; //Reading in GPA

  if(courseGPA<2){ //If the GPA is below 2, a warning is given
    cout<<"Warning: This student's GPA is less than 2."<<endl;
  }

  student_1.setFieldOfStudy(fieldOfStudy); //Calling the functions to put the inputted information into each variable declared in the class
  student_1.setStage(courseStage);
  student_1.setGPA(courseGPA);

  cout<<endl; //Just to separate everything a bit
  cout<<"The student's name is "<<student_1.getName()<<", their address is "<<student_1.getAddress()<<" and their phone number is "<<student_1.getNumber()<<endl;
  cout<<"They study "<<student_1.getFieldOfStudy()<<" in stage "<<student_1.getStage()<<" with a GPA of "<<student_1.getGPA()<<endl;

  char ans; //Just to hold the user's answers to these questions
  cout<<"Will you increase the student's stage? Type Y or N."<<endl;
  cin>>ans;
  if(ans=='Y'||ans=='y'){ //If the answer is yes, call the required function and print new stage
    student_1.increaseStage();
    cout<<"The student's new stage is "<<student_1.getStage()<<endl;
  }

  cout<<"Will you increase/decrease the student's GPA? Type Y or N."<<endl;
  cin>>ans;
  if(ans=='Y'||ans=='y'){  //If the answer is yes, call the required function and print new GPA
    student_1.changeGPA();
    cout<<"The student's new GPA is "<<student_1.getGPA()<<endl;
  }
}
