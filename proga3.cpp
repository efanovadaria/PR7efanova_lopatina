using System;

/// <summary>
/// Демонстрация работы отладчика Visual Studio.
/// Программа формирует имя посимвольно и выводит сообщения в консоль.
/// </summary>
class ArrayExample
{
    /// <summary>
    /// Точка входа в приложение.
    /// </summary>
    static void Main()
    {
        char[] letters =
        {
            'f', 'r', 'e', 'd', ' ',
            's', 'm', 'i', 't', 'h'
        };

        string name = "";

        int[] a = new int[10];

        for (int i = 0; i < letters.Length; i++)
        {
            name += letters[i];

            a[i] = i + 1;

            SendMessage(name, a[i]);
        }

        Console.ReadKey();
    }

    /// <summary>
    /// Выводит приветственное сообщение в консоль.
    /// </summary>
    /// <param name="name">
    /// Имя, сформированное из массива символов.
    /// </param>
    /// <param name="msg">
    /// Текущее значение счётчика.
    /// </param>
    static void SendMessage(string name, int msg)
    {
        Console.WriteLine(
            "Hello, " + name + "! Count to " + msg);
    }
}