void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char*s1, const char*s2);
int mx_strlen(const char *s);

int main(int argc, char *argv[]){
    if (argc < 2)
        return -1;
    int min;
    for (int i = 1; i < argc - 1; i++){
        min = i;    

        for (int j = 1 + i; j < argc; j++)  
            if (mx_strcmp(argv[j], argv[min]) < 0) 
                min = j;

        char *temp = argv[min];
        argv[min] = argv[i];
        argv[i] = temp;
    }
    for (int i = 1; i < argc; i++){
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

    return 0;
}
