#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE_ST 5
#define SIZE_SK 14

int lvl_up(int * xp_up, int stat[], int size_st, int skills[], int size_sk);
int up_skill(int point, int skill[], int count);

int main(void)
{
  int stat[SIZE_ST] = {5, 2, 7, 2, 7};
  int skills[SIZE_SK];
  int xp;
  int f, s;

  system("chcp 65001");

  for(f = 0; f < SIZE_SK; f++)
  {
    skills[f] = 33;
  }

  puts("Имеем на сейчас:");
  for(f = 0, s = 0; f < SIZE_ST || s < SIZE_SK; f++, s++)
  {
    if(f < SIZE_ST)
    {
      printf("%d. = %d", f, stat[f]);
      printf("%5d. = %d\n", s, skills[s]);      
    }
    else
      printf("%11d. = %d\n", s, skills[s]);   
  } 
  
  puts("Введите опыт. Если его больше или он равен 100, то будет повышение. Если нет, то конец.");
  scanf("%d", &xp);  
  lvl_up(&xp, stat, SIZE_ST, skills, SIZE_SK);  
 
  return 0;    
}

int lvl_up(int * xp_up, int stat[], int size_st, int skills[], int size_sk)
{
    int skill_point = 10;
    int choice;
    int point_up;
    char further;

    if(*xp_up >= 100)
    {
        puts("Поздравляем! У вас повышение.");
        puts("Выберите что-нибудь и оно будет увуличено на 1");
        printf("1. Интелект = %d\n"
               "2. Сила = %d\n"
               "3. Ловкость = %d\n"
               "4. Эмпатия = %d\n"
               "5. Восприятие = %d\n", stat[0], stat[1], stat[2], stat[3], stat[4]);

        while(scanf("%d", &choice) != 1 || choice < 1 || choice > 5)
        {
            if(choice < 1 || choice > 5)
            {
                puts("Выеберите что-то из предложенного.");
                continue;
            }            
        }       

        switch(choice)
        {
            case 1:
              stat[0]++;
              skills[0] += 3;
              skills[1] += 3;
              skills[2] += 3;
              break;
            case 2:
              stat[1]++;
              skills[3] += 3;
              skills[4] += 3;
              break;
            case 3:
              stat[2]++;
              skills[5] += 3;
              skills[6] += 3;
              skills[7] += 3;
              break;
            case 4:
              stat[3]++;
              skills[8] += 3;
              skills[9] += 3;
              skills[10] += 3;
              break;
            case 5:
              stat[4]++;
              skills[11] += 3;
              skills[12] += 3;
              skills[13] += 3;
              break;
        }

        printf("Теперь распределим еще %d очков!\n", skill_point);

        while(skill_point > 0)
        {            
            printf("1. Естественные науки = %d\n"
                   "2. Социальные науки = %d\n"
                   "3. Исторические познания = %d\n"
                   "4. Кулачный бой = %d\n"
                   "5. Мастерство фехтования = %d\n"
                   "6. Воровство = %d\n"
                   "7. Защита = %d\n"
                   "8. Лазание = %d\n"
                   "9. Понимание людей = %d\n"
                   "10. Манипуляции = %d\n"
                   "11. Красноречие = %d\n"
                   "12. Владение огнестрельным оружием = %d\n"
                   "13. Меткость = %d\n"
                   "14. Внимание к мелочам = %d\n", skills[0], skills[1], skills[2], skills[3], skills[4], skills[5], skills[6], skills[7], skills[8], skills[9], skills[10], skills[11], skills[12], skills[13]);

            while(scanf("%d", &choice) != 1 || choice < 1 || choice > 14)
            {
                if(choice < 1 || choice > 14)
                {
                    puts("Повышаем только то, что имеем.");
                    continue;
                }
                else
                {
                    puts("Доброго дня.");
                    exit(EXIT_FAILURE);
                }
            }

            switch(choice)
            {
                case 1:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 2:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 3:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;               
                case 4:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 5:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 6:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 7:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 8:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 9:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 10:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 11:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 12:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 13:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                case 14:
                  skill_point = up_skill(skill_point, skills, (choice - 1));                
                  break;
                default:
                  puts("Выберите что-то из предложенного.");
                  break;
                  
            }
        }

    }
    else
    {
        return 0;
    }

    puts("Вот ваши новые параметры:");
    printf("1. Интелект = %d\n"
           "2. Сила = %d\n"
           "3. Ловкость = %d\n"
           "4. Эмпатия = %d\n"
           "5. Восприятие = %d\n", stat[0], stat[1], stat[2], stat[3], stat[4]);   
    puts("");
    printf("1. Естественные науки = %d\n"
           "2. Социальные науки = %d\n"
           "3. Исторические познания = %d\n"
           "4. Кулачный бой = %d\n"
           "5. Мастерство фехтования = %d\n"
           "6. Воровство = %d\n"
           "7. Защита = %d\n"
           "8. Лазание = %d\n"
           "9. Понимание людей = %d\n"
           "10. Манипуляции = %d\n"
           "11. Красноречие = %d\n"
           "12. Владение огнестрельным оружием = %d\n"
           "13. Меткость = %d\n"
           "14. Внимание к мелочам = %d\n", skills[0], skills[1], skills[2], skills[3], skills[4], skills[5], skills[6], skills[7], skills[8], skills[9], skills[10], skills[11], skills[12], skills[13]);

    return 0;
}

int up_skill(int point, int skill[], int count)
{    
    int choice;

    printf("У вас %d очков навыков\n", point);
    puts("Сколько добавить?");

    while(scanf("%d", &choice) != 0)
    {
        if(choice > point || choice <= 0)
        {
            puts("Слишком большое или маленькое значение.");
            puts("Введите число больше нуля и не превышающее количество ваших очков.");
            printf("Текущее количество очков: %d\n", point);
            continue;
        }

        point = point - choice;
        skill[count] = skill[count] + choice;

        printf("Осталось: %d очков\n", point);

        break;
    }

    //Какого-то хуя число 11 проходит проверку и ебет мозги потом. Вот так вот, ага   
    if(isalpha(choice) || isgraph(choice) || ispunct(choice))
    {        
        puts("До новых встреч!");
        exit(EXIT_FAILURE);
    }
    

    return point;
}