a, b, c, d = map(int, input().split())

if b > c and d > a and c + d > a + b and d > a and a % 2 == 0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")

