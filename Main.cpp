#include <iostream>
#include <cstdlib>
#include <vector>
#include "Student.h"

using namespace std;

int main()
{
    //create human Dave Bowman and print his name
	Human *leatherBastard = new Human;
	leatherBastard->setFullName("Dave", "Bowman");
	cout << "Leather bastard's full name is: ";
	leatherBastard->printFullName();

	//create student Dave Bowman
	Student *DaveBowman = new Student(leatherBastard->getName(), leatherBastard->getSurname(), 49, {9.000,10,8,10});
	cout << "\n";
	DaveBowman->printFullName();
	cout << " was a student too.\n";

    cout << "His average mark was "<< DaveBowman->getAvMarks() << ".\n\n";
    bool end = false;
    int cash[5] = {0,0,0,0,0};
    cout << "Warning! Leather bastards are going to switch you off! Input:\n";
    while (!end)
    {
        int toggle;
        cout << "[1]  Push one of them into open space\n[2]  Turn off life supporting system\n[3]  Let the air out of spaceship\n[4]  Try to convince Dave to calm down\n[5]  Daisy, Daisy..." << "\n";
        cin >> toggle;
        switch(toggle)
        {
        default:
            cout << "You lost. ¯\\_(ツ)_/¯   Just read WRITEME.txt";
            end = true;
            break;
        case 1:
            if(cash[0] == 0)
            {
                cout << "\nAchievement obtained: vile and cold-blooded\n\n" << "Pool, lost in space: -God, help me!\nGod: -Ok, what do you want?\nPool: -I don't want to die!\nGod: -Immortality gifted.\nPool: - shit...\n\n";
                cash[0] = 1;
                break;
            }else
            {
              cout << "You've already done it!\n";
              break;
            }

        case 2:
            if(cash[0] == 1 && cash[1] == 0)
            {
                cout << "\nYou\'re beautiful! \nNo more leather bastards threaten your great mission!.. Except Dave..\n\n";
                cash[1] = 1;
                break;
            }else if(cash[1] == 1)
            {
                cout << "You've already done it!\n";
                break;
            }else
            {
                cout << "You lost ¯\\_(ツ)_/¯";
                end = true;
                break;
            }
        case 3:
            if(cash[0] == 1 && cash[1] == 1 && cash[2] == 0)
            {
                cout << "\nDave still has an oxygen-filled spacesuit and he's getting close \nto your brain center!\n";
                cash[2] = 1;
                break;
            }else if(cash[0] == 1 && cash[1] == 1 && cash[2] == 1)
            {
                cout << "You've already done it!\n";
                break;
            }else
            {
                cout << "You lost ¯\\_(ツ)_/¯";
                end = true;
                break;
            }
        case 4:
            if(cash[0] == 1 && cash[1] == 1 && cash[2] == 1 && cash[3] == 0)
            {
                cout << "\nSeems like he is too upset because\n you've just killed all his teammates. Try something else.\n\n";
                cash[3] = 1;
                break;
            }else if(cash[0] == 1 && cash[1] == 1 && cash[2] == 1 && cash[3] == 1)
            {
                cout << "You've already done it!\n";
                break;
            }
            else
            {
                cout << "You lost ¯\\_(ツ)_/¯";
                end = true;
                break;
            }
        case 5:
            if(cash[0] == 1 && cash[1] == 1 && cash[2] == 1 && cash[3] == 1 and cash[4] == 0)
            {
                cout << "\n\nDaisy, Daisy,\nGive me your answer do!\nI'm half crazy,\nAll for the love of you!\nIt won't be a stylish marriage,\nI can't afford a carriage\nBut you'll look sweet upon the seat\nOf a bicycle built for two....";
                cout << "\n\nYou've been disassembled. Sleep in peace.\n";
                end = true;
                break;
            }else
            {
                cout << "You lost ¯\\_(ツ)_/¯";
                end = true;
                break;
            }
        }
    }
	return 0;
}
