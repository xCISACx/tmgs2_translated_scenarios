section "k02_g1_020"{
    Character_BlinkStart(10, 1, (#1), 1);
    Character_BlinkStart(10, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(10, 68) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Fashionable Bag\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's cute...!\n｛Toudou＊＊｝ has good\nsense.\nHaha, I'm glad!)");
        Parameter_AddCh1Param(10, 68, 1);
        Parameter_AddPl1Param(21, 10);
        }
    else if (Parameter_GetCh1Param(10, 68) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Nail Polish Set\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Haha, sounds like\n｛Toudou＊＊｝.\nI wonder if I can also become\nfashionable if I use it?)");
        Parameter_AddCh1Param(10, 68, 1);
        Parameter_AddPl1Param(21, 5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (Parameter_GetCh1Param(10, 68) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Gold Anklet\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, amazing...!\nAs expected of\n｛Toudou＊＊｝.\nI will treasure it!)");
        Parameter_AddCh1Param(10, 68, 1);
        Parameter_AddPl1Param(21, 5);
        Parameter_AddPl1Param(18, 5);
        }
    }
