#include<iostream>

using namespace std;

class Person {

    // Complete the class
    string name;
    int age; 
    public:
    string getname(){
        return name;
    }
  int getage(){
      return age;
  } 
    
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        this->age=age;
    }
    void print(string name , int age){
        cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";
    }
};

int main() {

    //Write your code here
    string name;
    int age;
    cin>>name;
    cin>>age;
    Person p1;
    p1.setname(name);
    p1.setage(age);
    p1.print(name,age);

    return 0;
}
