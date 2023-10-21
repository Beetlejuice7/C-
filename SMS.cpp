#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


void student();
void account();
void result();
void addstd();

//ofstream outfile;
//ifstream infile;


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

    cout <<"Select to operate :-" << endl;
    cout <<"1. Student\n";
    cout <<"2. Account\n";
    cout <<"3. Result\n";
    cout <<"4. Exit\n";
    cin >> choice;

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

void student()
{
    system("clear");
    int choice;
    cout <<"1. Add student\n";
    cout <<"2. Edit student\n";
    cout <<"3. Delete student\n";
    cin >> choice;

    switch (choice)
    {

    case 1 :
        addstd();
        break;
    
    case 2 :
        
        break;

    case 3 :
        cout <<"hello";
        break;

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

void addstd()
{
    char x;
    do{
    system("clear");
    fstream file;
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
    }while(x=='y');
    student();
}