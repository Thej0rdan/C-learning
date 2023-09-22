#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct task {
    task *pNext;
    string description;

};


int main() {

    task item;
    item.description = "do something"; 

    task *pTask = new task;
    pTask->description = "do somn";
    delete pTask;

}