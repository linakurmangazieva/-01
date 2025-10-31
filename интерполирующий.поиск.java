public class InterpolationSearch {
    public static int interpolationSearch(int[] arr, int lo, int hi, int x) {
        if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
            int pos = lo + (((hi - lo) * (x - arr[lo])) / (arr[hi] - arr[lo]));
            
            // Состояние, если цель найдена
            if (arr[pos] == x) {
                return pos;
            }
            
            // Если x больше, x находится в правом подмассиве
            if (arr[pos] < x) {
                return interpolationSearch(arr, pos + 1, hi, x);
            }
            
            // Если x меньше, x находится в левом подмассиве
            if (arr[pos] > x) {
                return interpolationSearch(arr, lo, pos - 1, x);
            }
        }
        return -1;
    }
}