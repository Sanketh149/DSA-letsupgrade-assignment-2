#include <iostream>
using namespace std;
struct student {
    int roll;
    float marks;
};

int main() {
    student *curr = new student();
    cout<<"Enter roll number:";
    cin>>curr->roll;
    cout<<"Enter marks:";
    cin>>curr->marks;
    cout<<"Roll number is:"<<curr->roll<<endl;
    cout<<"Marks in Mastering DSA in c++:"<<curr->marks<<endl;
}
