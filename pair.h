#pragma once
#include <iostream>
#include <string>



/**
 * @brief класс pair для работы с парами чисел
 */
class pair {

protected:

    /**
     * @brief инициализация переменной first
     */
    int first; 

    /**
     * @brief инициализация переменной second
     */
    int second;

public:

    /**
     * @brief Сеттер для первого объекта
     */
    void set_first(int t);
    
    /**
     * @brief Сеттер для второго объекта
     */
    void set_second(int t);
    
    /**
     * @brief Геттер для первого объекта
     */
    int get_first();
    
    /**
     * @brief Геттер для второго объекта
     */
    int get_second();
    
    /**
     * @brief Конструктор новой пары объектов
     */
    pair(int ta=0, int tb=0):first(ta), second(tb){};
    
    /**
     * @brief Нашел интересный вариант написания похожей программы с использованием знаков операторов вместо названия методов в интернете.
     * Решил использовать подобный вариант в своей программе, так как выглядит он аккуратней и является интуитивно понятным.
     * В данном случае происходит сравнение.
     * @return true 
     * @return false 
     */
    friend bool operator > (pair, pair);
    
    /**
     * @brief Сравнение другого варианта событий.
     * @return true 
     * @return false 
     */
    friend bool operator < (pair, pair);
    
    /**
     * @brief Сравнение другого варианта событий.
     * @return true 
     * @return false 
     */
    friend bool operator == (pair, pair);
    
    /**
     * @brief Сравнение другого варианта событий.
     * @return true 
     * @return false 
     */
    friend bool operator != (pair, pair);
};
    /**
     * @brief Метод сравнения p1 и p2.
     */
    bool operator > (pair p1, pair p2);

    /**
     * @brief Метод сравнения p1 и p2.
     */
    bool operator < (pair p1, pair p2);

    /**
     * @brief Метод сравнения p1 и p2.
     */
    bool operator == (pair p1, pair p2);

    /**
     * @brief Метод сравнения p1 и p2.
     */
    bool operator != (pair p1, pair p2);

/**
 * @brief Класс-наследник fraction.
 * 
*/

class fraction: public pair
{
public:
    /**
     * @brief Устанавливает второй объект.
     */
    void set_second(int t);
    
    /**
     * @brief Метод вывода.
     * 
     */
    void print();
    
    /**
     * @brief Конструктор нового объекта.
     */
    fraction(const int& f=0, const int& s=1): pair(f, s){};
   
 
};