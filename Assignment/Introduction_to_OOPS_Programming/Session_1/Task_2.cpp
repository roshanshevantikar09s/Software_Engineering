#include <iostream>
#include <string>
using namespace std;

string tasks[5];
bool status[5];
int total = 0;

void markTaskDone(int index)
{
    if(index >= 0 && index < total)
    {
        status[index] = true;
    }
}

int main()
{
    cout << "Enter 5 Tasks:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Task " << i + 1 << ": ";
        getline(cin, tasks[i]);
        status[i] = false;
        total++;
    }

    int choice;

    cout << "\nEnter Task Number to Mark DONE: ";
    cin >> choice;

    markTaskDone(choice - 1);

    cout << "\nUpdated Task List:\n";

    for(int i = 0; i < total; i++)
    {
        cout << i + 1 << ". " << tasks[i];

        if(status[i])
            cout << " - DONE";

        cout << endl;
    }

    return 0;
} 
