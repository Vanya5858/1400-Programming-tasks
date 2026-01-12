# Вариант 1: без генератора списка
print("=== Вариант 1 (без генератора списка) ===")

n = int(input("Введите размер массива: "))
arr = []
for i in range(n):
    num = int(input(f"Введите элемент {i+1}: "))
    arr.append(num)

k = int(input(f"Введите индекс k (0-{n-1}): "))
while k < 0 or k >= n:
    print("Неверный индекс!")
    k = int(input(f"Введите индекс k (0-{n-1}): "))

# Создаем новый массив без элемента с индексом k
new_arr = []
for i in range(n):
    if i != k:
        new_arr.append(arr[i])

print(f"\nИсходный массив: {arr}")
print(f"Новый массив (без элемента с индексом {k}): {new_arr}")

# Вариант 2: с генератором списка
print("\n=== Вариант 2 (с генератором списка) ===")

arr2 = []
for i in range(n):
    num = int(input(f"Введите элемент {i+1}: "))
    arr2.append(num)

k2 = int(input(f"Введите индекс k (0-{n-1}): "))
while k2 < 0 or k2 >= n:
    print("Неверный индекс!")
    k2 = int(input(f"Введите индекс k (0-{n-1}): "))

# Используем генератор списка
new_arr2 = [arr2[i] for i in range(n) if i != k2]

print(f"\nИсходный массив: {arr2}")
print(f"Новый массив (без элемента с индексом {k2}): {new_arr2}")

# Дополнительная информация
print(f"\nУдаленный элемент: {arr[k]}")
print(f"Размер исходного массива: {len(arr)}")
print(f"Размер нового массива: {len(new_arr)}")
