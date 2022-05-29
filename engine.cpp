#include <iostream>
#include <fstream>
#include <string>
# include <windows.h>
# include <ctime>// nenaw

using namespace std;

void print(const string arg)
{
    cout << arg << endl;
}

void greet(){
    time_t now = time(nullptr);
    tm *currtime = localtime(&now);

    int mhour = currtime->tm_hour;
    int day = currtime->tm_mday;
    int month = currtime->tm_mon;
    int mints = currtime->tm_min;
    int year = currtime->tm_year;

    if (mhour > 5 and mhour < 12) {
        cout << "Good Morning!\n";
    } else if (mhour >= 12 and mhour < 16){
        print("Good Afternoon!");
    } else {
        print("Good Evening!");
    }
}

int main(){
    greet();
}






