print("Enter seconds")
sec: int = int(input())
print(f'Hours: {sec//3600},Minutes: {sec//60},Seconds: {sec % 60}')