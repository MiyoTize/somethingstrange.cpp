#include <iostream>
#include <cmath>

#include "ANSWER.h"

int ANSWER ( answer ) {

    return answer;
}





system ("chcp 1251>nul");

const double pi = 3.1418;
const int az = 360;
double sector[360]; 


auto param[14] { // МАССИВ ПАРАМЕТРОВ

param[0] = a; // Сторона a
param[1] = b; // Сторона b
param[2] = c; // Сторона c
param[4] = d; // 
param[5] = e; //
param[6] = f; //

// Первый треугольник
param[7] = fcf; // Угол 1
param[8] = fcs; // Угол 2
param[9] = fct; // Угол 3
param[10] = fh; // Высота 1

// Второй треугольник
param[11] = scf; // Угол 1
param[12] = scs; // Угол 2
param[13] = sct; // Угол 3
param[14] = sh;  // Высота 2

param[15] = fp; // Периметр
param[16] = sp; //
param[17] = fs; // Площадь
param[18] = ss; //
param[19] = fv; // Обьем
param[20] = sv; //

param[6] = fr; // Радиус
param[22] = sr;
param[7] = fd; // Диаметр
param[24] = sd;
param[9] = ffD; // Диагональ
fsD
sfD
ssD


param[11] = fpv; // Периметр 3D фигуры
spv
param[12] = fsv; // Площадь 3D фигуры
ssv
param[13] = fSv; // Обьем сектора
sSv
}


auto answer0[15] { // МАССИВ ОТВЕТОВ

// English
answer0[0] = yes;
answer0[1] = Yes;
answer0[2] = YES;
answer0[3] = y;
answer0[4] = Y;
answer0[5] = yeah;
answer0[6] = Yeah;
answer0[7] = YEAH;

// Russian
answer0[8] = да;
answer0[9] = Да;
answer0[10] = ДА;
answer0[11] = ага;
answer0[12] = Ага;
answer0[13] = АГА;

// Others
answer0[14] = +;
answer0[15] = 1;
}


std::cout << "Привет, меня зовут Мие. Я могу решить для тебя несколько задач из математики?\n";
          << " Выбирай:\n"

          << "1. Квадрат: нахождение сторон,периметра, площади и обьема для куба\n";
          << "2. Круг: нахождение радиуса, диаметра, периметра, площади, обьема шара,площади сектора и пропорцию всех секторов\n";
          << "3. Прямоугольник: нахождение одной из сторон, периметра, площади, обьем параллелепипед диагоналей и их точки пересечения\n";
          << "4. Треугольник"  
          << "Выбери любой из этих вариантов и напишим мне цифру";
          << "Простейший калькулятор";


std::cin >> int number0;
std::cout << "отличный выбор! Начнем работу!\n";


