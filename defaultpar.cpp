// Functions--Default Parameters

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void clear_the_screen(){

}


void log_message(const string &msg, bool clear_screen = false){
    if (clear_screen){
        clear_the_screen();
    }
    cout << msg << endl;
}

int main() {

    log_message("First Message", true);
    log_message("Second message");

    bool user_decision = true;
    log_message("third message", user_decision);

    return 0;
}