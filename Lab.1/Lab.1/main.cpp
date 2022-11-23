#include <iostream>
using namespace std;

//int det::id =0;

class det
{
    static int id;
    int Id;
    string name;
    double mass;
public:
    det(){
        //id = 0;
        Id=id++;
        name = "Noname";
    };
    det(string name){
        this->name= name;
        Id = id++;
    }
    friend void get(det& d);
    void Vvod(void);
    friend class Control;
};

int det::id =0;

void get(det& d){
    cout<<d.id<<' '<<d.name<<' '<<d.mass<<endl;
};

void det::Vvod(void)
{
    cout<<"vvod date"<<endl;
    cin>>id>>name>>mass;
};

class Control
{
public:
    void Creatmass(det& d);
};

void Control::Creatmass(det& d)
{
    cout<<"Введите вес!!!"<<endl;
    //double weight;
    cin>>d.mass;
    //d.mass=weight;
};

int main(int argc, const char * argv[])
{
    det d("Detail");
    Control v;
    get(d);
    v.Creatmass(d);
    get(d);
    
    return 0;
    
}
