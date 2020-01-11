

char nextGreatestLetter(char* letters, int lettersSize, char target){
    int left = 0, right = lettersSize - 1, mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(letters[mid] == target){
            while(mid < lettersSize && letters[mid]==target){
                mid++;
            }
            if(mid >= lettersSize){
                return letters[0];
            }
            return letters[mid];
        } else if(letters[mid] > target){
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }
    if(right + 1 >= lettersSize){
        return letters[0];
    }
    return letters[right + 1];
}

