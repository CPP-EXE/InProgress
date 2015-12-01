# InProgress


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
    cout << "\n\n";
    cout << setw(58)
    << "===================================================Menu=========================================================" <<
    setw(95) << "\n\n"
    << setw(60) << "(1) Write File\n"
    << setw(59) << "(2) Read File\n"
    << setw(61) << "(3) Exit System\n";

    int Choice;
    cout << "\n\n\n";
    cout << "Enter Option To Execute Command: ";
    cin >> Choice;
    cout << "\n\n";

    int ProgressBar = 0;

    switch(Choice)
     {
        case 1:
            {
        cout << "Loading";
            for(ProgressBar = 0; ProgressBar < 21; ProgressBar++)
            {
                Sleep(240);
                cout << "." << flush;
            }
            Sleep(4000);
            system("CLS");

            cout << "\n";
            cout << "================================================================================================================\n";
            cout << "\n";
            cout << setw(60) <<  "Write File\n\n\n\n";
            break;
            }
       case 2:
           {
            cout << "Loading";
            for(ProgressBar = 0; ProgressBar < 21; ProgressBar++)
            {
                Sleep(240);
                cout << "." << flush;
            }
            Sleep(4000);
            system("CLS");

            cout << "\n";
            cout << "================================================================================================================\n";
            cout << "\n";
            cout << setw(60) << "Read File\n\n\n\n";
            ofstream ReadFromFile("ReadData.txt");
            if(!ReadFromFile)
            {
                cerr << "Error Cannot Read The File" << endl;
            }

            cout << "Testing File";
            break;
           }
        case 3:
            {
            cout << "\n\n\n\n\n\n\n\n";
            return 0;
            break;
            }

        default:
            cout << "\n\n\n\n";
            cout << "Error Invalid Syntax\n\n";
            cout << "Please Re-Enter Option";
            //NEED HELP TO MAKE THIS RE_TAKE INPUT INSTEAD OF TERMINATE!


      }


    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "================================================================================================================\n";




    return 0;
}
