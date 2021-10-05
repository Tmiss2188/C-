#include <iostream>
using namespace std;
void menu();
void inputname(string fname[15], string lname[15]);
void scoreclassroom(int room[15]);
void scorehomework(int homework[15]);
void scoretest(int test[15]);
void scoremidterm(int midterm[15]);
void scorefinal(int final[15])
int main()
{
    string fname[15], lname[15];
    int room[15], homework[15], test[15], midterm[15], final[15], total[15], STD;
    char grade[15];

    cout << "Enter Number STD : ";
    cin >> STD;

    while (menu != 0)
    {
        menu();
        cin >> menu;
        if (menu == 1)
        {
            inputname(fname, lname);
        }
        if (menu == 2)
        {
            scoreclassroom(room);
        }
        if (menu == 3)
        {
            scorehomework(homework);
        }
        if (menu == 4)
        {
            scoretest(test);
        }
        if (menu == 5)
        {
            scoremidterm(midterm);
        }
        if (menu == 6)
        {
            scorefinal(final);
        }
    }

    for (int i = 0; i < STD; i++)
    {
        total[i] = room[i] + homework[i] + test[i] + midterm[i] + final[i];

        if (total[i] > 80)
        {
            grade[i] = 'A';
        }
        else if (total[i] > 70)
        {
            grade[i] = 'B';
        }
        else if (total[i] > 60)
        {
            grade[i] = 'C';
        }
        else if (total[i] > 50)
        {
            grade[i] = 'D';
        }
        else
        {
            grade[i] = 'F';
        }
    }
    return (0);
}
void menu()
{
    cout << "select menu for grade" << endl;
    cout << "1.) input name student" << endl;
    cout << "2.) input score classroom" << endl;
    cout << "2.) input score classroom" << endl;
    cout << "2.) input score classroom" << endl;
    cout << "2.) input score classroom" << endl;
    cout << "2.) input score classroom" << endl;
    cout << "please Enter number 1 - 5 exit 0" << endl;
}
void inputname(string fname[15], string lname[15])
{
    for (int i = 0; i < 15; i++)
    {
        cout << "Enter FristName : ";
        cin >> fname[i];
        cout << "Enter LastName : ";
        cin >> lname[i];
    }
}
void scoreclassroom(int room[15])
{
    for (int i = 0; i < 15; i++)
    {
        do
        {
            cout << "Enter Score Room : ";
            cin >> room[i];
        } while ((room[i] < 0) || (room[i] > 5));
    }
}
void scorehomework(int homework[15])
{
    for (int i = 0; i < 15; i++)
    {
        do
        {
            cout << "Enter Score HomeWork : ";
            cin >> homework[i];
        } while ((homework[i] < 0) || (homework[i] > 15));
    }
}
void scoretest(int test[15])
{
    for (int i = 0; i < 15; i++)
    {
        do
        {
            cout << "Enter Score Test : ";
            cin >> test[i];
        } while ((test[i] < 0) || (test[i] > 10));
    }
}
void scoremidterm(int midterm[15])
{
    for (int i = 0; i < 15; i++)
    {
        do
        {
            cout << "Enter Score Midterm : ";
            cin >> midterm[i];
        } while ((midterm[i] < 0) || (midterm[i] > 30));
    }
}
void scorefinal(int final[15])
{
    for (int i = 0; i < 15; i++)
    {
        do
        {
            cout << "Enter Score Final : ";
            cin >> final[i];
        } while ((final[i] < 0) || (final[i] > 30));
    }
}