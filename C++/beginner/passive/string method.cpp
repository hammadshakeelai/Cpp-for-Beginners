#include <iostream>
using namespace std;

int main()
{
    // string text = "Hello, World!.";
    // cout << text.length() << endl;// output: 14
   
    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name);
    // if (name.empty()) {
    //     cout << "You entered an empty name." << endl;
    // } else {
    //     cout << "Hello, " << name << "!" << endl;
    // }
    
    string title = "C++ Programming";
    cout << "Title: " << title << endl;

    title.append(" - A Beginner's Guide");
    cout << "Updated Title: " << title << endl;

    title.insert(0, "Book: ");
    cout << "Final Title: " << title << endl;

    title.erase(0, 5); // Remove "Book: "
    cout << "After Erase: " << title << endl;

    title.replace(0, 3, "C# ");
    cout << "After Replace: " << title << endl;

    title.resize(20, '*'); // Resize to 20 characters, filling with '*'
    cout << "After Resize: " << title << endl;

    title.clear(); // Clear the string
    cout << "The title is now empty." << endl;

    string name = "C++ Programming Guide";
    cout << name.find("Guide") << endl;
    cout << name.at(7) << endl; // Access the first character
    cout << name.front() << endl; // Access the first character
    cout << name.back() << endl; // Access the last character
    cout << "The size of the string is: " << name.size() << endl; // Get the size of the string
    cout << "The capacity of the string is: " << name.capacity() << endl; // Get the capacity of the string
    cout << "The max size of the string is: " << name.max_size() << endl; // Get the maximum size of the string

    return 0;
}
