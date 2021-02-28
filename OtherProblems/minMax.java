import java.util.Scanner;
//using divide and conquer method
class minMax{
    static int[] findMinMax(int[] arr, int start, int end){
        int max, min;
        // if array contains 1 element
        if(start==end){
            min = arr[start];
            max = arr[start];
        }
        // if array contains 2 elements
        else if(start+1 == end){
            if(arr[start]<arr[end]){
                max = arr[end];
                min = arr[start];
            }
            else{
                max = arr[start];
                min = arr[end];
            }
        }
        // if array contains more than 2 elements
        else{
            int mid = start + (end-start)/2;
            int left[] = findMinMax(arr, start, mid);
            int right[] = findMinMax(arr, mid+1, end);
            if(left[0]>right[0])
                max = left[0];
            else
                max = right[0];
            if(left[1]<right[1])
                min = left[1];
            else
                min = right[1];
        }
        int ans[] = new int[2];
        ans[0] = max;
        ans[1] = min;
        return ans;
    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int ans[] = new int[2];
        ans = findMinMax(arr, 0, n-1);
        System.out.println(ans[0]);
        System.out.println(ans[1]);
    }
}