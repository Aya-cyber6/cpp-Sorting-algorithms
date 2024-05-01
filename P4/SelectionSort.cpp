#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void selectionSort(fstream& file){

    vector<int> numbers;
    string num;

  
   // Read numbers from the file into a vector
    while (getline(file, num)) {
        numbers.push_back(stoi(num));
    }

  

     for (int i = 0; i < 1000 - 1; i++){
        int min_pos = i;
            for( int j = i + 1; j < 1000; j++){
                if (numbers[j]< numbers[min_pos]){
                    min_pos = j;
                }
            }
         if (min_pos != i){
            int temp = numbers[i];
            numbers[i] = numbers[min_pos];
            numbers[min_pos] = temp;
         }   
    }

    // Reset file position and overwrite the file with sorted numbers
    file.clear();
    file.seekp(0);
    for (const int& n : numbers) {
        file << n << std::endl;
    }

}

            

int main(){

    fstream file("random_numbers.txt", ios::in | ios::out);
    if (!file.is_open()) {
       cerr << "Can't open the file." << endl;
        return 1;
    }

    selectionSort(file);

    cout << "Numbers sorted and updated in 'random_numbers.txt'." << endl;
    
}