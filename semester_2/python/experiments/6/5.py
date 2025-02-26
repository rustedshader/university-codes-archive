movies = {
    'Movie1': {'year': 2010, 'director': 'Director1', 'cost': 100, 'collection': 150},
    'Movie2': {'year': 2016, 'director': 'Director2', 'cost': 200, 'collection': 180},
    'Movie3': {'year': 2014, 'director': 'Director1', 'cost': 120, 'collection': 130},
}

for movie, details in movies.items():
    print(f"Movie: {movie}, Details: {details}")

print("Movies released before 2015:")
for movie, details in movies.items():
    if details['year'] < 2015:
        print(movie)

print("Movies that made a profit:")
for movie, details in movies.items():
    if details['collection'] > details['cost']:
        print(movie)

director_name = input("Enter director name: ")
print(f"Movies directed by {director_name}:")
for movie, details in movies.items():
    if details['director'] == director_name:
        print(movie)