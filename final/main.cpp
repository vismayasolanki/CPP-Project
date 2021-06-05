#include "Task4.h"
#include<iostream>
#include<sstream>
using namespace std;

int main(int argc, char** argv)
{
    // We have to use command line arguments (CLI) in the format ./a.out <space> filename.ext <space> task number.
    // argv[0] is ./a.out; argv[1] is filename.ext; argv[2] is the task number
    // Based on argv[2], we will have to make a switch case.
    Base * B;
     switch(stoi(argv[2]))
    {
        case 1 :
        {
            // Task1 task1(argv[1]);
            // task1.read();
            // task1.operate();
            // task1.write();
            // break;
        }

        case 2 :
        case 3 :
        case 4 :
        {
            B = new Task4(argv[1]);
            B->read();
            B->operate();
            B->write();
            break;
        }
        case 5 :
        default :
            cout << "No task match";
    }
    
    // similarly for Task2, Task3, Task4, Task5




}