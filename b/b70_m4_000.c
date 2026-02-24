section "b70_m4_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 4)){
        }
    else if ((var1 == 1 || var1 == 0)){
        }
    else if (var0 >= 1){
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
        Message_MsgDisp("主人公", "(Ah, it's an e-mail from\n｛Hariya＊＊｝!)");
        switch (var0){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"Did you get some good\nvibes?\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nI think I got a little closer to\n｛Hariya＊＊｝!)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"I had a lot of fun.\nI hope you see a reason to invite me\nagain.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI feel a lot closer to\n｛Hariya＊＊｝.)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"You're pretty bold.\nIt's okay to be more than that.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\n｛Hariya＊＊｝ seemed to be\nvery happy!)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "He wrote, \"I want to become closer\nto you.\nI've only been thinking about this\nrecently.\nI hope you do also.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is a little embarrassing...\nbut I'm happy.)");
            break ;
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
