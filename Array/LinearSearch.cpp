/*You are given an array 'arr' containing 'n' integers. You are alsogiven an integer 'num' is present in the array or not. If 'num' is present in the array, return the 0-based index of the first occurrence of 'num' else, return -1.*/

// Solution:

/*
int linearSearch(int n, int num, vector<int> &arr)
{
    int i;
    for(i = 0; i < n; i++){
        if(arr[i]==num){
            break;
        }
    }
    if(arr[i]!=num){
        i=-1;
    }
    return i;
}
*/