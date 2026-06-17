/// <summary>
/// Точка входа в программу.
/// Вычисляет число Фибоначчи и выводит результат на экран.
/// </summary>
int result = Fibonacci(5);
Console.WriteLine(result);

/// <summary>
/// Вычисляет число Фибоначчи по указанному номеру.
/// </summary>
/// <param name="n">
/// Позиция числа в последовательности Фибоначчи.
/// </param>
/// <returns>
/// Возвращает число Фибоначчи для указанного значения <paramref name="n"/>.
/// </returns>
static int Fibonacci(int n)
{
    Console.WriteLine("The output is: ");

    int n1 = 0;
    int n2 = 1;
    int sum;

    for (int i = 2; i <= n; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }

    return n == 0 ? n1 : n2;
}