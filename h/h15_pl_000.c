section "h15_pl_000"{
    int var0 = 0;
    int var1 = 0;
    Background_Bg_GS2("BG_SCA10_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    var1 = Parameter_Rensyu_aft();
    if (var1 == 0){
        Environment_PauseME(0);
        Graphic_OpenAnim(30);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was a decisive victory for\nHanegasaki Academy!\nYay!)");
        }
    else if (var1 == 1){
        Environment_PauseME(0);
        Graphic_OpenAnim(30);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nThat was an easy victory for\nHanegasaki Academy!)");
        }
    else if (var1 == 2){
        Environment_PauseME(0);
        Graphic_OpenAnim(30);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Phew* We somehow won!\nThe opposing team was tough...)");
        }
    else if (var1 == 3){
        Environment_PauseME(0);
        Graphic_OpenAnim(30);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_004_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was only by a margin, but a win\nis still a win!\nI'm glad...)");
        }
    else if (var1 == 4){
        Environment_PauseME(0);
        Graphic_OpenAnim(30, 0);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was close!\nWe were so close to winning, too...)");
        }
    else if (var1 == 5){
        Environment_PauseME(0);
        Graphic_OpenAnim(30, 0);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(We lost...\nThat's really unfortunate...)");
        }
    else if (var1 == 6){
        Environment_PauseME(0);
        Graphic_OpenAnim(30, 0);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was almost a complete and\nutter defeat...\nHow frustrating...)");
        }
    else if (var1 == 7){
        Environment_PauseME(0);
        Graphic_OpenAnim(30, 0);
        Environment_ResumeME(0);
        Music_PlayBGM(0, "MN_K_01_003_000", 89, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nWe couldn't do a thing against the\nother team...)");
        }
    Music_StopBGM(0, 40);
    if (var1 < 4){
        Parameter_AddBkParam(1, 41, 1);
        Parameter_AddCh1Param(#1, 61, 5);
        }
    }
