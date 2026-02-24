section "k02_m3_020"{
    Character_BlinkStart(3, 1, (#1), 1);
    Character_BlinkStart(3, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(3, 68) == 0){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            var0 = 2;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(3, 68) == 1){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            if (Parameter_GetCh1Param(3, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(3, 545) == 0){
                var0 = 2;
                }
            }
        else {
            if (Parameter_GetCh1Param(3, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(3, 545) == 0){
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(3, 68) == 2){
        if (Parameter_GetCh1Param(3, 545) == 1){
            var0 = 1;
            }
        else if (Parameter_GetCh1Param(3, 545) == 0){
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
        Message_MsgDisp("主人公", "(I wonder what I got as a present?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Size 7 Whole Birthday\nCake\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it looks yummy!\nIt says \"Happy Birthday\".\nI wonder if I can eat this all?)");
        Parameter_AddCh1Param(3, 68, 1);
        Parameter_AddPl1Param(22, #5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what I got as a present?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Titanium Fountain Pen\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(The color is nice and it looks easy\nto use!\nIt's something that\n｛Hikami＊＊｝ would choose.\nI'll treasure it.)");
        Parameter_AddCh1Param(3, 68, 1);
        Parameter_AddPl1Param(16, 10);
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what I got as a present?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's an \"Electro Magnetic\nWristwatch\"!)");
        Parameter_InPl1Param(340, 3);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's cool!\nI'll wear it the next time we go on\na date.)");
        Parameter_InCh1Param(3, 545, 50);
        Parameter_AddCh1Param(3, 68, 1);
        }
    }
