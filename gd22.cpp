#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
    string name;
    int age;
    public:
    person(){}

    virtual void get(){
        cout<<"Enter the person name:";
        getline(cin,name);
        cout<<"Enter the person age:";
        cin>>age;
    }
    virtual void display(){
        cout<<"The person name: "<<name<<"\n";
        cout<<"The person age: "<<age<<"\n";
    }
};

class Teacher:public person{
    private:
    float salary;
    public:
    Teacher(){}
    virtual void get(){
        person::get();
        cout<<"Enter the teacher salary: ";
        cin>>salary;
    }
    virtual void display(){
        person::display();
        cout<<"The teacher salary: "<<salary<<"\n";
    }
};

class Student:public person{
    private:
    string grade;
    public:
    Student(){}
    virtual void get(){
        person::get();
        cout<<"Enter the student grade: ";
        cin>>grade;
    }
    virtual void display(){
        person::display();
        cout<<"The student grade:: "<<grade<<"\n";
    }
};

int main(){
    person* person[2];

    Teacher* teacher=new Teacher();
    teacher->get();
    cout<<"\n";
    fflush(stdin);
    Student* student=new Student();
    student->get();

    person[0]= teacher;
    person[1]= student;
    cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        person[i]->display();
        cout<<"\n";
        delete person[i];
    }
    system("pause");
    return 0;
    
}