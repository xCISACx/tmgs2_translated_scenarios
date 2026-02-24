section "k02_m6_020"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(6, 68) == 0){
        if (Parameter_GetCh1Param(6, 130) >= 4){
            var0 = 1;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(6, 68) == 1){
        if (Parameter_GetCh1Param(6, 130) >= 4){
            if (Parameter_GetCh1Param(6, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(6, 545) == 0){
                var0 = 1;
                }
            }
        else {
            if (Parameter_GetCh1Param(6, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(6, 545) == 0){
                var0 = 1;
                }
            }
        }
    switch (var0){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 1;
        break ;
        }
    if (var0 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Cake Plate and Silver\nTableware Set\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, I got something pretty from\n｛Amachi＊＊｝!\nI must take care of it.)");
        Parameter_AddCh1Param(6, 68, 1);
        Parameter_AddPl1Param(17, 5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Silver Designer's Brooch\"!)");
        Parameter_InPl1Param(340, 6);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, it's quite a cute design!\nI'll wear this when I go on a date.)");
        Parameter_InCh1Param(6, 545, 50);
        Parameter_AddCh1Param(6, 68, 1);
        }
    }
