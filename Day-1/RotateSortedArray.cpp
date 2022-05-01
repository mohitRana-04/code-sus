int search(int arr[], int target)
{
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]);

    while(start<=end){
        int mid = int((start+end)/2);
        if (arr[mid] == target){
            return mid;
        }
        else if (start == mid == end)
        {
            return -1;
        }
        
        
    }
}
