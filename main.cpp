#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int arr[100] ;
    srand(time(0));
    for(int i = 0; i < 100; i++) {
        arr[i]= rand() % 11;
    }
    int count_of_fives = 0;
    for (int i = 0; i < 100; i++) {
        if (arr[i] ==5){
            count_of_fives++;
        }
    }
    
    cout<<"Welcome to Online IDE!! Happy Coding :)";
    return 0;
}
