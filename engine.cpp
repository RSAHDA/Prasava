#include <iostream>
#include <fstream>
#include <string>
# include <windows.h>
# include <ctime>

using namespace std;

string greet(){
    time_t now = time(0);
    tm *currtime = localtime(&now);

}

int main(){

    cout << greet();

}






