#include <iostream>
using namespace std;

int main() {
    int marks[] = {23,37,32,56,31,22};
    int size =6 ;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index ;

    for(int i=0; i<size; i++){
        // smallest = min(marks[i] , smallest);
        // largest = max(marks[i] , largest);
        
        if(marks[i] < smallest ){
            smallest = marks[i];
            index = i;

        }
        //     if(marks[i] > largest){
        //     largest = marks[i];
        // }
    }

    cout<< "index = " << index <<endl;
    // cout<< "largest = " << largest <<endl;
    return 0;
}





// #include <iostream>
// using namespace std;

// int main() {
//     int marks[] = {23,34,12,32,22};

//     cout<< marks[1]<<endl;
//     return 0;
// }