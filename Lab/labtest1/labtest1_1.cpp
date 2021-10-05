#include <iostream>
using namespace std;
int main()
{
    int project_score, midterm_score, final_score, total_score = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Project Score : ";
        cin >> project_score;
        cout << "Enter Midterm Score : ";
        cin >> midterm_score;
        cout << "Enter Final Score : ";
        cin >> final_score;

        if (project_score > 20)
        {
            project_score = 0;
            cout << "Project Score Error !!!!" << endl;
        }
        if (midterm_score > 30)
        {
            midterm_score = 0;
            cout << "Midterm Score Error !!!!" << endl;
        }
        if (final_score > 50)
        {
            final_score = 0;
            cout << "Final Score Error !!!!" << endl;
        }

        total_score = project_score + midterm_score + final_score;
        cout << "total Score : " << total_score << endl;

        if (total_score >= 80)
        {
            cout << "Grade : A" << endl;
        }
        else if (total_score >= 70 && total_score <= 79)
        {
            cout << "Grade : B" << endl;
        }
        else if (total_score >= 60 && total_score <= 69)
        {
            cout << "Grade : C" << endl;
        }
        else if (total_score >= 50 && total_score <= 59)
        {
            cout << "Grade : D" << endl;
        }
        else if (total_score >= 0 && total_score <= 49)
        {
            cout << "Grade : F" << endl;
        }
        else
        {
            cout << "Grade : " << endl;
        }
    }

    return (0);
}