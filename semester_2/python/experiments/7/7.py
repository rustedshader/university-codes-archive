def keyword_args(first, middle, last) -> None:
    print("Hello "+first+" "+ middle + " " + last)

def default_args(first='Shubhang',last='Sharma') -> None:
    print(first,last)

def variable_len_args(*args) -> None:
    for num in args:
        print(num)

if __name__ == '__main__':
    keyword_args("Prakash","Chand","Sharma")
    default_args()
    variable_len_args([1,2,3,4,5,6])