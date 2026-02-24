section "k02_m2_020"{
    Character_BlinkStart(2, 1, (#1), 1);
    Character_BlinkStart(2, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(2, 68) == 0){
        if (Parameter_GetCh1Param(2, 130) >= 4){
            var0 = 2;
            }
        else {
            var0 = 0;
            }
        }
    else if (Parameter_GetCh1Param(2, 68) == 1){
        if (Parameter_GetCh1Param(2, 130) >= 4){
            if (Parameter_GetCh1Param(2, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(2, 545) == 0){
                var0 = 2;
                }
            }
        else {
            if (Parameter_GetCh1Param(2, 545) == 1){
                var0 = 0;
                }
            else if (Parameter_GetCh1Param(2, 545) == 0){
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(2, 68) == 2){
        if (Parameter_GetCh1Param(2, 545) == 1){
            var0 = 1;
            }
        else if (Parameter_GetCh1Param(2, 545) == 0){
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
        Message_MsgDisp("主人公", "(I'll open it right now!\nI wonder what it is...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Long, Long Sports Towel\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's long!\nI'll take this with me the next time\nI go jogging!)");
        Parameter_AddCh1Param(2, 68, 1);
        Parameter_AddPl1Param(19, 10);
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what kind of present it\nis?\nI'll open it.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's an \"α Wave CD\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like I can relax with\nthis!\nI'll listen to it next time!)");
        Parameter_AddCh1Param(2, 68, 1);
        Parameter_AddPl1Param(16, 5);
        Parameter_AddPl1Param(22, #5);
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what kind of present it\nis?\nI'll open it!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Polka Dot Wristband\"!)");
        Parameter_InPl1Param(340, 2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ehh, so things as cute as this\nexist...\nI'll wear it on a date next time!)");
        Parameter_InCh1Param(2, 545, 50);
        Parameter_AddCh1Param(2, 68, 1);
        }
    }
