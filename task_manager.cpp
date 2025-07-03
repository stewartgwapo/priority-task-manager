#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

class Task {
    public:
    int priority;
    string taskName;
    string taskDesc;
    string date;
    bool completed;
};

// Comparator for Task to make a min-heap (lower value = higher priority)
struct CompareTask {
    bool operator()(const Task& a, const Task& b) const {
        return a.priority > b.priority;
    }
};

class TaskManager {
    public:
    // declare the priority queue 'tasks'
    priority_queue<Task, vector<Task>, CompareTask> tasks;

    // method to add a task
    void addTask(Task task) {
        tasks.push(task);
    }

    // method to display all the tasks
    void showAllTasks() {
        if (tasks.empty()) {
            cout << "No tasks to show.\n"; return;
        }
        // copy 'tasks' to 'temp' to display all the tasks without removing them from 'tasks'
        priority_queue<Task, vector<Task>, CompareTask> temp = tasks;
        while (!temp.empty()) {
            Task task = temp.top();
            cout << "--------------------------\n";
            cout << "Priority: " << task.priority << "\n";
            cout << "Task Name: " << task.taskName << "\n";
            cout << "Description: " << task.taskDesc << "\n";
            cout << "Due date: " << task.date << "\n";
            cout << "Completed: " << (task.completed ? "Yes" : "No") << "\n";
            temp.pop();
        }
        cout << "--------------------------\n";
    }

    // method to update a task
    void updateTask() {};

    // method to mark a task as completed
    void markAsCompleted() {};

    // method to remove a task
    void removeTask() {};

    // method to remove or clear all the tasks
    void clearAllTasks() {};
};

void printWelcomePage() {
    cout << "=================================================================\n";
    cout << "| ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ Priority Task Manager ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ |\n";
    cout << "=================================================================\n";
    cout << "| ~ ~ ~ ~ ~ ~ ~ ~ Manage your tasks efficiently ~ ~ ~ ~ ~ ~ ~ ~ |\n";
    cout << "=================================================================\n";
    cout << "What's your first name? "; string fname; cin>>fname;
    cout << "\nWhat would you like to do, " << fname << "?\n";
    cout << "1. Add Task\n";
    cout << "2. Update Task\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Show All Tasks\n";
    cout << "5. Remove Task\n";
    cout << "6. Clear All Tasks\n";
    cout << "0. Exit\n";
    cout << "=================================================================\n";
}

int main() {
    printWelcomePage();
    TaskManager tm;
    int choice;
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            Task t;
            cout << "Enter task name: ";
            cin.ignore();
            getline(cin, t.taskName);
            cout << "Enter task description: ";
            getline(cin, t.taskDesc);
            cout << "Enter due date (DD-MM-YYYY): ";
            getline(cin, t.date);
            cout << "Enter priority (1 = highest priority): ";
            while (true) {
                cin >> t.priority;
                if (t.priority >= 1) break;
                cout << "Invalid input. Please enter a positive integer (1 = highest priority): ";
            }
            t.completed = false;
            tm.addTask(t);
            cout << "Task added successfully!\n";
            break;
        }
        case 4: {
            tm.showAllTasks();
            break;
        }
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid input. Please enter a valid option.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}