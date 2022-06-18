int atoi(string str) {
    // Write your code here.
    int ans = 0 ;
    int n = str.size();
    int i = 0 , sign = 1;
    if(str[i] == '-'){
        sign = -1;
        i++;
    }
    for(;i<n;i++){
        if(str[i] >= '0' && str[i]<='9'){
            ans = ans * 10;
            ans = ans + (str[i] - '0');
        }
    }
    return ans * sign;
}