#include<iostream>
#include<set>
using namespace std;

class Person
{
public:
    int age;
    string name;
    bool operator < (const Person& rhs) const
    {
        return (age < rhs.age);
    }
};

void ex_Set()
{
    cout<<__FUNCTION__<<endl;

    // contains unique and sorted values
    // pass the compare function for custom class, by default ascending order

    set<int,std::greater<int>> myset = {1,2,3,6,5,4,7,8,9,1,5,9};
    set<Person> persons = {{30,"Ramesh"},{22,"Raju"},{34,"Ram"}};

    for(const auto &e :myset)
    {
        cout<<e<<" "; // will print only unique elem as set can contain only unique value.
    }
    cout<<endl;

    for(auto& per : persons)
    {
        cout<<per.age<<" "<<per.name<<endl;
    }

}
