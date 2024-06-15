#include <iostream>
#include <string>

class Entity {
    private:
        int mAge;
        std::string mName;

    public:
        Entity(const std::string& name) : mName(name), mAge(-1) {};
        Entity(int age) : mName("Unknown"), mAge(age) {};
};

void PrintEntity(const Entity& entity)
{
    // Printing.
}

int main()
{
    //Normal way to create the objects.
    Entity A("Sathish");
    Entity B(22);

    //Another Normal way to create the objects.
    Entity A1 = Entity("Sathish");
    Entity B1 = Entity(22);

    //Implicit conversion.
    Entity A2 = "Sathish"; //   double conversion from const char* to std::string and then to entity. Double conversion not allowed for user defined classes.
    Entity B2 = 22; //  Takes the int, checks that entity has a constructor for int and creates an Entity object out of it..

    //Implicit conversion.
    PrintEntity(22);
    PrintEntity("Sathish"); //   double conversion from const char* to std::string and then to entity. Double conversion not allowed for user defined classes.
}