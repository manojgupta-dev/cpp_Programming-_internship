#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 
struct task
{
    string taskName;
    bool completed;
};
vector<task>tasks;
void addtask(){
    task newtask;
    cout<<" Enter a new task : ";
    cin.ignore();
    getline(cin,newtask.taskName);
    newtask.completed=false;
    tasks.push_back(newtask);
    cout<<" Task added Successfully!"<<endl;
    }
    void viewtask(){
        if(tasks.empty()){
            cout<<"No task Available!"<<endl;
            return;
        }
        cout<<"\n=====VIEW TASKS====="<<endl;
        for(int i=0;i<tasks.size();i++){
            cout<<i + 1<<"."<<tasks[i].taskName;
            if(tasks[i].completed){
                cout<<"- Completed "<<endl;
            }
           else
           {
                    cout<<" - pending "<<endl;
                }
             }

    }
    void completeTask() {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }

    int taskNumber;

    cout << "Enter task number to complete: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }

    tasks[taskNumber - 1].completed = true;

    cout << "Task marked as completed!" << endl;
}
int main(){
    
    int choice;
    while(true){
cout << "===== TO-DO LIST =====" << endl;
cout << "1. Add Task" << endl;
cout << "2. View Tasks" << endl;
cout << "3. Mark Task as Complete" << endl;
cout << "4. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;
  
switch (choice) {
    case 1:
        cout << "Add Task selected." << endl;
        addtask();
        break;

    case 2:
        cout << "View Tasks selected." << endl;

        viewtask();
        break;
    case 3:
        cout << "Mark Task as Complete selected." << endl;
        completeTask();
        break;

    case 4:
        cout << "Exiting..." << endl;
        return 0;
        break;

    default:
        cout << "Invalid choice!" << endl;
}
    }

    return 0;
}