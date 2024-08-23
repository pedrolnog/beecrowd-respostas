dinheiro = float(input())
notas = [100, 50, 20, 10, 5, 2]
moedas = [1.0, 0.50, 0.25, 0.10, 0.05, 0.01]

print("NOTAS:")

for i in notas:
    print(f"{int(dinheiro / i)} nota(s) de R$ {i:.2f}")
    dinheiro %= i

print("MOEDAS:")

for i in moedas:
    print(f"{int(dinheiro / i)} moeda(s) de R$ {i:.2f}")
    dinheiro = round(dinheiro % i, 2)
