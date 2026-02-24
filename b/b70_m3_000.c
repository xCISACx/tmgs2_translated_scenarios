section "b70_m3_000"{
    int var0;
    int var1;
    var0 = Parameter_GetPl1Param(341);
    var1 = Date_Date_Data(124);
    if ((var0 == 4 && System_GlobalWork(23, 1) == 3)){
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
        Message_MsgDisp("主人公", "(Ah, I've got mail from\n｛Hikami＊＊｝!)");
        switch (var0){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"You have no qualms about\ncalling today's series of events a\ndate, right?\nJust confirming.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI feel like I've gotten a little\ncloser to ｛Hikami＊＊｝\ntoday!)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"Although it was a pleasant\ndate, I want to maintain an adequate\ndistance.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI feel like I've gotten a lot closer\nto ｛Hikami＊＊｝ today!)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"I think that a moderate\namount of skinship fosters a healthy\nrelationship between genders.\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nIt seems like ｛Hikami＊＊｝\nis really happy about how things\nwent today!)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "It says: \"When I remember the things\nthat happened today, my heart beats\nfaster.\nDo you get that, too?\"");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That's a little embarrassing...\nBut I'm still glad.)");
            break ;
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    }
