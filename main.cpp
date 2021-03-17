#include <iostream>
#include "students.h"
using namespace std;

void menu(Students students){
    int choice;
            while(true){
                bool check = false;
                cout<<"         Menu            "<<endl;
                cout<<"     1 : Add information                "<<endl;
                cout<<"     2 : Remove student                "<<endl;
                cout<<"     3 : Show students information                "<<endl;
                cout<<"     4 : Exit               "<<endl;
                cout<<"                     "<<endl;
                cin>>choice;
                switch(choice){
                    case 1 : 
                     {
                        cout<<"Enter student name : ";
                        string name;
                        cin>>name;
                        students.add(name);
                        break;
                     }   
                    case 2 : 
                    {
                        cout<<"Enter student name : ";
                        string name;
                        cin>>name;
                        students.remove(name);
                        break;
                    }
                    case 3 : 
                    {
                        students.show();
                        break;
                    }
                       
                    case 4 : 
                    {
                        return;
                        check=true;
                        break;
                    }
                        
                    default : 
                    {
                        cout<<"It's not an option";
                        break;
                    }

                }
                // if(check)
                // break;

            }
            }

        
int main(){
    Students a;
    menu(a);

    return 0;

}