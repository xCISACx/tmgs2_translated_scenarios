section "b03_m1_160"{
    if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
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
        Voice_PlayVoice("B0301160_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "So, should we go?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
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
        Message_PauseSkinship();
        Voice_PlayVoice("B0301160_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll leave it to you.\nWhat do you wanna play?");
        Message_MsgSel("Let's play video games.", "What about token games?");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's try that out, then.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
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
        Message_PauseSkinship();
        Voice_PlayVoice("B0301160_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll leave it to you.\nWhat do you wanna play?");
        Message_MsgSel("Let's play video games.", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 161);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Seriously?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
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
        Message_PauseSkinship();
        Voice_PlayVoice("B0301160_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What do you like?\nI'll leave it to you.");
        Message_MsgSel("Let's play video games.", "What about token games?", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Let's go, then.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. I guess that's how it goes.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 162);
            break ;
            case 2:
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301160_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Seriously?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 163);
            break ;
            }
        }
    }
