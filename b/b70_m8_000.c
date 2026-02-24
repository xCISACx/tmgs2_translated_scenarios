section "b70_m8_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 8)){
        }
    else if ((var1 == 1 || var1 == 0)){
        }
    else if (var0 >= 2){
        int var2 = Parameter_GetPl1Param(12);
        switch (var2){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, 1);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, 1);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, 1);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, 1);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(316);
        System_Wait(#30);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh?\nIt's an e-mail from\n｛Masaki＊＊｝!)");
        switch (var0){
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"Do you like being\npampered all the time?\nInvite me, again.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI think today brought me closer to\n｛Masaki＊＊｝!)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"You're too innocent.\nAre you trying to please me?\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\n｛Masaki＊＊｝ seemed very\npleased!)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"You don't trouble big\nbrother very much.\nLooks bad, little sister.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is a little embarrassing but\nI'm so happy...)");
            break ;
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
