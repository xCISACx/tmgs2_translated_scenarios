section "b70_m7_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 7)){
        }
    else if ((var1 == 1 || var1 == 0 || Date_GetDateOption(5))){
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
        Message_MsgDisp("主人公", "(Huh?\nAn e-mail from\n｛Wakaouji＊＊｝!)");
        switch (var0){
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"Sensei felt young today.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Excellent!\nI feel today brought me much closer\nto ｛Wakaouji＊＊｝!)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"Sensei made a mistake by\nblowing up.\nIt was incorrect.\nNext time, I'll be more careful.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next time?\n｛Wakaouji＊＊｝ must be quite\npleased!)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"You make me happy,\nprobably more than you think.\nThank you.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm a little embarrassed...\nBut I'm happy.)");
            break ;
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
