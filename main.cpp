#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> list{10, 20, 30, 40, 50};
    
    char selection {};
do {
    cout << "\n-----------------------" << endl;
    cout <<"P. Print Numbers from the list" << endl;
    cout <<"A. Add a number to the list" << endl;
    cout <<"M - Display the mean of the list numbers" << endl;
    cout <<"S - Display the smallest number from the list" << endl;
    cout <<"L - Display the largest number from the list" << endl;
    cout <<"Q. Quit" << endl;
    cout << "\n Enter your selection: ";
    cin >> selection;
    
    if (selection == 'P' || selection == 'p') {
        for (size_t i=0; i < list.size(); ++i){
            cout << list.at(i) << " ";
        }
    }
    else if(selection == 'A' || selection == 'a') {
        int add{};
        cout << "Add a number: ";
        cin >> add;
        list.push_back(add);
    }
    else if(selection == 'M' || selection == 'm') {
        int mean{};
        for (auto& n : list){
        mean += n / list.size();
         }
        cout << "The mean of the list is: " << mean;
    }
    else if(selection == 'S' || selection == 's') {
         cout << "The smallest number is: " << *min_element(list.begin(), list.end());
    }
    else if(selection == 'L' || selection == 'l') {
        
         cout << "The largest number is: " << *max_element(list.begin(), list.end());
    }
     else
        cout << "Unknown selection, please try again";
}
    while( selection != 'q' && selection !='Q');
    return 0;
}
