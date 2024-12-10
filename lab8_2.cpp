#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double score) {
    if (score > 90) {
        return 'A';
    } else if (score > 75) {
        return 'B';
    } else if (score > 60) {
        return 'C';
    } else if (score > 45) {
        return 'D';
    } else {
        return 'F';
    }
}

int main(){
    int number, i = 0;
    cout << "Enter the number of students: ";
    cin >> number;
    string name[number];
    float score[number];    

    while (i < number) {
        cout << "Name of student " << i+1 << ": ";
        cin.ignore();
        getline(cin, name[i]);

        cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
        i++;
    }
    
    i = 0;
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    while (i < number) {
        cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
        i++;
    } 
    cout << "---------------------------------------------\n";

    return 0;
}
