double averageTemp(double *temps, int size){
    double result = 0.0;
    int i;

    for(i = 0; i < size;i++){
        result = result + temps[i];
    }

    result = result / (double) size;

    return result;
}