int binsrch(int* arr, int left, int right, int target) {
        int mid = (left + right) / 2;
        if (left > right) {
		return -1;
	}
        if (arr[mid] < target) {
            return binsrch(arr, mid + 1, right, target);
        } else if (arr[mid] > target) {
            return binsrch(arr, left, mid - 1, target);
        } else {
            return mid;
        }
}

int search(int* nums, int numsSize, int target) {
        int left = 0;
        int right = numsSize - 1;
        return binsrch(nums, left, right, target);
}
