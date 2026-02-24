section "k02_m1_020"{
    Character_BlinkStart(1, 1, (#1), 1);
    Character_BlinkStart(1, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(1, 68) == 0){
        if (Parameter_GetCh1Param(1, 130) >= 4){
            var0 = 2;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(1, 68) == 1){
        if (Parameter_GetCh1Param(1, 130) >= 4){
            if (Parameter_GetCh1Param(1, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(1, 545) == 0){
                var0 = 2;
                }
            }
        else {
            if (Parameter_GetCh1Param(1, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(1, 545) == 0){
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(1, 68) == 2){
        if (Parameter_GetCh1Param(1, 545) == 1){
            var0 = 1;
            }
        else if (Parameter_GetCh1Param(1, 545) == 0){
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
        Message_MsgDisp("主人公", "(I wonder what I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Capybara Stuffed Toy\".)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(A c...capybara? What a capybara?\n｛Saeki＊＊｝ is hard to\nunderstand.)");
        Parameter_AddCh1Param(1, 68, 1);
        Parameter_AddPl1Param(20, 5);
        Parameter_AddPl1Param(22, #5);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Photo Collection: The Sky\nand the Sea\".)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow... It seems refreshing.\nI wonder if ｛Saeki＊＊｝\nlikes this kind of thing?)");
        Parameter_AddCh1Param(1, 68, 1);
        Parameter_AddPl1Param(17, 5);
        Parameter_AddPl1Param(22, #5);
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Choker\".)");
        Parameter_InPl1Param(340, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, amazing...!\nAs I thought, ｛Saeki＊＊｝\nhas good senses.)");
        Parameter_InCh1Param(1, 545, 1);
        Parameter_AddCh1Param(1, 68, 1);
        }
    }
