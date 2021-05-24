void insertion(int arr[], int size){
  int i = 1, j, key;
  while(i < size){
    key = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    i++;
  }
}

int main(){
  int n = 5;
  int list[5];
  insertion(list, n);
}