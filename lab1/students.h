#include <iostream>
#include <vector>

using namespace std;

class Students{
    private :
        vector<string> arr;


    public :
        void add(string student){
            this->arr.push_back(student);
        }
        void show(){
            if(arr.empty()){
                cout<<"This list is empty"<<endl;
                return;
            }
            for (auto it = this->arr.begin(); it != this->arr.end(); it++)
                cout<<*it<<endl;
        }
        void remove(string target){
            for (auto it = this->arr.begin(); it != this->arr.end(); it++)
                {
                    if(*it==target){
                        this->arr.erase(it);
                        return;
                    }
                }
            cout<< "There are no student with this name "<<endl;

        }
};