#include <iostream>
#include <string>
using namespace std;

int main(void) {
    // 宣告變數以儲存使用者輸入
    string className;
    string studentID;
    string studentName;

    // 請使用者輸入班級
    cout << "請輸入班級: ";
    getline(cin, className);

    // 請使用者輸入學號
    cout << "請輸入學號: ";
    getline(cin, studentID);

    // 請使用者輸入姓名
    cout << "請輸入姓名: ";
    getline(cin, studentName);

    // 列印輸入的資訊
    cout<<"\n輸入的資料如下:" <<endl;
    cout << "班級: " << className << endl;
    cout << "學號: " << studentID << endl;
    cout << "姓名: " << studentName << endl;

    return 0;
}