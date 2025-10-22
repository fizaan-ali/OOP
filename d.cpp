#include <iostream>
using namespace std;
class Array {
    private:
        int arr[5];
    public:
        void fill();
        void display();
        int max();
        int min();
};
void Array::fill(){
    for(int i=0; i<5; i++){
        cout << "Enter value for arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void Array::display(){
    cout << "Array: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}
int Array::max(){
    int mx = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}
int Array::min(){
    int mn = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}
int main(){
    Array arr;
    arr.fill();
    arr.display();
    cout << endl;
    cout << "Minimum value: " << arr.min() << endl;
    cout << "Maximum value: " << arr.max() << endl;
    return 0;
}