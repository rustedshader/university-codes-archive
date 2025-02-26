a = [
    {
        'Iphone 15': {
        'price': 1500,
        'brand': 'Apple',
        'rating': 5.0
        }

    },
    {
        'Samsung Galaxy S20': {
        'price': 1200,
        'brand': 'Samsung',
        'rating': 3.5
        }
    },
    {
        'One Plus 8': {
        'price': 1000,
        'brand': 'One Plus',
        'rating': 4.0
        }
    }
]

max = float('-inf')
max_index_name = ''
max_rating = float('-inf')
max_index_rating_name = ''

for z,k in enumerate(a):
    for p in k:
        if a[z][p]['price'] > max:
            max = a[z][p]['price']
            max_index_name = p
        if a[z][p]['rating'] > max_rating:
            max_rating = a[z][p]['price']
            max_index_rating_name = p

print('Max Price',max_index_name)
print('Max Price',max_index_rating_name)
print()
for z,k in enumerate(a):
    for p in k:
        if a[z][p]['rating'] > 4:
            print(p)

d1 = {'a':1,'b':2,'c':3}
d2 = {'a':5,'b':4,'c':2}

print(sorted(d2))
x = d1.pop('a')
print(x)
print(d1)
z = d1.popitem()
print(z)
print(d1)


# d1.update
# d1.update(d2)
# print(d1)
import random

# random.choices()

print(*d2.values(),sep='\n')