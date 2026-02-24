section "k02_m8_020"{
    Character_BlinkStart(8, 1, (#1), 1);
    Character_BlinkStart(8, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(8, 68) == 0){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            var0 = 2;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(8, 68) == 1){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            if (Parameter_GetCh1Param(8, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(8, 545) == 0){
                var0 = 2;
                }
            }
        else {
            if (Parameter_GetCh1Param(8, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(8, 545) == 0){
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(8, 68) == 2){
        if (Parameter_GetCh1Param(8, 545) == 1){
            var0 = 1;
            }
        else if (Parameter_GetCh1Param(8, 545) == 0){
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
        Message_MsgDisp("主人公", "(I wonder what kind of present I\ngot?\n... I'll open it.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Dokuro Bear Stuffed Toy\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's cute! I'll put it in my room!)");
        Parameter_AddCh1Param(8, 68, 1);
        Parameter_AddPl1Param(22, #5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what's in here.\nI'll open it.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Preserved Flower Music\nBox\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(A flower music box... It's cute.\nI'll treasure it.)");
        Parameter_AddCh1Param(8, 68, 1);
        Parameter_AddPl1Param(17, 5);
        Parameter_AddPl1Param(18, 5);
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'll open it right away!\nI wonder what it is...?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Rhinestone Chain Belt\"!)");
        Parameter_InPl1Param(340, 8);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's an amazing belt.\nI'll wear it out on a date next\ntime.)");
        Parameter_InCh1Param(8, 545, 50);
        Parameter_AddCh1Param(8, 68, 1);
        }
    }
