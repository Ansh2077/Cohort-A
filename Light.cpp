#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout << "Sleeping for 1 second.." << endl;
    this_thread::sleep_for(chrono::seconds(10)); // sleep for 1 second
    cout << "10 second elapsed.." << endl;
    return 0;
}
