#include<iostream>

using namespace std;

void majorityElement(int arr[], int n){
    int maxCount = 0;
    int index = -1;
    for(int i = 0; i < n;i++){
        int count = 0;
        for(int j = 0;j < n;j++){
            if(arr[j] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            index = i;
        }

    }

    if(maxCount > n / 2){
        std::cout << arr[index] << std::endl;
    }else{
        std::cout << "No majority element found" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 6, 5, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    majorityElement(arr, n);
    
    return 0;
}
