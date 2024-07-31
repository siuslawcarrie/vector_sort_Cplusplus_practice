#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

void integer_ascending(std::vector<int> integer_array);//display user integers in ascending order
void integer_decending(std::vector<int> integer_array);//display user integers in ascending order
void integer_average(std::vector<int> integer_array);//display user integers in ascending order
void integer_median(std::vector<int> integer_array);//display user integers in ascending order
void integer_mode(std::vector<int> integer_array);//display user integers in ascending order

int main(int argc, char **argv) {
    int size = argc - 2;//declares # token minus C: and /main.exe
    std::vector<int> integer_array;//create a vector for the integers from the user/command line
    //take input on command line
    //loop through argv - values
    if (argc < 3 || argc > 34) {//don't take fewer than 3 arguments main.exe (1), 'A' or 'D' (2), then up to 32 integers
        return -1;
    }
char data_sort = *argv[2];
for (int i = 3; i<size; i++)
{
    int temp = std::stoi(argv[i]);
    integer_array.push_back(temp);
    std::cout<<"temp: "<<temp<<std::endl;//testing

switch(argc[3]){
    case 'A':
        integer_ascending();
break;
}
}


//std::cout<<integer_array;
return 0;
}

char user_input() {
/*  A: sort ascending
    D: sort descending
    V: average
    M: mode
    S: sum*/

    void integer_ascending(std::vector<int> integer_array);//display user integers in ascending order
    std::cout << "Here are your integers in numerical order:" << std::endl; //display list of integers in random order
    int temp=sort(integer_ascending.begin(integer_array[3]), integer_ascending.end(integer_array));//sorting inside the vector
    std::cout<<temp;//display 51 integers,sorted
}


