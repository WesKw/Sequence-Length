#include <iostream>

int calculateInt(int num);

int main() {

    int maxLength = 0;
    int seqLength;
    int i;
    int maxNum;

    for(i = 1; i <= 100000; i++) {

        seqLength = calculateInt(i);

        if(seqLength > maxLength) {
            maxLength = seqLength;
            maxNum = i;
        }

        //std::cout << i << " Sequence Length: " << seqLength << std::endl;
    }

    std::cout << "The number with the longest sequence was: " << maxNum << ", with length " << maxLength << "." << std::endl;

    return 0;
}

int calculateInt(int i) {

    int num = i;
    int length = 1;

    while(num != 1) {

        if(num % 2 == 0) {
            num /= 2;
        } else {
            num = num*3 + 1;
        }

        length++;

    }

    return length;

}
