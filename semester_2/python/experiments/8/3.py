with open("city.txt", "r") as f:
    city_data = f.readlines()
    split_city_data = [city.split(' ') for city in city_data]
    print(split_city_data)
    for data in split_city_data:
        print(data[0])
        print(data[1])
        print(data[2])
    print()
    for data in split_city_data:
        if float(data[1]) > 10:
            print(data[0])
    print()
    sum_data = sum([float(data[2]) for data in split_city_data])
    print(sum_data)

