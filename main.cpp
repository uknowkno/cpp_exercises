//1.1
//whether if a string has all unique characters
//use a boolean table to represent 128 characters
bool uniquecharacters (string s){
    
    bool table[128] = {false};
    for (int i = 0 ; i < s.length() ; i++){
        int num = int(s[i]);
        if (table[num]){
            return false;
        }
        else{
            table[num] = true;
        }
    }
    return true;
}

//1.2
//reverse a string

void reverse_string(char * foo){
    char * head;
    char * tail;
    head = foo;
    tail = foo;
    for (int i=0;i<strlen(foo);i++) //tail till the end of foo
        tail++;
    while (head < tail){
        char tmp;
        tail--;                         //make the tail not '\0'
        tmp = *head;
        *head = *tail;
        *tail = tmp;
        head++;
    }
}


//1.3
//Given two strings, write a method to decide if one is a permuation of the other
int is_permuation(char a[],char b[]){
    int table[128] = {0};
    if (strlen(a)!=strlen(b))           //if length of two strings are not equal
        return false;
    for (int i=0;i<strlen(a);i++){      //count charaters appear in string a
        table[int(a[i])]++;
    }
    for (int i=0;i<strlen(b);i++){
        table[int(b[i])]--;
    }
    for (int i=0;i<128;i++){
        if (table[i]!=0)
            return false;
    }
    return true;
}
