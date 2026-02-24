section "k02_m5_020"{
    Character_BlinkStart(5, 1, (#1), 1);
    Character_BlinkStart(5, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0;
    int var1 = Parameter_GetPl1Param(12);
    switch (var1){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(5, 68) == 0){
        if (Parameter_GetCh1Param(5, 130) >= 4){
            var0 = 2;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(5, 68) == 1){
        if (Parameter_GetCh1Param(5, 130) >= 4){
            if (Parameter_GetCh1Param(5, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(5, 545) == 0){
                var0 = 2;
                }
            }
        else {
            if (Parameter_GetCh1Param(5, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(5, 545) == 0){
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(5, 68) == 2){
        if (Parameter_GetCh1Param(5, 545) == 1){
            var0 = 1;
            }
        else if (Parameter_GetCh1Param(5, 545) == 0){
            var0 = 2;
            }
        }
    switch (var0){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 1;
        break ;
        case 2:
        var0 = 2;
        break ;
        }
    if (var0 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder what present I got?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Post Card Set\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's written here: \"photo by\nChris\"...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Chris＊＊｝\ntook these scenic photos...\nThey're pretty.\nI'll hang them up in my room.");
        Parameter_AddCh1Param(5, 68, 1);
        Parameter_AddPl1Param(20, 10);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder what present I got?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's \"Hand Drawn Cards\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Each card is hand drawn!\nIt's pretty, like an artbook.\nI'll treasure it.");
        Parameter_AddCh1Param(5, 68, 1);
        Parameter_AddPl1Param(17, 5);
        Parameter_AddPl1Param(16, 5);
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder what present I got?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Cloisonne Bracelet\"!)");
        Parameter_InPl1Param(340, 5);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's hand made! It's cute...\nI'll treasure it)");
        Parameter_InCh1Param(5, 545, 50);
        Parameter_AddCh1Param(5, 68, 1);
        }
    }
