#include <iostream>
using namespace std;
string a1[20],a2[20],a3[20],a4[20],a5[20];
int total = 0;
void enter() {
   int choice;
   cout << "How many Students do you want to enter : ";
   cin >> choice;
   if(total==0) {
   total += choice;
   for(int i = 0; i < choice ; i++) {
    cout << "Enter data of Student " << i+1 << endl;
    cout << "Enter Student Name : ";
    cin >> a1[i] ;
    cout << "Enter Student Roll Number : ";
    cin >> a2[i];
    cout << "Enter Student Marks : " ;
    cin >> a3[i];
    cout << "Enter Student Phone Number : " ;
    cin >> a4[i];
    cout << "Enter Course : " ;
    cin >> a5[i];
   }
 }else{
    for(int i = total; i < total+choice ; i++) {
    cout << "Enter data of Student " << i+1 << endl;
    cout << "Enter Student Name : ";
    cin >> a1[i] ;
    cout << "Enter Student Roll Number : ";
    cin >> a2[i];
    cout << "Enter Student Marks : " ;
    cin >> a3[i];
    cout << "Enter Student Phone Number : " ;
    cin >> a4[i];
    cout << "Enter Course : " ;
    cin >> a5[i];
   }
 }
}
void display() {
    if(total==0) {
        cout << "No data entered" << endl;
    }else {
    for(int i = 0; i < total ; i++) {
         cout << "Data of student " << i+1 << endl;
         cout << "Student Name : " << a1[i]<< endl ;
         cout << "Student RollNumber : " << a2[i]<<endl ;
         cout << "Student Marks : " << a3[i]<<endl ;
         cout << "Student Phone Number : " << a4[i] <<endl;
         cout << "Student Course : " << a5[i] <<endl;
    }
}
}
void search() {
    if(total==0) {
        cout << "No data entered" << endl;
    }else {
    string rollno;
    cout << "Enter Roll Number of Student which you want to search : " ;
    cin >> rollno;
    for(int i = 0; i < total; i++) {
        if(rollno==a2[i]) {
         cout << "Data of student " << i+1 << " :" << endl;
         cout << "Student Name : " << a1[i]<< endl ;
         cout << "Student RollNumber : " << a2[i]<<endl ;
         cout << "Student Marks : " << a3[i]<<endl ;
         cout << "Student Phone Number : " << a4[i] <<endl;
         cout << "Student Course : " << a5[i] <<endl;
        }
    }
}
}
void update() {
    string rollno;
    cout << "Enter Roll Number of Student whose data need to be updated : " ;
    cin >> rollno;
    for(int i = 0; i < total; i++) {
        if(rollno==a2[i]) {
         cout << "Previous data of Student with rollnumber"<< i << endl;
         cout << "Data of student " << i+1 << endl;
         cout << "Student Name : " << a1[i]<< endl ;
         cout << "Student RollNumber : " << a2[i]<<endl ;
         cout << "Student Marks : " << a3[i]<<endl ;
         cout << "Student Phone Number : " << a4[i] <<endl;
         cout << "Student Course : " << a5[i] <<endl;
         cout << "Updated data of the Student with rollnumber" << i << endl;
         cout << "Enter Student Name : ";
         cin >> a1[i] ;
         cout << "Enter Student Roll Number : ";
         cin >> a2[i];
         cout << "Enter Student Marks : " ;
         cin >> a3[i];
         cout << "Enter Student Phone Number : " ;
         cin >> a4[i];
         cout << "Enter Course : " ;
         cin >> a5[i];

        }
    }
}
void Delete() {
    if(total==0) {
        cout << "No data entered" << endl;
    } else {
    int a;
    cout <<"Press 1 to delete full record " << endl;
    cout << "Press 2 to delete specific record" << endl;
    cin >> a;
    if(a==1) {
        total = 0;
        cout << "All records deleted" << endl;
    }
    if(a==2){
        string rollno;
        cout << "Enter the rollnumber of student whose details should be deleted" << endl;
        cin >> rollno;
        for(int i = 0; i < total ; i++) {
            if(rollno==a2[i]) {
                for(int j=i;j<total;j++) {
                   a1[j] = a1[j+1];
                   a2[j] = a2[j+1];
                   a3[j] = a3[j+1];
                   a4[j] = a4[j+1];
                   a5[j] = a5[j+1];
                }
                total--;
                cout << "Your required record has been sucessfully deleted..." << endl;
            }
        }

    }
}
}
int main() {
    int value;
    while(true) {
      cout << "---Student Managment System---" << endl ;
      cout << " 1. Press 1 to enter the student data " << endl;
      cout << " 2. Press 2 to display the student data " << endl;
      cout << " 3. Press 3 to search any specified student data " << endl;
      cout << " 4. Press 4 to update any specified student data " << endl;
      cout << " 5. Press 5 to delete any specified student data " << endl;
      cout << " 6. Press 6 to exit" << endl;
      cin >> value;
      switch(value) {
        case 1:
          enter();
          break;
        case 2:
          display();
          break;
        case 3:
          search();
          break;
        case 4:
          update();
          break;
        case 5:
          Delete();
          break;
        case 6:
          exit(0);
          break;
        default:
          cout<<"Invalid input" << endl;
          break;  
      }
    }
}