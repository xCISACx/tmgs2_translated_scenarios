section "b03_m2_160"{
    if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
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
        Voice_PlayVoice("B0302160_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's noisy... So, what should we do?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
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
        Voice_PlayVoice("B0302160_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What do you wanna play?");
        Message_MsgSel("I want to go to the video game corner.", "I want to go to the token game corner.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Well, that's fine.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
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
        Voice_PlayVoice("B0302160_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What do you wanna do?");
        Message_MsgSel("I want to go to the video game corner.", "The music game corner!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Phew*... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 161);
            break ;
            case 1:
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Music games?\nWell, let's just go check it out.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
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
        Voice_PlayVoice("B0302160_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What do you wanna do?");
        Message_MsgSel("I want to go to the video game corner.", "The token game corner would be nice.", "The music game corner!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Phew*... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 161);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Well, alright.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 162);
            break ;
            case 2:
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302160_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Music games?\nWell, let's just go check it out.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 163);
            break ;
            }
        }
    }