if ( number0 = 1; ) { // Квадрат
    
    std::cout << "Как назовешь квадрат?";
    std::cin >> name1;
    std::cout << "Знаешь ли ты значение стороны квадрата" << name1 << "?\n" << "Напиши здесь: ";
    std::cin >> auto answer1;

    if ( answer0 = answer1 ) { // Сторона известна
        std::cout << "Отлично. Введи здесь: ";
        std::cin >> double a;
        
        if ( a < 0 ) {
            std::cout << "Ты че? " << std::cin >> danicho << break;
        }
        else {
        double fp = a * 4; 
        double fs = pow (a, 2);
        
        double fv = pow (a, 3);
        double fpv = fp * 3;
        double fsv = fs * 6;
        }
    }

    else {
    
        std::cout << "Очень жаль. Ты знаешь периметр квадрата?\n" << "Напиши здесь: ";
        std::cin >> auto answer1;

        if ( answer0 = answer1 ) { // Периметр квадрата известен 
            std::cout << "Отлично, тогда напиши значение периметра квадрата\n" << "Здесь: ";
            std::cin >> double fp;
        
            if ( fp < 0 ) {
                std::cout << "Ты че? " << std::cin >> danicho << break;
            }
       
            double fa = fp / 4;
            double fs = pow (a, 2);

            double fv = pow (a, 3);
            double fpv = fp * 3;
            double fsv = fs * 6;
        }
    
        else {
    
            std::cout << "Ничего страшного, попробуем через площадь квадрата\n" "Ты же ее знаешь? ";
            std::cin >> auto answer1;
    
            if ( answer0 = answer1 ) { // Площадь квадрата известна

                std::cout << "Хорошо.\n" << "Запиши значение здесь: ";
                std::cin >> double fs;

                if ( fs < 0 ) {
                    std::cout << "Ты че? " << std::cin >> danicho << break;
                }

                double a = pow (fs, 1 / 2);
                double fp = a * 4;

                double fv = pow (a, 3);
                double fpv = fp * 3;
                double fsv = fs * 6;
            }
            
            else {

                std::cout << "Даже площадь квадрата неизвестна? Дай подумать...\n" << "Ты знаешь периметр куба? ";
                std::cin >> auto answer1;

                if ( answer0 = answer1 ) { // Периметр куба известен

                    std::cout << "Сейчас узнаем все остальное.\n" << "Запиши периметр куба тут: ";
                    std::cin >> double fpv;

                    if ( fpv < 0 ) {
                        std::cout << "Ты че? " << std::cin >> danicho << break;
                    }

                    double a = fpv / 12
                    double fp = fa * 4;
                    double fs = pow (a, 2);

                    double fv = pow (a, 3);
                    double fsv = fs * 6;
                }
                
                else {

                    std::cout << "Хммммммм...\n" << "Ты знаешь площадь куба? ";
                    std::cin >> auto answer1;

                    if ( answer0 = answer1 ) { // Площадь куба известна

                        std::cout << "Попробуем. \n" << "Запиши площадь куба здесь: ";
                        std::cin >> double fsv;

                        if ( fsv < 0 ) {
                            std::cout << "Ты че? " << std::cin >> danicho << break;
                        }

                    double a = pow (fsv / 6, 1 / 2); 
                    double fp = a * 4;
                    double fs = pow (a, 2);

                    double fv = pow (a, 3);
                    double fpv = fp * 3;
                    }

                    else {

                        std::cout << "Последний шанс.\n" << "Ты знаешь обьем куба? ";
                        std::cin >> auto answer1;

                        if ( answer0 = answer1 ) { // Обьем куба известен

                            std::cout << "Итак.\n" << "Запиши обем куба здесь: ";
                            std::cin >> double fv;

                            if ( fv < 0 ) {
                            std::cout << "Ты че? " << std::cin >> danicho << break;
                            }

                        double a = pow (fv, 1/3); 
                        double fp = a * 12;
                        double fs = pow (a, 2) * 6;

                        double fpv = fp * 3;
                        double fsv = fs * 6;
                        }
                    }
                }
            }
        }
    }



    std::cout << "Как назовешь второй квадрат?";
    std::cin >> name2;
    std::cout << "Знаешь ли ты значение стороны квадрата" << name2 << "?\n" << "Напиши здесь: ";
    std::cin >> auto answer2;

    if ( answer0 = answer2 ) { // Сторона известна
        std::cout << "Отлично. Введи здесь: ";
        std::cin >> double b;
        
        if ( b < 0 ) {
            std::cout << "Ты че? " << std::cin >> danicho << break;
        }
        else {
        double sp = b * 4; 
        double ss = pow (b, 2);
        
        double sv = pow (b, 3);
        double spv = sp * 3;
        double ssv = ss * 6;
        }
    }

    else {
    
        std::cout << "Очень жаль. Ты знаешь периметр квадрата?\n" << "Напиши здесь: ";
        std::cin >> auto answer2;

        if ( answer0 = answer2 ) { // Периметр квадрата известен 
            std::cout << "Отлично, тогда напиши значение периметра квадрата\n" << "Здесь: ";
            std::cin >> double sp;
        
            if ( sp < 0 ) {
                std::cout << "Ты че? " << std::cin >> danicho << break;
            }
       
            double b = sp / 4;
            double ss = pow (b, 2);

            double sv = pow (b, 3);
            double spv = sp * 3;
            double ssv = pow ss * 6;
        }
    
        else {
    
            std::cout << "Ничего страшного, попробуем через площадь квадрата\n" "Ты же ее знаешь? ";
            std::cin >> auto answer2;
    
            if ( answer0 = answer2 ) { // Площадь квадрата известна

                std::cout << "Хорошо.\n" << "Запиши значение здесь: ";
                std::cin >> double ss;

                if ( ss < 0 ) {
                    std::cout << "Ты че? " << std::cin >> danicho << break;
                }

                double b = pow (ss, 1 / 2);
                double sp = b * 4;

                double sv = pow (b, 3);
                double spv = sp * 3;
                double ssv = ss * 6;
            }
            
            else {

                std::cout << "Даже площадь квадрата неизвестна? Дай подумать...\n" << "Ты знаешь периметр куба? ";
                std::cin >> auto answer2;

                if ( answer0 = answer2 ) { // Периметр куба известен

                    std::cout << "Сейчас узнаем все остальное.\n" << "Запиши периметр куба тут: ";
                    std::cin >> double spv;

                    if ( spv < 0 ) {
                        std::cout << "Ты че? " << std::cin >> danicho << break;
                    }

                    double b = spv / 12
                    double sp = b * 4;
                    double ss = pow (b, 2);

                    double sv = pow (b, 3);
                    double ssv = ss * 6;
                }
                
                else {

                    std::cout << "Хммммммм...\n" << "Ты знаешь площадь куба? ";
                    std::cin >> auto answer2;

                    if ( answer0 = answer2 ) { // Площадь куба известна

                        std::cout << "Попробуем. \n" << "Запиши площадь куба здесь: ";
                        std::cin >> double ssv;

                        if ( ssv < 0 ) {
                            std::cout << "Ты че? " << std::cin >> danicho << break;
                        }

                    double b = pow (ssv / 6, 1 / 2); 
                    double sp = b * 4;
                    double ss = pow (b, 2);

                    double sv = pow (b, 3);
                    double spv = sp * 3;
                    }

                    else {

                        std::cout << "Последний шанс.\n" << "Ты знаешь обьем куба? ";
                        std::cin >> auto answer2;

                        if ( answer0 = answer2 ) { // Обьем куба известен

                            std::cout << "Итак.\n" << "Запиши обем куба здесь: ";
                            std::cin >> double sv;

                            if ( sv < 0 ) {
                            std::cout << "Ты че? " << std::cin >> danicho << break;
                            }

                        double b = pow (sv, 1/3); 
                        double sp = b * 12;
                        double ss = pow (b, 2) * 6;

                        double spv = sp * 3;
                        double ssv = ss * 6;
                        }
                    }
                }
            }
        }
    }


    std::cout   << "Отлично, держи значения для " << name1 << ":\n"

                << "Длинна стороны = "    << a   << "\n";
                << "Периметр квадрата = " << fp  << "\n";
                << "Площадь квадата = "   << fs  << "\n";
                << "Периметр куба = "     << fpv << "\n";
                << "Площадь куба = "      << fsv << "\n";
                << "Обьем куба = "        << fv  << "\n";


    std::cout   << "Пропорции первого и второго квадратов:\n"

                << "Стороны: "       << a / b     << "\n"; 
                << "Периметров: "    << fp / sp   << "\n";
                << "Площадей: "      << fs / ss   << "\n";

                << "Пропорции первого и второго кубов:\n";
                
                << "Периметров: "    << fpv / spv << "\n";
                << "Площадей: "      << fsv / ssv << "\n";
                << "Обьемов: "       << fv / sv   << "\n";
}



