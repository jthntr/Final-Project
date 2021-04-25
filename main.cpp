#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayMemu();

int main()
{
    //option for menu - initialize as zero and change later to avoid faults
    int userInput = 0;

    while(userInput != 5)
    {
        //show menu
        displayMenu();

        cin >> userInput;

       switch(userInput)
       {
           case 1:
           {

           }

           case 2:
           {

           }

           case 3:
           {

           }

           case 4:
            {

            }

            case 5:
            {

            }
       } 
    }

}

void displayMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "+=====Main Menu=====+" << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. " << endl;
    cout << "5. Quit " << endl;
    cout << "+===================+" << endl;
}