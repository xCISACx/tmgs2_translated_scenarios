section "k02_g4_020"{
    Character_BlinkStart(13, 1, (#1), 1);
    Character_BlinkStart(13, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(13, 68) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what this is?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's \"Lemon Bath Salts\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it smells nice.\nThey're citrus bath salts.\nI'll use them right away!)");
        Parameter_AddCh1Param(13, 68, 1);
        Parameter_AddPl1Param(22, #5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (Parameter_GetCh1Param(13, 68) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what this is?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Natural Make-up Set\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, amazing!\nI wonder if it's the same thing that\n｛Mizushima＊＊｝ uses?)");
        Parameter_AddCh1Param(13, 68, 1);
        Parameter_AddPl1Param(21, 10);
        }
    else if (Parameter_GetCh1Param(13, 68) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what this is?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Hand-Knitted Cellphone\nPouch\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Amazing, it's handmade!\nI'll use it right away.)");
        Parameter_AddCh1Param(13, 68, 1);
        Parameter_AddPl1Param(20, 10);
        }
    }
