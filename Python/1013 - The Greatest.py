a, b, c = map(int, input().split())

maiorab = (a + b + abs(a - b))/2
maiorac = (maiorab + c + abs(maiorab - c))/2

print(f"{int(maiorac)} eh o maior")

# One-liner
# print(f"{int(((a + b + abs(a - b))/2 + c + abs((a + b + abs(a - b))/2 - c))/2)} eh o maior")
