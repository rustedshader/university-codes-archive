def bubble_sort(arr):
    L = 0
    R = len(arr)
    
    for i in range(R):
        for k in range(R - i  - 1):
            if arr[k+1] < arr[k]:
                arr[k+1],arr[k] = arr[k] , arr[k+1]
    return arr

if __name__ == '__main__':
    test_arr = [5,4,3,2,1]
    print(bubble_sort(test_arr))
