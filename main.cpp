#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers = {1, 2, 3, 4};
    char selection;
    do {
        // Display menu 
    cout << "\nWelcome to awesome ware!" << endl;
    cout << " =================" << endl;
    cout << " P - Print numbers " << endl;
    cout << " A - Add a number " << endl;
    cout << " M - Display mean of the numbers" << endl;
    cout << " S - Display the smallest number" << endl;
    cout << " L - Display the largest number" << endl;
    cout << " Q - Quit" << endl;
    cout << "Please enter your choice here:" << endl;
    cin >> selection;
    
    if (selection == 'P' || selection == 'p')
    {
        if (numbers.size() == 0)
        {
            cout << "[] - the list is empty" << endl;
        }
        else 
        {
            cout << "[ "; 
            for (auto num: numbers)
                cout << num << " ";
            cout << "]" << endl;
        }
    }
    else if (selection == 'A' || selection == 'a')
        {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
    else if (selection == 'M' || selection == 'm')
    {
        if (numbers.size() == 0)
        {
            cout << "Unable to calculate mean - no data" << endl;
        }
        else
        {
            int total {};
            for (auto num: numbers)
                total += num;
            cout << "The mean is : " << static_cast<double>(total)/numbers.size() << endl;
        }
    }
    else if (selection == 'S' || selection == 's')
    {
        if (numbers.size() == 0)
        {
            cout << "Unable to determine smallest - the list is empty" << endl;
        }
        else 
        {
            int smallest = numbers.at(0);
            for (auto num: numbers)
                if (num < smallest)
                    smallest = num;
                cout << "The smallest number is:" << smallest << endl;
        }
    }
    else if (selection == 'L' || selection == 'l')
    {
        if (numbers.size() == 0)
            cout << "Unable to determine largets - list is empty" << endl;
        else
        {
            int largest = numbers.at(0);
            for (auto num: numbers)
                if (num > largest)
                    largest = num;
            cout << "The largest number is:" << largest << endl;
        }
    }
    else if (selection == 'Q' || selection == 'q')
    {
        cout << "Thanks for using awesome ware, have a nice day!" << endl;
    }
    else 
    {
        cout << "Unkown selection, please try again" << endl;
    }
    }
    while (selection != 'Q' || selection != 'q');
    
    cout <<endl;
    return 0;
}
