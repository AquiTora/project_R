//Константы и объявления для программы main.c

//функция для пропуска символов в строке(раньше была в основной функции, а теперь здесь, потому что везде она нужна)
void scip(void);

//Повышение навыка на 1
int up_stat(int stat[], int num, int count);

//Повышение скиллов на сколько укажите
int up_skill(int point, int skill[], int count);

//Функция для новой строки. А то длинно printf() постоянно писать
void ns(void);

//Функция для повышения уровня(ОСТАЛАСЬ ТОЛЬКО ОНА И ВСЕ БУДЕТ ГОТОВО!!! ПОТОМ ТОЛЬКО ИСПРАВЛЕНИЕ ОШИБОК!!!)
int lvl_up(int * xp_up, int stat[], int size_st, int skills[], int size_sk);

//Текст ситуации в баре
void in_bar_text(void);

//Осуществление выбора в ситуации в баре
bool in_bar_act(bool * bar_hit, bool * bar_conv, bool * bar_prot, bool * bar_trick, int choice_f, int skills_1, int skills_2, int skills_3, int skills_4, int skills_5, int skills_6, int * xp_up);

//Последствия разруливания ситуации в баре
void consequences_bar(int choice_f, bool * bar_hit, bool * bar_conv, bool * bar_prot, bool * bar_trick, bool * in_trash_c);

//Текст предваряющие, что мы будем делать далее
void fur_case_text(bool in_trash_c);

//Дальнейшие дела после потасовки в баре
void fur_case(int choice_f, bool * in_trash_c, bool * go_bath);

//Текст похода в ванную
void in_bath_text(void);

//Это мы пришли в министерство и еще стоим на входе
//1 - скил здесь - это проверка на внимательность
void ent_ministry(bool trash, bool go_bath, bool * shape_point, bool * shape_not, int skills_1, int * xp_up);

//Мы наконец-то добрались до встречи. Эта функция для нее
//0 - Естественные науки, 1 - Социальные науки, 2 - Исторические познания, 3 - Кулачный бой, 4 - Мастерство, 10 - Красноречие, 11 - Огнестрел, 12 - Меткость
bool in_meeting(bool * acc, bool trash, bool go_bath, int skills_0, int skills_1, int skills_2, int skills_3, int skills_4, int skills_10, int skills_11, int skills_12, int * xp_up, bool shape_point, bool shape_not);

//Функция на случай, если отношения с Графом испорчены окончательно и он выгоняет вас из кабинета
bool go_away(int rel, bool shape_point, bool shape_not, bool if_go_bath);

//Функция на случай если вы приняты
void you_accept(bool trash, bool shape_point, bool shape_not, bool go_bath);

//На случай, если вы выгнаны с позором
void you_get_out(bool trash);

//На случай, если вы просто не подошли на должность и вас попросили уйти
void you_not_accept(bool trash, bool shape_point, bool shape_not, bool go_bath);

//На это функции все заканчивается
void thank_you(void);