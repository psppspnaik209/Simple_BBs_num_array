#include <iostream>
void sort(int array[], int size);

int main(){

  int array[] = {5, 7, 2, 3, 4, 1, 8, 10, 9, 6 };
  int size = sizeof(array)/sizeof(array[0]);

  sort(array, size);

  for(int element : array){
    std::cout << element << " ";
  }

  return 0;
}

void sort(int array[], int size){
  int temp;
  for(int i = 0; i < size - 1; i++){
      for(int j = 0; j < size -1; j++){
          if(array[j] > array[j+1]){ /*use > for acsending and < for decsesngingngg*/
            temp = array[j];
            array[j] = array[j+1];
            array[j + 1] = temp;
      }
      }

    }
}