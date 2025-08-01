#include<iostream>
#include<vector>
using namespace std;
int main(){
//create vector
vector<int> v;
//size and capacity
cout << "Size: " << v.size() << endl;
cout << "Capacity: " << v.capacity() << endl;
v.push_back(1);
cout << "Size: " << v.size() << endl;
cout << "Capacity: " << v.capacity() << endl;
//delete value of vactor
vector<int>v1;
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);
v1.pop_back();
cout << "Size: " << v1.size() << endl;
cout << "Capacity: " << v1.capacity() << endl;
v1.erase(v1.begin() + 1); // Erase the second element
cout << "Size: " << v1.size() << endl;
cout << "Capacity: " << v1.capacity() << endl;
v1.insert(v1.begin() + 1, 6); // Insert 6 at the second position
cout<< "Elements in v1: ";
for(int i = 0; i < v1.size(); i++){
    cout << v1[i] << " ";
}
cout << endl;
}