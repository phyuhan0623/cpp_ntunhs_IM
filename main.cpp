#include <iostream>
using namespace std;

int main() {
    char fever, cough, fatigue, hypertension, dryMouth, nightSweats;
    cout << "歡迎使用醫療診斷系統，請依序回答問題(y/n)" <<endl;
    cout << "請問您最近是否發燒? =>";
    cin >>fever;
    if(fever == 'y'){
        cout << "請問您最近是否咳嗽? => ";
        cin >>cough;
        if(cough =='y') {
             cout << "請問您最近是否疲憊? => ";
        cin >>fatigue;
        if(fatigue =='y') {
             cout << "你可能感冒!!" << endl;
        }else{
            cout << "請問您最近是否血壓升高? => ";
        cin >> hypertension;
        if(hypertension == 'y'){
            cout << "請問您最近是否口乾? => ";
            cin >>dryMouth;
            if(dryMouth =='y') {
             cout << "你可能肝病!!" << endl;
        }else{
            cout << "其他系統問題" << endl;
        }
        }else{
            cout << "請問您最近是否盜汗? => ";
            cin >>nightSweats;
            if(nightSweats =='y') {
             cout << "你可能肺病!!" << endl;
        }else{
            cout << "其他系統問題" << endl;
        }
            
        }
        
        }
        
            
        }else{
            cout << "您的壯況正常" << endl;
        }
    }else{
            cout << "您的壯況正常" << endl;
    }
    return 0;
}