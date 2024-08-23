dinheiro = int(input())
notas = [100, 50, 20, 10, 5, 2, 1]

print(dinheiro)

for i in notas:
    print(f"{dinheiro//i} nota(s) de R$ {i},00")
    dinheiro = dinheiro % i
