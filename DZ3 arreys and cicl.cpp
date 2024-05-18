#include <iostream>


int main()
{
    setlocale(LC_ALL, "rus");
    ////ЦИКЛЫ

    //Задание 1
    /*
    int s;
    int R;
    do
    {
        std::cout << "Введите размерность квадрата: ";
        std::cin >> R;

        if (R <= 0)
        {
            std::cout << "Сторона квадрата должна быть больше 0." << std::endl;
            return 0;
        }
        std::cout << "Выбирите вариант для построения (1-10). 0 для выхода.";
        std::cin >> s;

        for (int i = 1; i <= R; i++)
        {
            for (int j = 1; j <= R; j++)
            {
                switch (s)
                {
                case 0: return 0;
                    break;
                case 1: if (j >= i) std::cout << "*"; else std::cout << " ";
                    break;
                case 2: if (j <= i) std::cout << "*"; else std::cout << " ";
                    break;
                case 3: if (j >= i && i + j <= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 4: if (j <= i && i + j >= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 5: if (j >= i && i + j <= R + 1 || j <= i && i + j >= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 6: if (j <= i && i + j <= R + 1 || j >= i && i + j >= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 7: if (j <= i && i + j <= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 8: if (j >= i && i + j >= R + 1) std::cout << "*"; else std::cout << " ";
                    break;
                case 9: if (j + i > R + 1) std::cout << " "; else std::cout << "*";
                    break;
                case 10: if (j + i < R + 1) std::cout << " "; else std::cout << "*";
                    break;
                default: std::cout << "Неправильный выбор! Прекращение работы программы!!!" << std::endl;
                    return 0;
                    break;
                }
            }
            std::cout << std::endl;
        }


    } while (s);
    */

    //Задание 2, 3
    std::cout << "Задание 2, 3" << std::endl;
    int count = 0;
    int count1 = 0;

    for (int i = 100; i <= 999; i++)
    {
        int c = i % 10; //единицы
        int b = (i % 100 - c) / 10; //десятки
        int a = i / 100; // сотни
        if (a == b || a == c || b == c)
        {
            count++;
        }
        if (a != b && a != c && b != c)
        {
            count1++;
        }
    }
    std::cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры: " << count << std::endl;
    std::cout << "Количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные: " << count1 << std::endl;

    //Задание 4 
    std::cout << "Задание 4" << std::endl;
    std::string numStr;
    std::string newNumStr;
Label1:
    std::cout << "Введите целое число: ";
    std::cin >> numStr;

    for (int i = 0; i < numStr.size(); i++)
    {
        if (numStr[i] < 48 || numStr[i] > 57)
        {
            std::cout << "Вы ввели некорректное значение!!!";
            goto Label1;
        }
    }

    std::cout << "Получилось число: ";
    for (int i = 0; i < numStr.size(); i++)
    {
        if (numStr[i] != '3' && numStr[i] != '6')
        {
            newNumStr[i] += numStr[i];
        }
        std::cout << newNumStr[i];
    }

    std::cout << std::endl << std::endl;

    //Задание 5
    std::cout << "Задание 5" << std::endl;
    int num, res;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Введите число: ";
    std::cin >> res;
    for (int i = 0; i < num; i++)
    {
        if (i % (res * res) == 0 && i % (res * res * res) != 0)
        {
            std::cout << i << std::endl;
        }
    }
    std::cout << std::endl << std::endl;

    //Задание 6 
    std::cout << "Задание 6" << std::endl;
    int num1 = 0, sum = 0;
    std::cout << "Введите число: ";
    std::cin >> num1;
    for (int i = 0; i < num1; i++)
    {
        sum += i;

    }
    if (sum * sum * sum == num1 * num1)
    {
        std::cout << "Куб суммы чисел числа " << num1 << " РАВЕН квадрату числа " << num1 << std::endl;
    }
    else {
        std::cout << "Куб суммы чисел числа " << num1 << " НЕ РАВЕН квадрату числа " << num1 << std::endl;
    }
    std::cout << std::endl << std::endl;

    //Задание 7 
    std::cout << "Задание 7" << std::endl;
    int num2 = 0;
    std::cout << "Введите число: ";
    std::cin >> num2;
    int res2 = 0;
    for (int i = 1; i <= num2; i++)
    {
        if (num2 % i == 0)
        {
            std::cout << i << '\t';
        }
    }
    std::cout << std::endl << std::endl;

    //Задание 8 
    std::cout << "Задание 8" << std::endl;
    int number1 = 0, number2 = 0;
    std::cout << "Введите два целых числа: ";
    std::cin >> number1 >> number2;
    if (number1 >= number2)
    {
        for (int i = 1; i <= number1; i++) {
            if (number1 % i == 0 && number2 % i == 0)
            {
                std::cout << i << '\t';
            }
        }
    }
    else {
        for (int i = 1; i <= number2; i++) {
            if (number1 % i == 0 && number2 % i == 0)
            {
                std::cout << i << '\t';
            }
        }
    }
    std::cout << std::endl << std::endl;

    //Задание 9 
    std::cout << "Задание 9" << std::endl;

    int val = 0, count2 = 0, sum11 = 0;
    std::cout << "Введите число: ";
    std::cin >> val;
    int cnt = 0;
    while (val != 0)
    {
        if (val % 10 == 0)
        {
            cnt++;
        }
        sum11 += val % 10;
        val /= 10;
        count2++;

    }
    std::cout << "Количество цифр в числе " << count2 << std::endl;
    std::cout << "Сумма чисел равна " << sum11 << std::endl;
    std::cout << "Среднее арифметическое равно " << static_cast<double>(sum11) / static_cast<double>(count2) << std::endl;
    std::cout << "Количество нулей равно " << cnt << std::endl;

    //Задание 10
    int size = 10;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "+++";
            }
            else {
                std::cout << "___";
            }
        }
        std::cout << std::endl;
    }

    //// МАССИВЫ
    //Задача 1
    const int SIZE = 10;
    int arr[SIZE];
    std::cout << "Массив: ";
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;

    int min = 0, max = 0;
    min = max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    std::cout << "Минимальное значение элемента массива: " << min << std::endl;
    std::cout << "Максимальное значение элемента массива: " << max << std::endl;

    //Задание 2 
    const int SIZE1 = 12;
    int arr1[SIZE1];
    int numMax = 0;//Прибыль фирмы за 12 месяцев
    std::cout << "Введите прибыль предприятия за год: ";
    std::cin >> numMax;

    std::cout << "Ежемесячная прибыль составляет: ";
    for (int i = 1; i <= 12; i++)
    {
        arr1[i] = rand() % (numMax);
        std::cout << arr1[i] << '\t';
    }
    std::cout << std::endl;

    int minMonth, maxMonth;
    int max1 = 0;
    std::cout << "Введите временной диапазон (по месяцам) для которого необходимо расчитать прибыль: ";
    std::cin >> minMonth >> maxMonth;
    max1 = arr1[minMonth];
    int zzzz;
    for (int i = minMonth; i <= maxMonth; i++)
    {
        std::cout << arr1[i] << '\t';
        if (arr1[i] > max1) {
            max1 = arr1[i];
            zzzz = i;
        }
    }
    switch (zzzz) {
    case 1:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в январе" << std::endl;
        break;
    case 2:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в феврале" << std::endl;
        break;
    case 3:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в марте" << std::endl;
        break;
    case 4:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в апреле" << std::endl;
        //break;
    case 5:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в мае" << std::endl;
        break;
    case 6:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в июне" << std::endl;
        break;
    case 7:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в июле" << std::endl;
        break;
    case 8:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в августе" << std::endl;
        break;
    case 9:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в сентябре" << std::endl;
        break;
    case 10:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в октябре" << std::endl;
        break;
    case 11:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в ноябре" << std::endl;
        break;
    case 12:
        std::cout << "Максимальная прибыль за отчетный период составляет: " << max1 << " в декабре" << std::endl;
        break;
    }


    //Задание 3 
    const int N = 10;
    int arrRand[N];
    std::cout << "Массив: ";
    for (int i = 0; i < N; i++)
    {
        arrRand[i] = rand() % 21 - 10;
        std::cout << arrRand[i] << '\t';
    }
    std::cout << std::endl;

    //Сумма отрицательных элементов
    int sumNegative = 0;
    for (int i = 0; i < N; i++)
    {
        if (arrRand[i] < 0)
        {
            sumNegative += arrRand[i];
        }
    }
    std::cout << "Сумма отрицательных элементов равна: " << sumNegative << std::endl;


    //Произведение элементов с четными номерами
    int proizv = 1;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            proizv *= arrRand[i];
        }
    }
    std::cout << "Произведение элементов с четными номерами равно: " << proizv << std::endl;

    int indexFistMinus, indexLastMinus;
    //ищем первый отрицательный элемент
    for (int i = 0; i < N; i++)
    {
        if (arrRand[i] < 0)
        {
            indexFistMinus = i;
            break;
        }
    }
    //ищем последний отрицательный элемент
    for (int i = N; i > 0; i--)
    {
        if (arrRand[i] < 0)
        {
            indexLastMinus = i;
            break;
        }
    }

    //Вычисляем сумму элементов, находящихся между первым и последним отрицательным элементами
    int sumElemMinus = 0;
    for (int i = indexFistMinus + 1; i < indexLastMinus - 1; i++)
    {
        sumElemMinus += arrRand[i];
    }
    std::cout << "Cумма элементов, находящихся между первым и последним отрицательным элементами равна: " << sumElemMinus << std::endl;

    //Вычисляем произведение элементов, находящихся между min и max элементами
    int proizvBetweenMinMax = 1;
    int minBetv = 0, maxBetv = 0;
    int indexMin = 0, indexMax = 0;
    min = max = arrRand[0];
    for (int i = 0; i < N; i++)
    {
        if (arrRand[i] < minBetv)
        {
            minBetv = arrRand[i];
            indexMin = i;
        }
        if (arrRand[i] > maxBetv)
        {
            maxBetv = arrRand[i];
            indexMax = i;
        }
    }

    if (indexMin < indexMax)
    {
        for (int i = indexMin + 1; i < indexMax - 1; i++)
        {
            proizvBetweenMinMax *= arrRand[i];
        }
    }
    else
    {
        for (int i = indexMax + 1; i < indexMin - 1; i++)
        {
            proizvBetweenMinMax *= arrRand[i];
        }
    }
    std::cout << "Произведение элементов, находящихся между min и max элементами равно: " << proizvBetweenMinMax << std::endl;

    //Задание 4 
    const int SIZE3 = 10;
    const int SIZE4 = 5;
    const int SIZE5 = 5;
    int arr3[SIZE3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arr4[SIZE4];
    int arr5[SIZE5];

    std::cout << "Первый массив размером 10 составляет: ";
    for (int i = 0; i < SIZE3; i++)
    {
        std::cout << arr3[i] << '\t';
    }
    std::cout << std::endl;


    std::cout << "Второй массив размером 5 составляет: ";
    for (int i = 0; i < (SIZE3 - SIZE4); i++)
    {
        arr4[i] = arr3[i];
        std::cout << arr4[i] << '\t';
    }
    std::cout << std::endl;

    std::cout << "Третий массив размером 5 составляет: ";
    for (int i = SIZE4; i < SIZE3; i++)
    {
        arr5[i] = arr3[i];
        std::cout << arr5[i] << '\t';
    }
    std::cout << std::endl;

    //Задание 5 

    const int size1 = 10;
    const int size2 = 10;
    const int size3 = 10;
    int Arr1[size1];
    int Arr2[size2];
    int Arr3[size3];

    std::cout << "Первый массив: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Arr2[i] = rand() % 50;
        std::cout << Arr2[i] << '\t';
    }
    std::cout << std::endl;

    std::cout << "Второй массив: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Arr3[i] = rand() % 100;
        std::cout << Arr3[i] << '\t';
    }
    std::cout << std::endl;

    std::cout << "Сумма двух массивов: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Arr1[i] = Arr2[i] + Arr3[i];
        std::cout << Arr1[i] << '\t';
    }
    std::cout << std::endl;

    return 0;
}
