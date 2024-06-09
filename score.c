int scoreOfString(char* s) {
    int sum = 0;
    for (int i = 0 ; i < strlen(s) -1 ; i++){
        sum = sum + ( abs((s[i] -'0') - (s[i+1]-'0') ));

    }
    return sum;
}
