section "b70_m6_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 6)){
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
        Message_MsgDisp("主人公", "(Ah!\nAn e-mail from\n｛Amachi＊＊｝!)");
        if (Parameter_GetCh1Param(6, 130) <= 2){
            switch (var0){
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"Today was pleasant.\nThank you!\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nToday may have helped me get closer\nto ｛Amachi＊＊｝!)");
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"Senpai has positive\npoints.\nI want to learn, too!\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\n｛Amachi＊＊｝ and I are\ngetting so much closer now!)");
                break ;
                }
            }
        else {
            switch (var0){
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"Senpai's a pretty good\nkid.\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nToday may have helped me get closer\nto ｛Amachi＊＊｝!)");
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"I feel like I've gotten\nto understand Senpai a little.\nI want to know more.\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\n｛Amachi＊＊｝ and I are\ngetting so much closer now!)");
                break ;
                case 3:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"To be frank, isn't Senpai\na little sexy?\nIt's not unpleasant, quite the\nopposite.\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\n｛Amachi＊＊｝ seemed to be\nreally happy!)");
                break ;
                case 4:
                Message_Who(0);
                Message_MsgDisp("主人公", "He wrote, \"Senpai was a bit lovely\ntoday.\nBut just a little.\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm a little embarrassed...\nbut happy.)");
                break ;
                }
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
