section "b70_m5_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 5)){
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
        Message_MsgDisp("主人公", "(Ah, I've got mail from\n｛Chris＊＊｝!)");
        switch (var0){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"It's really fun being with\nyou for a whole day!\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI feel like I've gotten a little\ncloser to ｛Chris＊＊｝\ntoday!)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"I was aloof today, too!\nJust kidding▼\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nI feel like I've gotten a lot closer\nto ｛Chris＊＊｝ today!)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"You were teasing me the\nentire day.\nNext time, it will be Chris's\ncounterattack, okay～?\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nIt seems like ｛Chris＊＊｝\nis really happy about how things\nwent today!)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"Sometimes when you smile,\nmy chest tightens.\nWhy is that?\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That's a little embarrassing...\nBut I'm still glad!)");
            break ;
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
