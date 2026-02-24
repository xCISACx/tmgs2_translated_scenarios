section "k02_g2_020"{
    Character_BlinkStart(11, 1, (#1), 1);
    Character_BlinkStart(11, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
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
    if (Parameter_GetCh1Param(11, 68) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Photo Card Set\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's cute.\nIt's photo cards of different\nanimals.\nI'll hang them up in my room right\naway.)");
        Parameter_AddCh1Param(11, 68, 1);
        Parameter_AddPl1Param(16, 5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (Parameter_GetCh1Param(11, 68) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's an \"Animal Print Bag\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's cute!\nIt'll be perfect to use for when I\ngo out shopping.\nI'll treasure it.)");
        Parameter_AddCh1Param(11, 68, 1);
        Parameter_AddPl1Param(21, 5);
        Parameter_AddPl1Param(17, 5);
        }
    else if (Parameter_GetCh1Param(11, 68) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Bear Music Box\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, how cute!\nIt's a Bear Music Box.\nI have to treasure it.)");
        Parameter_AddCh1Param(11, 68, 1);
        Parameter_AddPl1Param(22, #5);
        Parameter_AddPl1Param(21, 5);
        }
    }
