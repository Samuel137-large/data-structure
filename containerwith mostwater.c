int maxArea(int* arr, int size) {
    int max = 0;
    int v_min;
    int area;
    for (int s=0,e=(size-1);s<e;){
        v_min = (arr[s] > arr[e]) ? (arr[e]) : (arr[s]);
        area = (e-s) * v_min;
        if (area > max) { max = area; }
        
        if (arr[s] > arr[e]) { e--; }
        else { s++; }
    }
    printf("%d",max);
    return max;
}
