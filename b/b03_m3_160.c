section "b03_m3_160"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    if (Date_ChkDateOpen(47) == 1){
        Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(46) == 1){
        Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
        }
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 0)){
        Voice_PlayVoice("B0303160_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is bustling, or rather, it is\nnoisy....\nFor the time being, let us go\ninside.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0303160_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What shall we do?\nChoose what you like.");
        Message_MsgSel("Let's play video games.", "What about token games?");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nThere seems to be a large variety of\nvideo games.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Token games, huh.\nLet us aim for one where we can get\nthe most tokens.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0303160_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What shall we do?\nChoose what you like.");
        Message_MsgSel("Let's play video games.", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are a variety of machines.\nThat is a good idea.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Music games... Well, it is fine.\nLet us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0303160_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are three types...\nI will leave you to decide which one\nwe will play.");
        Message_MsgSel("Let's play video games.", "What about token games?", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are a variety of machines.\nThat is a good idea.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nLet us put our all into it so we\nwill get lots of tokens.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 162);
            break ;
            case 2:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303160_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Music games... Well, it is fine.\nLet us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 163);
            break ;
            }
        }
    }
