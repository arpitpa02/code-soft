#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;

    char choice;

    do {
        cout << "\n=== To-Do List Manager ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                {
                    string task;
                    cout << "Enter task description: ";
                    cin.ignore(); // Ignore newline character in the buffer
                    getline(cin, task);
                    tasks.push_back(task);
                    cout << "Task added successfully!\n";
                }
                break;
            case '2':
                if (tasks.empty()) {
                    cout << "No tasks to display.\n";
                } else {
                    cout << "\n=== To-Do List ===\n";
                    for (const string& task : tasks) {
                        cout << "- " << task << "\n";
                    }
                }
                break;
            case '3':
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != '3');

    return 0;
}