if ( number0 = 2; ) { // Круг

    int sum = 0; // Сумма секторов

    std::cout << "Тебе известны сектора круга?\n"; 
    std::cin >> answer1;
    if ( answer0 = answer1 ) {
        std::cout << "Укажи количество секторов. Не больше 360 секторов. : \n";
        std::cin >> int n;

        if ( fsum || fsum >= 360 ) {
            std::cout << "Ошибка!";    
            return 1;
        }

        std::cout << "Введи значения ( от 0 до 360 )" << std::endl;
    
        for ( int i = 0; i < n; i++ ) {
            std::cout << "Значение " << i++ << ":";
            std::cin >> sector[i];

            if ( sector[i] > 360 ) {
                std::cout << "Значение не может быть более 360" << std::endl;
                return 1;
            }

            sum += sector[i];
        } 

        if ( 0 >= sum || sum >= 360 ) {
            std::cout << "Сумма значений не может быть больше 360" << std::endl;
            return 1;
        }

        return 0;
    }


    std::cout << "Ты знаешь радус круга?\n" << "Напиши здесь: "
    std::cin << auto answer1;
    
        if ( answer0 = answer1 ) {

            std::cout << "Чиназес! напиши радиус тут: ";
            std::cin << double r;
            

            // Тут как то нужно написать цикл, где в массив принимаются значения до тех пор, пока не введут что то кроме answer0

            if ( ) 


            d = r * 2;

            p = 2 * pi * r;
            s = pi * pow (r, 2);
            sv = 4 * pi * pow (r, 2);
            v = ;
        }

    std::cout << "Сумма значений: " << sum << std::endl;
}


