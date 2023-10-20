#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
void student();
void account();
void result();
using namespace std;
ofstream outfile;
ifstream infile;
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

    default:
        cout <<"Invalid Selection\n";
        break;
    }


    return 0;
}

void student()
{
    
    int choice;
    cout <<"1. Add student\n";
    cout <<"2. Edit student\n";
    cout <<"3. Delete student\n";
    cin >> choice;

    switch (choice)
    {

    case 1 :
        cout <<"Enter the name of the student : ";
        outfile.open("std.txt");
        cin >> std1.name;
        outfile << std1.name;
        cout <<"Enter the age of student : ";
        cin >> std1.age;
        outfile << std1.age;
        break;
    
    case 2 :
        cout <<"hello";
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
