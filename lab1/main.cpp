#include <iostream>
#include "students.h"
using namespace std;

void showMenu(){
                cout<<"                     "<<endl;
                cout<<"         MENU            "<<endl;
                cout<<"                     "<<endl;
                cout<<"     1 : Add information                "<<endl;
                cout<<"     2 : Remove student                "<<endl;
                cout<<"     3 : Show students information                "<<endl;
                cout<<"     4 : Exit               "<<endl;
                cout<<"     5 : Show menu               "<<endl;
                cout<<"                     "<<endl;
                cout<<endl<<"Your choice : ";
}
void menu(Students students){
    int choice;
            while(true){
                bool check = false;
                
                cin>>choice;
                switch(choice){
                    case 1 : 
                     {
                        cout<<"Enter student name : ";
                        string name;
                        cin.ignore(1);
                        getline(cin, name);
                        students.add(name);
                        break;
                     }   
                    case 2 : 
                    {
                        cout<<"Enter student name : ";
                        string name;
                        cin.ignore(1);
                        getline(cin, name);
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

                    case 5 : 
                        {

                            showMenu();
                            break;
                        }
                    default : 
                    {
                        cout<<"It's not an option";
                        break;
                    }

                }
                if(choice!=5)
                cout<<endl<<"Your choice : ";

            }
            }

        
int main(){
    Students a;
    showMenu();
    menu(a);

    return 0;

}