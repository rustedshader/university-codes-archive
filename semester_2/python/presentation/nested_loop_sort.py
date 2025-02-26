def nested_sort(arr):
    R = len(arr)
    for i in range(R):
        for k in range(R-1):
            if arr[k+1] < arr[k]:
                arr[k+1],arr[k] = arr[k] , arr[k+1]
    return arr

if __name__ == '__main__':
    unsorted_arr = [5,4,3,2,1]
    print(nested_sort(unsorted_arr))
