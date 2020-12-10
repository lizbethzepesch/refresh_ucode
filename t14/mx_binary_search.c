int mx_strcmp(const char*s1, const char*s2);

int mx_binary_search(char **arr, int size, const char*s, int *count){
    int r = size - 1, l = 0;
    int middle;

    while (l <= r) { 
        middle = l + (r - l) / 2; 
        *count += 1;
        if (mx_strcmp(arr[middle], s) == 0) 
            return middle;
        (mx_strcmp(arr[middle], s) < 0) ? (l = middle + 1) : (r = middle - 1); 
    }
    *count = 0;
    return -1; 
}
