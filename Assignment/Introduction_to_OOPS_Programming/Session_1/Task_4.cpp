#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t = "")
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title;

        if(isDone)
            cout << " - DONE";
        else
            cout << " - PENDING";

        cout << endl;
    }
};

class TaskList
{
private:
    Task tasks[10];
    int count;

public:
    TaskList()
    {
        count = 0;
    }

    void addTask(string title)
    {
        tasks[count] = Task(title);
        count++;
    }

    void markTaskDone(int index)
    {
        if(index >= 0 && index < count)
        {
            tasks[index].markDone();
        }
    }

    void showTasks()
    {
        cout << "\nTask List\n";

        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study");
    list.addTask("Coding");
    list.addTask("Gym");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
} 
