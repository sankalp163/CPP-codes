bool isLucky(int n, int &counter) {
    // add code here
    int temp=n;
    if(temp<counter){
        return true;
    }
    if(temp%counter==0){
        return false;
    }
    
    temp-=temp/counter;
    counter++;
    
    return isLucky(temp,counter);
}
