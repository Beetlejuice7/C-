#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>
#include<stdbool.h>
using namespace std;

fstream file, file1;

//1
void student();
void account();
void result();

//2
void addstd();
void showstd();
void editstd();

struct student
{
    char name[20];
    int age, id;
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
        showstd();
        break;

    case 3 :
        editstd();
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
    cout << "Enter id of the student : ";
    cin >> std1.id;
    cout << "Enter the name of the student : ";
    cin >> std1.name;
    cout << "Enter the age of student : ";
    cin >> std1.age;
    cout << "Enter faculty : ";
    cin >> std1.faculty;
    file << " " << std1.id << " " << std1.name<< " " << std1.age << " " << std1.faculty << "\n";
    file.close();
    cout << "Add another student record?(y/n) : ";
    cin >> x;
    }while(x=='y' || x=='Y');
    student();
}
void showstd()
{
    system("clear");
    char back;
    int total = 1;
    file.open("std.txt", ios :: in);
    file >> std1.id >> std1.name >> std1.age >> std1.faculty;
    cout << "---------------------------------------------------------------------------------------------------------\n";
    cout << "|   SN   |\t\tName\t\t|\tAge\t|\t\tFaculty\t\t|\tID\t|\n";
    cout << "---------------------------------------------------------------------------------------------------------\n";
    while(!file.eof())
    {

        cout << "| "<< setw(4) << total<< "   | " << setw(29) << std1.name << "| " << setw(14) << std1.age << "| " << setw(29) << std1.faculty << " | " << setw(13) << std1.id << " |";
        cout << endl;
        cout << "---------------------------------------------------------------------------------------------------------\n";
        file >> std1.id >> std1.name >> std1.age >> std1.faculty;
        total += 1;
    }
    file.close();
    cout << "Press enter to go back to menu..." << endl;
    cin.ignore();
    cin.get();
    return student();
}
void editstd()
{
    system("clear");
    cout << "-----------STUDENT MANAGEMENT SYSTEM--------------" << endl << endl;
    int id;
    bool found = false;
    cout << "Enter ID of student to modify: ";
    cin >> id;

    file.open("std.txt", ios::in);
    file1.open("temp.txt", ios::out);

    while (file >> std1.id >> std1.name >> std1.age >> std1.faculty)
    {
        if (id == std1.id)
        {
            found = true;
            // Modify the student information here if needed
            // For example, you can allow the user to edit name, age, or faculty
            // Then write the modified information to the temporary file
            // For now, let's just display the existing information for editing
            cout << "Found student with ID: " << std1.id << endl;
            cout << "Name: " << std1.name << endl;
            cout << "Age: " << std1.age << endl;
            cout << "Faculty: " << std1.faculty << endl;

            // Ask user for modified information
            cout << "Enter modified name: ";
            cin >> std1.name;
            cout << "Enter modified age: ";
            cin >> std1.age;
            cout << "Enter modified faculty: ";
            cin >> std1.faculty;

            // Write modified information to temporary file
            file1 << std1.id << " " << std1.name << " " << std1.age << " " << std1.faculty << endl;
        }
        else
        {
            // If the ID does not match, write the information as it is to the temporary file
            file1 << std1.id << " " << std1.name << " " << std1.age << " " << std1.faculty << endl;
        }
    }

    file.close();
    file1.close();

    // Remove the original file and rename the temporary file
    remove("std.txt");
    rename("temp.txt", "std.txt");

    if (!found)
    {
        cout << "No student found with ID: " << id << endl;
    }
    else
    {
        cout << "Student information modified successfully!" << endl;
    }

    cout << "Press enter to go back to menu..." << endl;
    cin.ignore();
    cin.get();
    return student();
}
