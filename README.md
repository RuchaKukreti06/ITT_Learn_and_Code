C++ File Structure and Extensions
Project Directory Structure

A simple C++ project should follow a clear structure:

project/
├── inc        (Header files: class declarations)
├── src        (Implementation files: .cpp definitions)
├── constant   (Constants and macros)
├── interface  (interfaces)
├── types      (Structs or type definitions)

To run a project:
Go inside the project folder
Run command for compilation: g++ ./src/*.cpp -I./inc/ -I./types -I./constant -I./interface -o app 
Run command for execution: ./app

File Extensions
.h (Header Files)

Header files contain declarations only, such as:

Class definitions

Struct definitions

Function declarations

Enums

Constants

Example:

Record.h

class Record
{
public:
    int getValue() const;

private:
    int value;
};
.cpp (Source Files)

Source files contain implementations of the declarations in header files.

Example:

Record.cpp

#include "Record.h"

int Record::getValue() const
{
    return value;
}
main.cpp

The entry point of the program where execution begins.

Example:

int main()
{
    // Program starts here
    return 0;
}
Header and Source Relationship

Each class typically has:

ClassName.h   → Declaration
ClassName.cpp → Implementation

Example:

Record.h
Record.cpp

This keeps the interface separate from the implementation, improving modularity and maintainability.

Include Guidelines

Include only necessary headers.

Prefer forward declarations when possible.

Avoid circular dependencies between headers.

Example:

#include "Record.h"
#include <vector>
#include <string>
----------------------------------------------------------------------------------------------------------
Coding Guidelines
 
-> Use consistent naming convention camelCasing for variable names and for Classes , Structs and enum use PascalCase.
-> Use meaningful names.
-> Prefer maximum 2-3 arguments. If more needed, consider using a struct/class.
-> Follow Do Not Repeat Yourself Principle.
-> Properly handle errors.
-> Functions should not be more than 20-25 lines (Single Responsibility Principle).
-> Keep code formatted and indented properly.
-> Delete what is not required rather than just commenting it out.
-> Use UPPERCASE for constants.
-> Readability over conciseness.
-> Avoid global variables whenever possible.
-> Avoid magic numbers; use named constants or enums.
-> Prefer const correctness wherever possible.
-> Validate function inputs and parameters.
-> Keep classes small and focused on a single responsibility.
-> Prefer composition over inheritance when possible.
-> Separate interface and implementation clearly.
-> Pass large objects by const reference instead of by value.
-> Avoid exposing internal class data directly.
-> Ensure proper resource cleanup.
-> Avoid unnecessary dependencies between modules.
-> Keep header files minimal and avoid unnecessary includes.
-> Ensure code compiles without warnings.
-> Keep logical blocks separated with whitespace.
-> Prefer modular design over large monolithic code.
-> Refactor code when it becomes difficult to understand.
-> Write code that is easy to test.
-> Avoid hardcoding configuration values.
-> Use enums for related groups of constants.