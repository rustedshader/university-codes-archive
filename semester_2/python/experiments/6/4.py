persons = {'Alice': 'New York', 'Bob': 'Los Angeles', 'Charlie': 'New York'}
print("Names:", list(persons.keys()))
print("Cities:", list(persons.values()))
for name, city in persons.items():
    print(f"{name} lives in {city}")
city_count = {}
for city in persons.values():
    if city in city_count:
        city_count[city] += 1
    else:
        city_count[city] = 1
print("City count:", city_count)