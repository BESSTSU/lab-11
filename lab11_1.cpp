#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

string grade(int B)
{
    if(B == 0)       return "A" ;
    else if(B == 1)  return "B+";
    else if(B == 2)  return "B" ;
    else if(B == 3)  return "C+";
    else if(B == 4)  return "C" ;
    else if(B == 5)  return "D+";
    else if(B == 6)  return "D" ;
    else if(B == 7)  return "F" ;
    else             return "W" ;
}

int main(){
    srand(time(0));
    int i = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade(i) <<  " in this 261102.";     
    }
