#include <iostream>
#include <string>
using namespace std;

string tasks[5];
int total = 0;

int main()
{
    cout << "Enter 5 Tasks:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Task " << i + 1 << ": ";
        getline(cin, tasks[i]);
        total++;
    }

    cout << "\nTask List:\n";

    for(int i = 0; i < total; i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
} 
