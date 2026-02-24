section "k02_g3_020"{
    Character_BlinkStart(12, 1, (#1), 1);
    Character_BlinkStart(12, 1, (#1), 2);
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
    if (Parameter_GetCh1Param(12, 68) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Compact Mirror\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on it...\nIt says: \"You'll become a cute girl\nif you look into this mirror every\nday!\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Haha, that sounds like\n｛Nishimoto＊＊｝!\nI'll treasure it!)");
        Parameter_AddCh1Param(12, 68, 1);
        Parameter_AddPl1Param(21, 5);
        Parameter_AddPl1Param(20, 5);
        }
    else if (Parameter_GetCh1Param(12, 68) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's an \"Angel Postcard\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on it...\nIt says: \"Apparently, this angel\nwill grant you happy love!\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It would be nice if it really was\ntrue!)");
        Parameter_AddCh1Param(12, 68, 1);
        Parameter_AddPl1Param(22, #5);
        Parameter_AddPl1Param(17, 5);
        }
    else if (Parameter_GetCh1Param(12, 68) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what present I got?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a \"Movie Actress Poster\"!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on it...\nIt says: \"I really recommend this\nmovie.\nYou'll definitely cry!\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Nishimoto＊＊｝ is\nrecommending this movie to me,\nhuh...\nI'll watch it next time!)");
        Parameter_AddCh1Param(12, 68, 1);
        Parameter_AddPl1Param(18, 10);
        }
    }
