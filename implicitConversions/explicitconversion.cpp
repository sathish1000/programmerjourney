#include <iostream>
#include <string>

class Entity {
    private:
        int mAge;
        std::string mName;

    public:
        explicit Entity(const std::string& name) : mName(name), mAge(-1) {};
        explicit Entity(int age) : mName("Unknown"), mAge(age) {};
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
    Entity A2 = "Sathish"; //   Explicit constructor. Doesnt allow implicit conversion. double conversion from const char* to std::string and then to entity. Double conversion not allowed for user defined classes.
    Entity B2 = 22; //   Explicit constructor. Doesnt allow implicit conversion. double conversion from const char* to std::string and then to entity. Double conversion not allowed for user defined classes.

    //Implicit conversion.
    PrintEntity(22); //   Explicit constructor. Doesnt allow implicit conversion. 
    PrintEntity("Sathish"); //   Explicit constructor. Doesnt allow implicit conversion. double conversion from const char* to std::string and then to entity. Double conversion not allowed for user defined classes.
}