if ( number0 = 3 ) { // Прямоугольник

    std::cout << "Отличный выбор. Как назовешь прямоугольник? ";
    std::cin >> name1;
    std::cout << "Может ты знаешь две строны прямоугольника " << name1 << "?\n" << "Напиши тут: ";
    std::cin << auto answer3;
        
    if ( answer0 = answer3 ) {
        std::cout << "Тогда запиши стороны здесь: ";
        std::cin << double a << double b;
    }

    else {
        std::cout << "Ты знаешь периметр прямоугольника?";
        std::cin >> auto answer3;
        if ( answer0 = answer3 ) {
            std::cout << "Введи периметр здесь: ";
            std::cin >> double fp;
        }

        else {



        }
    }     
}


if ( number0 = 4 ) { // Треугольник

    std::cout << "Как назовем треугольник?\n"; // Первый треугольник 
    std::cin >> name1;
    std::cout << "Ты знаешь один угол и две прилежащие стороны у треугольника " << name1 << "? \n" << "Напиши здесь: ";
    std::cin >> auto answer1;
    
    if ( answer0 = answer1 ) { // Сторона и два прилежащих угла треугольника name1
        std::cout << "Напиши здесь угол и две прилежащих стороны треугольника " << name1 << "\n" << "Тут: ";
        std::cin >> double ffc >> double a >> double c;

        if ( ffc <= 0 || ffc >= 360 ) { // Проверка угла
            std::cout << "Такого треугольника не может существовать";
            return 0;
        }
        // ЗДЕСЬ ДОЛЖНА БЫТЬ ФОРМУЛА СИНУССОВ И КОСИНУСОВ. НУ, ТУТ Я И УСНУЛ
    }
    else{
        // Тут уже другая формула
    }

    std::cout << "Нам нужен второй треугольник? \n"; // Второй треугольник
    std::cin >> auto answer2;

    if ( answer0 = answer2 ) { // Второй треугольника
        std::cout << "Как назовем второй треугольник?\n";
        std::cin >> name2;
        std::cout << "Ты знаешь один угол и две прилежащие стороны у треугольника " << name2 << "? \n" << "Напиши здесь: ";
        std::cin >> auto answer1;
    
        if ( answer0 = answer1 ) { // Сторона и два прилежащих угла треугольника name2
            std::cout << "Напиши здесь угол и две прилежащих стороны треугольника " << name2 << "\n" << "Тут: ";
            std::cin >> double sfc >> double d >> double f;
            if ( sfc <= 0 || sfc >= 360 ) { // Проверка угла
                std::cout << "Такого треугольника не может существовать";
                return 0;
            }
        // ТУТ ТОЖЕ
        }
        else{
            // И тут другая формула
        }    
    }
        


    std::cout << "Ты знаешь один угол и две прилежащие стороны у треугольника " << name2 << "? \n" << "Напиши здесь: ";
    std::cin >> auto answer1;
    
    if ( answer0 = answer1 ) { // Сторона и два прилежащих угла треугольника name2
        std::cout << "Напиши здесь угол и две прилежащих стороны треугольника " << name2 << "\n" << "Тут: ";
        std::cin >> double sfc >> double d >> double f;

        if ( sfc <= 0 || sfc >= 360 ) { // Проверка угла
            std::cout << "Такого треугольника не может существовать";
            return 0;
        }

        // ТУТ ТОЖЕ

    }

    // НЕ ТРОГАТЬ НЕ ТРОГАТЬ НЕ ТРОГАТЬ ТРАВУ НЕ ТРОГАТЬ НЕ ТРОГАТЬ НЕ ТРОГАТ НЕ ТРОГАТЬ
    std::cout << "Ты знаешь хотя бы один угол и две прилежащие стороны у треугольника " << name1 << "? \n" << "Напиши здесь: ";
    std::cin >> auto answer1;
    
    if ( answer0 = answer1 ) { // Угол первого треугольника
        std::cout << "Напиши здесь два угла треугольника " << name1 << ": \n";
        std::cin >> double fcf >> double fcs;
        if ( fcf + fcs > 0 || fcf + fcs < 0 ) { // Проверка углов
            std::cout << "Такого треугольника не может существовать";
            return 0;
        }

    double fct = az - (fcf + fcs);




    pf = a + b + c; // Периметр первого треугольника 
    ps = d + e + f; // Периметр второго 
    prp = pf : ps;  // Пропорция периметров


        if ( fcf = 90 || fcs = 90 || fct = 90 || fcf + fcs = 90 || fcs + fct = 90 || fcf + fct = 90 ) {
            if ( fcf + fcs = 90 ) { // Нахождение 3го угла 90 и высоты первого треугольника
                fct = 90;
                fh = a;
                fj = b;
            }
            if ( fcs + fct = 90 ) {
                fcf = 90;
                fh = b;
                fj = c;
            }
            if ( fcf + fct = 90 ) {
                fcs = 90;
                fh = c;
                fj = a;
            }
        
            double fs = 0.5 * fj * fh;
        }
    }  

    std::cout << "Ты знаешь хотя бы два угла у треугольника " << name2 << "? Напиши здесь: \n";
    std::cin >> auto answer2;

    if ( answer0 = answer2 ) { // Два угла второго треугольника
        std::cout << "Напиши здесь два угла треугольника " << name2 << ": \n";
        std::cin >> double scf >> double scs;
            if ( scf + scs > 0 || scf + scs < 0 ) { // Проверка углов
                std::cout << "Такого треугольника не может существовать";
                return 0;
            }  
    
    double fct = az - (fcf + fcs);
 

        if ( scf = 90 || scs = 90 || sct = 90 || scf + scs = 90 || scs + sct = 90 || scf + sct = 90 ) {
            if ( scf + scs = 90 ) { // Нахождение 3го угла 90 и высоты первого треугольника
                sct = 90;
                sh = d;
                sj = e;
            }
            if ( fcs + fct = 90 ) {
                fcf = 90;
                fh = e;
                sj = f;
            }
            if ( fcf + fct = 90 ) {
                fcs = 90;
                fh = f;
                sj = d;
            }
        
            double ss = 0.5 * sj * sh;
        }
    }


    if ( fcf = fcs || fcs = fct || fcf = fct ) {
        std::cout << "Треугольник " << name1 << " равнобедренный \n";
    }
    else if ( fcf = fcs && fcs = fct ) {
        std::cout << "Треугольник " << name1 << " равносторонний, каждый угол равен 60 градусам \n";
    }
    else{
        std::cout << "Треугольник " << name1 << " разносторонний \n"
    }

    if ( scf = scs || scs = sct || scf = sct ) {
        std::cout << "Треугольник " << name2 << " равнобедренный \n";
    }
    else if ( scf = scs && scs = sct ) {
        std::cout << "Треугольник " << name2 << " равносторонний, каждый угол равен 60 градусам \n";
    }
    else{
        std::cout << "Треугольник " << name2 << " разносторонний \n"
    }


    std::cout   << "Отлично, держи значения:\n"

                << "Длинна стороны = "    << a  << "\n"
                << "Периметр квадрата = " << p  << "\n"
                << "Площадь квадата = "   << s  << "\n"
                << "Периметр куба = "     << pv << "\n"
                << "Площадь куба = "      << sv << "\n"
                << "Обьем куба = "        << v  << "\n";


    std::cout   << "Пропорции первого и второго квадратов:\n"

                << "Стороны: "       << af:as   << "\n" 
                << "Периметров: "    << pf:ps   << "\n"
                << "Площадей: "      << sf:ss   << "\n"

                << "Пропорции первого и второго кубов:\n";
                
                << "Периметров: "    << pvf:pvs << "\n"
                << "Площадей: "      << svf:svs << "\n"
                << "Обьемов: "       << vf:vs   << "\n"
}



std::cout << "Все? \n";
std::cin >> answer1;
if ( answer0 = answer1 ) {
    system ("pause>nul");
    return 0;
}
