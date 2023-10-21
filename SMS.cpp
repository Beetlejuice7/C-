#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

fstream file;

//1
void student();
void account();
void result();

//2
void addstd();
void show();

struct student
{
    char name[20];
    int age;
    char faculty[15];
}std1;

int main()
{
    /*string hero;
    cout <<"Enter anything you want : " << endl;
    getline(cin, hero);
    ofstream myfile("abc.txt");
    myfile << hero;
    cout << hero;
    myfile.close();*/
    
    system("clear");
    int choice;
    cout << "-----------STUDENT MANAGEMENT SYSTEM--------------" << endl << endl;
    cout <<"Select to operate :-" << endl;
    cout <<"1. Student\n";
    cout <<"2. Account\n";
    cout <<"3. Result\n";
    cout <<"4. Exit\n";
    cin >> choice;

    //SWITCH CASE 2
    switch (choice)
    {
    case 1 :
        student();
        break;
    
    case 2 :
        account();
        break;

    case 3 :
        result();
        break;

    case 4 :
        exit(0);    

    default:
        cout <<"Invalid Selection\n";
        break;
    }


    return 0;
}

//SWITCH CASE 2
void student()
{
    system("clear");
    cout << "-----------STUDENT MANAGEMENT SYSTEM--------------" << endl << endl;
    int choice;
    cout <<"1. Add student\n";
    cout <<"2. show student\n";
    cout <<"3. Edit student\n";
    cout <<"4. Back to main menu\n";
    cin >> choice;

    switch (choice)
    {

    case 1 :
        addstd();
        break;
    
    case 2 :
        show();
        break;

    case 3 :
        cout <<"hello";
        break;

    case 4 :
        main();
    default:
        break;
    }
}
void account()
{
    cout <<"hello";
}
void result()
{
    cout <<"hello";
}

//SC2
void addstd()
{
    char x;
    do{
    system("clear");
    cout << "-----------STUDENT MANAGEMENT SYSTEM--------------" << endl << endl;
    file.open("std.txt", ios :: app | ios :: out);
    cout << "Enter the name of the student : ";
    cin >> std1.name;
    cout << "Enter the age of student : ";
    cin >> std1.age;
    cout << "Enter faculty : ";
    cin >> std1.faculty;
    file << " " << std1.name << " " << std1.age << " " << std1.faculty << "\n";
    file.close();
    cout << "Add another student record?(y/n) : ";
    cin >> x;
    }while(x=='y' || x=='Y');
    student();
}
void show()
{
    system("clear");
    char back;
    int total = 1;
    file.open("std.txt", ios :: in);
    file >> std1.name >> std1.age >> std1.faculty;
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << "|   SN   |\t\tName\t\t|\tAge\t|\t\tFaculty\t\t|\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    while(!file.eof())
    {

        cout << "| "<< setw(4) << total<< "   | " << setw(29) << std1.name << "| " << setw(14) << std1.age << "| " << setw(30) << std1.faculty << "| ";
        cout << endl;
        cout << "-----------------------------------------------------------------------------------------\n";
        /*cout << "Student number "<< total << endl;
        cout << "Student name : " << std1.name << endl;
        cout << "Student age : " << std1.age << endl;
        cout << "Student faculty : " << std1.faculty << endl;
        cout << "\n\n";*/
        file >> std1.name >> std1.age >> std1.faculty;
        total += 1;
    }
    file.close();
    cout << "Press enter to go back to menu..." << endl;
    cin.ignore();
    cin.get();
    return student();
}