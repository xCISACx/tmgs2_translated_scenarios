section "p30_pl_000"{
    int var0;
    if (Parameter_GetPl1Param(13) == 0){
        Background_Bg_GS2("BG_SC300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P2000000_W00000", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Anyone who wants to participate in\nthe Culture Festival's school play\nthis year, please apply if you are\ninterested.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(But there is also an exhibition\nheld by my club.\nWhat should I do...?)");
        Message_MsgSel("Put all effort into club exhibition.", "Participate in the school play.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("P2000000_W00100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Chairman", "We have two weeks to prepare for the\nCulture Festival.\nLet's do our best.");
            SoundEffect_PlayStream(2, "SS_T_00_152_S00");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will do my best!)");
            SoundEffect_StopStream(2, 40);
            Message_CloseMsg();
            Screen_WipeOut(1);
            Screen_ClearScreen();
            if (Parameter_GetPl1Param(25) == 5){
                System_Call_GS2("P51", "M5", 0);
                }
            else if (Parameter_GetPl1Param(25) == 6){
                System_Call_GS2("P61", "G4", 0);
                }
            else if (Parameter_GetPl1Param(25) == 7){
                System_Call_GS2("P71", "PL", 1);
                }
            else if (Parameter_GetPl1Param(25) == 8){
                System_Call_GS2("P81", "M3", 0);
                }
            break ;
            case 1:
            Voice_PlayVoice("P2000000_W00200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Chairman", "We have two weeks to get prepared.\nLet's do our best.");
            SoundEffect_PlayStream(2, "SS_T_00_152_S00");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will do my best!)");
            SoundEffect_StopStream(2, 40);
            Message_CloseMsg();
            Screen_WipeOut(1);
            Screen_ClearScreen();
            Parameter_InPl1Param(320, 0);
            break ;
            }
        }
    else {
        var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(... My phone?\nOh, it's the class chairman.)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("P2000000_W00300", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "The preparations for the Culture\nFestival will be in two weeks from\nnext week.");
        Voice_PlayVoice("P2000000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Our class will be doing a play this\nyear.\nWould you like to participate?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(But there is also an exhibition\nheld by my club.\nWhat should I do...?)");
        Message_MsgSel("Put all effort into club exhibition.", "Participate in the school play.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("P2000000_W00500", #1, "");
            Message_Who(0);
            Message_MsgDisp("Chairman", "Understood.\nGood luck for your club's\nexhibition.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to get better soon and do my\nbest!)");
            Message_CloseMsg();
            Screen_WipeOut(1);
            Screen_ClearScreen();
            if (Parameter_GetPl1Param(25) == 5){
                System_Call_GS2("P51", "M5", 0);
                }
            else if (Parameter_GetPl1Param(25) == 6){
                System_Call_GS2("P61", "G4", 0);
                }
            else if (Parameter_GetPl1Param(25) == 7){
                System_Call_GS2("P71", "PL", 1);
                }
            else if (Parameter_GetPl1Param(25) == 8){
                System_Call_GS2("P81", "M3", 0);
                }
            break ;
            case 1:
            Voice_PlayVoice("P2000000_W00600", #1, "");
            Message_Who(0);
            Message_MsgDisp("Chairman", "Understood.\nPlease give your best in the play.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to get better soon and do my\nbest!)");
            Parameter_InPl1Param(320, 0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
