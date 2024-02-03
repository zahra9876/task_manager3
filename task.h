#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// A class to represent a task
class Task {
    // Private data members
private:
    string name;       // The name of the task
    string due_date;   // The due date of the task
    bool done;         // The status of the task (done or not)

    // Public member functions
public:
    // A constructor to initialize the task with a name and a due date
    Task(string name, string due_date) {
        this->name = name;
        this->due_date = due_date;
        this->done = false; // By default, the task is not done
    }

    // A function to mark the task as done
    void mark_as_done() {
        this->done = true;
    }

    // A function to print the task information
    void print_task() {
        cout << "Task name: " << this->name << endl;
        cout << "Due date: " << this->due_date << endl;
        cout << "Status: " << (this->done ? "Done" : "Not done") << endl;
    }

    // A function to get the name of the task
    string get_name() {
        return this->name;
    }

    // A function to get the due date of the task
    string get_due_date() {
        return this->due_date;
    }

    // A function to get the status of the task
    bool is_done() {
        return this->done;
    }
};

#endif // TASK_H
