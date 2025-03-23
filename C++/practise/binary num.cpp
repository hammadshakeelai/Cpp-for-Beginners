#include <iostream>

int main() {
    int arr[10] = {0};

    for (arr[0] = 0; arr[0] < 2; arr[0]++) {
        for (arr[1] = 0; arr[1] < 2; arr[1]++) {
            for (arr[2] = 0; arr[2] < 2; arr[2]++) {
                for (arr[3] = 0; arr[3] < 2; arr[3]++) {
                    for (arr[4] = 0; arr[4] < 2; arr[4]++) {
                        for (arr[5] = 0; arr[5] < 2; arr[5]++) {
                            for (arr[6] = 0; arr[6] < 2; arr[6]++) {
                                for (arr[7] = 0; arr[7] < 2; arr[7]++) {
                                    for (arr[8] = 0; arr[8] < 2; arr[8]++) {
                                        for (arr[9] = 0; arr[9] < 2; arr[9]++) {
                                            std::cout <<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" "<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<" "<<arr[9]<<" " << std::endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
